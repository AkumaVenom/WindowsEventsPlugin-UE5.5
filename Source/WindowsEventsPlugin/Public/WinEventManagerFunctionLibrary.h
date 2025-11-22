#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "WinEventManager.h"
#include "WinEventManagerFunctionLibrary.generated.h"

UCLASS()
class WINDOWSEVENTSPLUGIN_API UWinEventManagerFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /** Returns the singleton WinEventManager instance for binding events. */
    UFUNCTION(BlueprintCallable, Category = "Windows Events")
    static UWinEventManager* GetWinEventManager();
};
