#include "WindowsEventsPlugin.h"
#include "WinEventManager.h"
void FWindowsEventsPluginModule::StartupModule(){ UWinEventManager::Get()->Start(); }
void FWindowsEventsPluginModule::ShutdownModule(){}
IMPLEMENT_MODULE(FWindowsEventsPluginModule, WindowsEventsPlugin)