#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "WinEventManager.h"
#include "WinEventManagerFunctionLibrary.generated.h"

/**
 * Blueprint function library to access the WinEventManager singleton.
 */
UCLASS()
class WINDOWSEVENTSPLUGIN_API UWinEventManagerFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /** Returns the singleton WinEventManager instance for binding events and calling functions. */
    UFUNCTION(BlueprintCallable, Category="Windows Events")
    static UWinEventManager* GetWinEventManager();
};
