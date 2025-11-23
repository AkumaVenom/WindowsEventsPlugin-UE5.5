#include "WinEventManager.h"
#include "HAL/PlatformProcess.h"
#include "Async/Async.h"
#include <psapi.h>
#include <UIAutomation.h>

#pragma comment(lib, "Ole32.lib")
#pragma comment(lib, "OleAut32.lib")

// Helper: recursively gather any text exposed by UI Automation on the foreground window.
// This walks all children and concatenates both ValuePattern and TextPattern content.
static void AppendElementTextRecursive(IUIAutomation* Automation, IUIAutomationElement* Element, FString& OutText)
{
    if (!Automation || !Element)
    {
        return;
    }

    // 1) ValuePattern (edit boxes, URL bars, etc.)
    IUIAutomationValuePattern* ValuePattern = nullptr;
    if (SUCCEEDED(Element->GetCurrentPattern(UIA_ValuePatternId, (IUnknown**)&ValuePattern)) && ValuePattern)
    {
        BSTR BstrValue = nullptr;
        if (SUCCEEDED(ValuePattern->get_CurrentValue(&BstrValue)) && BstrValue)
        {
            FString ValueStr(BstrValue);
            SysFreeString(BstrValue);

            if (!ValueStr.IsEmpty())
            {
                OutText += ValueStr;
                OutText += TEXT("\n");
            }
        }
        ValuePattern->Release();
        ValuePattern = nullptr;
    }

    // 2) TextPattern (document/content areas, Notepad, etc.)
    IUIAutomationTextPattern* TextPattern = nullptr;
    if (SUCCEEDED(Element->GetCurrentPattern(UIA_TextPatternId, (IUnknown**)&TextPattern)) && TextPattern)
    {
        IUIAutomationTextRange* DocRange = nullptr;
        if (SUCCEEDED(TextPattern->get_DocumentRange(&DocRange)) && DocRange)
        {
            BSTR BstrText = nullptr;
            if (SUCCEEDED(DocRange->GetText(-1, &BstrText)) && BstrText)
            {
                FString TextStr(BstrText);
                SysFreeString(BstrText);

                if (!TextStr.IsEmpty())
                {
                    OutText += TextStr;
                    OutText += TEXT("\n");
                }
            }
            DocRange->Release();
        }
        TextPattern->Release();
        TextPattern = nullptr;
    }

    // 3) Recurse into children
    IUIAutomationCondition* TrueCondition = nullptr;
    if (FAILED(Automation->CreateTrueCondition(&TrueCondition)) || !TrueCondition)
    {
        return;
    }

    IUIAutomationElementArray* Children = nullptr;
    if (SUCCEEDED(Element->FindAll(TreeScope_Children, TrueCondition, &Children)) && Children)
    {
        int Count = 0;
        if (SUCCEEDED(Children->get_Length(&Count)))
        {
            for (int Index = 0; Index < Count; ++Index)
            {
                IUIAutomationElement* Child = nullptr;
                if (SUCCEEDED(Children->GetElement(Index, &Child)) && Child)
                {
                    AppendElementTextRecursive(Automation, Child, OutText);
                    Child->Release();
                }
            }
        }
        Children->Release();
    }

    TrueCondition->Release();
}



UWinEventManager* UWinEventManager::Inst = nullptr;

UWinEventManager* UWinEventManager::Get()
{
    if (!Inst)
    {
        Inst = NewObject<UWinEventManager>();
        Inst->AddToRoot();
        Inst->Start();
    }
    return Inst;
}

void UWinEventManager::Start()
{
    H_FG = SetWinEventHook(
        EVENT_SYSTEM_FOREGROUND, EVENT_SYSTEM_FOREGROUND,
        nullptr, HookCallback, 0, 0,
        WINEVENT_OUTOFCONTEXT | WINEVENT_SKIPOWNPROCESS
    );

    H_Create = SetWinEventHook(
        EVENT_OBJECT_CREATE, EVENT_OBJECT_CREATE,
        nullptr, HookCallback, 0, 0,
        WINEVENT_OUTOFCONTEXT
    );

    H_Destroy = SetWinEventHook(
        EVENT_OBJECT_DESTROY, EVENT_OBJECT_DESTROY,
        nullptr, HookCallback, 0, 0,
        WINEVENT_OUTOFCONTEXT
    );

    H_Name = SetWinEventHook(
        EVENT_OBJECT_NAMECHANGE, EVENT_OBJECT_NAMECHANGE,
        nullptr, HookCallback, 0, 0,
        WINEVENT_OUTOFCONTEXT
    );
}

void UWinEventManager::Stop()
{
    if (H_FG)     { UnhookWinEvent(H_FG);     H_FG = nullptr; }
    if (H_Create) { UnhookWinEvent(H_Create); H_Create = nullptr; }
    if (H_Destroy){ UnhookWinEvent(H_Destroy);H_Destroy = nullptr; }
    if (H_Name)   { UnhookWinEvent(H_Name);   H_Name = nullptr; }
}

FString UWinEventManager::GetTitle(HWND h)
{
    wchar_t t[512];
    if (GetWindowTextW(h, t, 512) == 0)
    {
        return FString();
    }
    return FString(t);
}

FString UWinEventManager::GetProc(HWND h)
{
    DWORD pid = 0;
    GetWindowThreadProcessId(h, &pid);

    HANDLE p = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, false, pid);
    if (!p)
    {
        return TEXT("Unknown");
    }

    wchar_t buf[MAX_PATH];
    if (GetModuleFileNameExW(p, nullptr, buf, MAX_PATH) == 0)
    {
        CloseHandle(p);
        return TEXT("Unknown");
    }

    CloseHandle(p);
    return FString(buf);
}

void CALLBACK UWinEventManager::HookCallback(
    HWINEVENTHOOK Hook, DWORD Event, HWND hwnd,
    LONG idObj, LONG idChild, DWORD Thr, DWORD Time)
{
    if (!Inst || !hwnd)
    {
        return;
    }

    // Collect data on the hook thread
    FString T = GetTitle(hwnd);
    FString P = GetProc(hwnd);

    wchar_t cls[256];
    GetClassNameW(hwnd, cls, 256);
    FString C(cls);

    bool bIsNotification =
        C.Contains(TEXT("Toast")) ||
        C.Contains(TEXT("Xaml")) ||
        C.Contains(TEXT("ActionCenter")) ||
        C.Contains(TEXT("CoreWindow"));

    // Bounce the actual UE work to the GAME THREAD
    AsyncTask(ENamedThreads::GameThread, [Event, T, P, bIsNotification]()
    {
        if (!Inst)
        {
            return;
        }

        if (Event == EVENT_OBJECT_CREATE && bIsNotification)
        {
            Inst->OnWindowsNotification.Broadcast(P, T);
        }

        if (Event == EVENT_SYSTEM_FOREGROUND)
        {
            Inst->OnActiveWindowChanged.Broadcast(T, P);
        }

        if (Event == EVENT_OBJECT_CREATE)
        {
            Inst->OnWindowOpened.Broadcast(T, P);
        }

        if (Event == EVENT_OBJECT_DESTROY)
        {
            Inst->OnWindowClosed.Broadcast(T, P);
        }

        if (Event == EVENT_OBJECT_NAMECHANGE)
        {
            Inst->OnWindowTitleChanged.Broadcast(T, P);
        }
    });
}


static FString StripUrls(const FString& InText)
{
    FString Result;
    Result.Reserve(InText.Len());

    bool bInUrl = false;

    for (int32 i = 0; i < InText.Len(); ++i)
    {
        const TCHAR C = InText[i];

        if (!bInUrl)
        {
            // Detect http://
            if (C == 'h')
            {
                if (i + 7 <= InText.Len() && InText.Mid(i, 7).Equals(TEXT("http://"), ESearchCase::IgnoreCase))
                {
                    bInUrl = true;
                    continue; // skip 'h' that starts the URL
                }
                if (i + 8 <= InText.Len() && InText.Mid(i, 8).Equals(TEXT("https://"), ESearchCase::IgnoreCase))
                {
                    bInUrl = true;
                    continue; // skip 'h' that starts the URL
                }
            }

            Result.AppendChar(C);
        }
        else
        {
            // Inside URL: skip characters until we hit whitespace or line break
            if (FChar::IsWhitespace(C))
            {
                bInUrl = false;
                Result.AppendChar(C); // keep the separator
            }
        }
    }

    return Result;
}

FString UWinEventManager::GetActiveWindowText()
{
    HWND hWnd = GetForegroundWindow();
    if (!hWnd)
    {
        return TEXT("");
    }

    // Initialize COM for this thread (lightweight, balanced with CoUninitialize below)
    HRESULT HrInit = CoInitialize(nullptr);
    bool bDidInit = SUCCEEDED(HrInit);

    IUIAutomation* Automation = nullptr;
    HRESULT Hr = CoCreateInstance(
        __uuidof(CUIAutomation),
        nullptr,
        CLSCTX_INPROC_SERVER,
        __uuidof(IUIAutomation),
        (void**)&Automation
    );

    if (FAILED(Hr) || !Automation)
    {
        if (bDidInit)
        {
            CoUninitialize();
        }
        return TEXT("");
    }

    IUIAutomationElement* Root = nullptr;
    Hr = Automation->ElementFromHandle(hWnd, &Root);
    if (FAILED(Hr) || !Root)
    {
        Automation->Release();
        if (bDidInit)
        {
            CoUninitialize();
        }
        return TEXT("");
    }

    FString OutputText;
    AppendElementTextRecursive(Automation, Root, OutputText);

    Root->Release();
    Automation->Release();

    if (bDidInit)
    {
        CoUninitialize();
    }

    return StripUrls(OutputText);
}