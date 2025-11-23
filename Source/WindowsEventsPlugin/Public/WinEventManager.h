#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <windows.h>
#include "WinEventManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWinEvent_OnWindowClosed,  FString, Title, FString, Process);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWinEvent_OnWindowOpened,  FString, Title, FString, Process);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWinEvent_OnActiveChanged, FString, Title, FString, Process);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWinEvent_OnTitleChanged,  FString, Title, FString, Process);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWinEvent_OnNotification,  FString, App,   FString, Text);

/**
 * Singleton-style manager that exposes Windows OS events and active window text to Blueprints.
 */
UCLASS(BlueprintType)
class WINDOWSEVENTSPLUGIN_API UWinEventManager : public UObject
{
    GENERATED_BODY()

public:
    /** Returns the global WinEventManager instance (created on first use). */
    static UWinEventManager* Get();

    /** Fires when the active (foreground) window changes. Title = window text, Process = full exe path. */
    UPROPERTY(BlueprintAssignable, Category="Windows Events")
    FWinEvent_OnActiveChanged OnActiveWindowChanged;

    /** Fires when a top-level window is created. */
    UPROPERTY(BlueprintAssignable, Category="Windows Events")
    FWinEvent_OnWindowOpened OnWindowOpened;

    /** Fires when a top-level window is destroyed. */
    UPROPERTY(BlueprintAssignable, Category="Windows Events")
    FWinEvent_OnWindowClosed OnWindowClosed;

    /** Fires when a window title changes. */
    UPROPERTY(BlueprintAssignable, Category="Windows Events")
    FWinEvent_OnTitleChanged OnWindowTitleChanged;

    /** Fires when a Windows toast-style notification is detected. */
    UPROPERTY(BlueprintAssignable, Category="Windows Events")
    FWinEvent_OnNotification OnWindowsNotification;

    /** Starts internal Windows hooks (called automatically on first Get()). */
    void Start();

    /** Stops internal Windows hooks. */
    void Stop();

    /**
     * Returns all accessible text from the current foreground window using Windows UI Automation.
     * This can include web page text (browsers), Notepad text, Explorer labels, etc.
     */
    UFUNCTION(BlueprintCallable, Category="Windows Events")
    FString GetActiveWindowText();

private:
    static UWinEventManager* Inst;

    static void CALLBACK HookCallback(
        HWINEVENTHOOK Hook,
        DWORD Event,
        HWND hwnd,
        LONG idObj,
        LONG idChild,
        DWORD Thr,
        DWORD Time
    );

    static FString GetTitle(HWND h);
    static FString GetProc(HWND h);

    HWINEVENTHOOK H_FG     = nullptr;
    HWINEVENTHOOK H_Create = nullptr;
    HWINEVENTHOOK H_Destroy= nullptr;
    HWINEVENTHOOK H_Name   = nullptr;
};
