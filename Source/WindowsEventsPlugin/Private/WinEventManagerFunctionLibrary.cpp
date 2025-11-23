#include "WinEventManagerFunctionLibrary.h"

UWinEventManager* UWinEventManagerFunctionLibrary::GetWinEventManager()
{
    return UWinEventManager::Get();
}
