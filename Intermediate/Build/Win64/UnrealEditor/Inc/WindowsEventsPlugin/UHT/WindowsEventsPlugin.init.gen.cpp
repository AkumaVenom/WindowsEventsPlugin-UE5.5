// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsEventsPlugin_init() {}
	WINDOWSEVENTSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature();
	WINDOWSEVENTSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature();
	WINDOWSEVENTSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature();
	WINDOWSEVENTSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature();
	WINDOWSEVENTSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WindowsEventsPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WindowsEventsPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_WindowsEventsPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WindowsEventsPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC8BC6761,
				0x0A9691E3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WindowsEventsPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WindowsEventsPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WindowsEventsPlugin(Z_Construct_UPackage__Script_WindowsEventsPlugin, TEXT("/Script/WindowsEventsPlugin"), Z_Registration_Info_UPackage__Script_WindowsEventsPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC8BC6761, 0x0A9691E3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
