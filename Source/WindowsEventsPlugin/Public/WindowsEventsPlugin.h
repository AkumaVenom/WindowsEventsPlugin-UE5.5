#pragma once
#include "Modules/ModuleManager.h"
class FWindowsEventsPluginModule:public IModuleInterface{
 public:
  virtual void StartupModule()override;
  virtual void ShutdownModule()override;
};