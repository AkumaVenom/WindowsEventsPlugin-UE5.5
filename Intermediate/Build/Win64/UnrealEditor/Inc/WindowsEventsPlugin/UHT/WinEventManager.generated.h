// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WinEventManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WINDOWSEVENTSPLUGIN_WinEventManager_generated_h
#error "WinEventManager.generated.h already included, missing '#pragma once' in WinEventManager.h"
#endif
#define WINDOWSEVENTSPLUGIN_WinEventManager_generated_h

#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_v0_0_19_2a_Plugins_WindowsEventsPlugin_Source_WindowsEventsPlugin_Public_WinEventManager_h_7_DELEGATE \
WINDOWSEVENTSPLUGIN_API void FWinEvent_OnWindowClosed_DelegateWrapper(const FMulticastScriptDelegate& WinEvent_OnWindowClosed, const FString& Title, const FString& Process);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_v0_0_19_2a_Plugins_WindowsEventsPlugin_Source_WindowsEventsPlugin_Public_WinEventManager_h_8_DELEGATE \
WINDOWSEVENTSPLUGIN_API void FWinEvent_OnWindowOpened_DelegateWrapper(const FMulticastScriptDelegate& WinEvent_OnWindowOpened, const FString& Title, const FString& Process);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_v0_0_19_2a_Plugins_WindowsEventsPlugin_Source_WindowsEventsPlugin_Public_WinEventManager_h_9_DELEGATE \
WINDOWSEVENTSPLUGIN_API void FWinEvent_OnActiveChanged_DelegateWrapper(const FMulticastScriptDelegate& WinEvent_OnActiveChanged, const FString& Title, const FString& Process);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_v0_0_19_2a_Plugins_WindowsEventsPlugin_Source_WindowsEventsPlugin_Public_WinEventManager_h_10_DELEGATE \
WINDOWSEVENTSPLUGIN_API void FWinEvent_OnTitleChanged_DelegateWrapper(const FMulticastScriptDelegate& WinEvent_OnTitleChanged, const FString& Title, const FString& Process);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_v0_0_19_2a_Plugins_WindowsEventsPlugin_Source_WindowsEventsPlugin_Public_WinEventManager_h_11_DELEGATE \
WINDOWSEVENTSPLUGIN_API void FWinEvent_OnNotification_DelegateWrapper(const FMulticastScriptDelegate& WinEvent_OnNotification, const FString& App, const FString& Text);


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_v0_0_19_2a_Plugins_WindowsEventsPlugin_Source_WindowsEventsPlugin_Public_WinEventManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWinEventManager(); \
	friend struct Z_Construct_UClass_UWinEventManager_Statics; \
public: \
	DECLARE_CLASS(UWinEventManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WindowsEventsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UWinEventManager)


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_v0_0_19_2a_Plugins_WindowsEventsPlugin_Source_WindowsEventsPlugin_Public_WinEventManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWinEventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWinEventManager(UWinEventManager&&); \
	UWinEventManager(const UWinEventManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWinEventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWinEventManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWinEventManager) \
	NO_API virtual ~UWinEventManager();


#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_v0_0_19_2a_Plugins_WindowsEventsPlugin_Source_WindowsEventsPlugin_Public_WinEventManager_h_13_PROLOG
#define FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_v0_0_19_2a_Plugins_WindowsEventsPlugin_Source_WindowsEventsPlugin_Public_WinEventManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_v0_0_19_2a_Plugins_WindowsEventsPlugin_Source_WindowsEventsPlugin_Public_WinEventManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_v0_0_19_2a_Plugins_WindowsEventsPlugin_Source_WindowsEventsPlugin_Public_WinEventManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WINDOWSEVENTSPLUGIN_API UClass* StaticClass<class UWinEventManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_v0_0_19_2a_Plugins_WindowsEventsPlugin_Source_WindowsEventsPlugin_Public_WinEventManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
