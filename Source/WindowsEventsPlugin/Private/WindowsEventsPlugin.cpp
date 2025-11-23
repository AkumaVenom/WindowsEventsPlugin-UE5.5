#include "WindowsEventsPlugin.h"
#include "WinEventManager.h"

void FWindowsEventsPluginModule::StartupModule()
{
    // Ensure the manager exists and hooks are started.
    UWinEventManager::Get();
}

void FWindowsEventsPluginModule::ShutdownModule()
{
    if (UWinEventManager* Mgr = UWinEventManager::Get())
    {
        Mgr->Stop();
    }
}

IMPLEMENT_MODULE(FWindowsEventsPluginModule, WindowsEventsPlugin)
