#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <windows.h>
#include "WinEventManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWinEvent_OnWindowClosed, FString, Title, FString, Process);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWinEvent_OnWindowOpened, FString, Title, FString, Process);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWinEvent_OnActiveChanged, FString, Title, FString, Process);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWinEvent_OnTitleChanged, FString, Title, FString, Process);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWinEvent_OnNotification, FString, App, FString, Text);

UCLASS(BlueprintType)
class WINDOWSEVENTSPLUGIN_API UWinEventManager:public UObject{
 GENERATED_BODY()
public:
 static UWinEventManager* Get();

 UPROPERTY(BlueprintAssignable) FWinEvent_OnActiveChanged OnActiveWindowChanged;
 UPROPERTY(BlueprintAssignable) FWinEvent_OnWindowOpened OnWindowOpened;
 UPROPERTY(BlueprintAssignable) FWinEvent_OnWindowClosed OnWindowClosed;
 UPROPERTY(BlueprintAssignable) FWinEvent_OnTitleChanged OnWindowTitleChanged;
 UPROPERTY(BlueprintAssignable) FWinEvent_OnNotification OnWindowsNotification;

 void Start();
 void Stop();

 private:
  static UWinEventManager* Inst;

  static void CALLBACK HookCallback(HWINEVENTHOOK Hook,DWORD Event,HWND hwnd,LONG idObj,LONG idChild,DWORD Thr,DWORD Time);

  static FString GetTitle(HWND h);
  static FString GetProc(HWND h);

  HWINEVENTHOOK H_FG;
  HWINEVENTHOOK H_Create;
  HWINEVENTHOOK H_Destroy;
  HWINEVENTHOOK H_Name;
};