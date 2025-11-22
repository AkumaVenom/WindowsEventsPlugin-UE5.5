\
        #include "WinEventManager.h"
        #include "HAL/PlatformProcess.h"
        #include <psapi.h>

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
            if (H_FG)      UnhookWinEvent(H_FG);
            if (H_Create)  UnhookWinEvent(H_Create);
            if (H_Destroy) UnhookWinEvent(H_Destroy);
            if (H_Name)    UnhookWinEvent(H_Name);
        }

        FString UWinEventManager::GetTitle(HWND h)
        {
            wchar_t t[512];
            GetWindowTextW(h, t, 512);
            return FString(t);
        }

        FString UWinEventManager::GetProc(HWND h)
        {
            DWORD pid = 0;
            GetWindowThreadProcessId(h, &pid);

            HANDLE p = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, false, pid);
            if (!p) return TEXT("Unknown");

            wchar_t buf[MAX_PATH];
            GetModuleFileNameExW(p, nullptr, buf, MAX_PATH);
            CloseHandle(p);

            return FString(buf);
        }

        void CALLBACK UWinEventManager::HookCallback(
            HWINEVENTHOOK Hook, DWORD Event, HWND hwnd,
            LONG idObj, LONG idChild, DWORD Thr, DWORD Time)
        {
            if (!Inst) return;

            FString T = GetTitle(hwnd);
            FString P = GetProc(hwnd);

            wchar_t cls[256];
            GetClassNameW(hwnd, cls, 256);
            FString C(cls);

            bool IsNotif =
                C.Contains(TEXT("Toast")) ||
                C.Contains(TEXT("Xaml")) ||
                C.Contains(TEXT("ActionCenter")) ||
                C.Contains(TEXT("CoreWindow"));

            if (Event == EVENT_OBJECT_CREATE && IsNotif)
            {
                Inst->OnWindowsNotification.Broadcast(P, T);
            }

            if (Event == EVENT_SYSTEM_FOREGROUND)
                Inst->OnActiveWindowChanged.Broadcast(T, P);

            if (Event == EVENT_OBJECT_CREATE)
                Inst->OnWindowOpened.Broadcast(T, P);

            if (Event == EVENT_OBJECT_DESTROY)
                Inst->OnWindowClosed.Broadcast(T, P);

            if (Event == EVENT_OBJECT_NAMECHANGE)
                Inst->OnWindowTitleChanged.Broadcast(T, P);
        }
