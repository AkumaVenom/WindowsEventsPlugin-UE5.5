// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WindowsEventsPlugin/Public/WinEventManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWinEventManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_WindowsEventsPlugin();
WINDOWSEVENTSPLUGIN_API UClass* Z_Construct_UClass_UWinEventManager();
WINDOWSEVENTSPLUGIN_API UClass* Z_Construct_UClass_UWinEventManager_NoRegister();
WINDOWSEVENTSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature();
WINDOWSEVENTSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature();
WINDOWSEVENTSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature();
WINDOWSEVENTSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature();
WINDOWSEVENTSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature();
// End Cross Module References

// Begin Delegate FWinEvent_OnWindowClosed
struct Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature_Statics
{
	struct _Script_WindowsEventsPlugin_eventWinEvent_OnWindowClosed_Parms
	{
		FString Title;
		FString Process;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WinEventManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Process;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WindowsEventsPlugin_eventWinEvent_OnWindowClosed_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature_Statics::NewProp_Process = { "Process", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WindowsEventsPlugin_eventWinEvent_OnWindowClosed_Parms, Process), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature_Statics::NewProp_Process,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WindowsEventsPlugin, nullptr, "WinEvent_OnWindowClosed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature_Statics::_Script_WindowsEventsPlugin_eventWinEvent_OnWindowClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature_Statics::_Script_WindowsEventsPlugin_eventWinEvent_OnWindowClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWinEvent_OnWindowClosed_DelegateWrapper(const FMulticastScriptDelegate& WinEvent_OnWindowClosed, const FString& Title, const FString& Process)
{
	struct _Script_WindowsEventsPlugin_eventWinEvent_OnWindowClosed_Parms
	{
		FString Title;
		FString Process;
	};
	_Script_WindowsEventsPlugin_eventWinEvent_OnWindowClosed_Parms Parms;
	Parms.Title=Title;
	Parms.Process=Process;
	WinEvent_OnWindowClosed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWinEvent_OnWindowClosed

// Begin Delegate FWinEvent_OnWindowOpened
struct Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature_Statics
{
	struct _Script_WindowsEventsPlugin_eventWinEvent_OnWindowOpened_Parms
	{
		FString Title;
		FString Process;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WinEventManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Process;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WindowsEventsPlugin_eventWinEvent_OnWindowOpened_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature_Statics::NewProp_Process = { "Process", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WindowsEventsPlugin_eventWinEvent_OnWindowOpened_Parms, Process), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature_Statics::NewProp_Process,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WindowsEventsPlugin, nullptr, "WinEvent_OnWindowOpened__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature_Statics::_Script_WindowsEventsPlugin_eventWinEvent_OnWindowOpened_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature_Statics::_Script_WindowsEventsPlugin_eventWinEvent_OnWindowOpened_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWinEvent_OnWindowOpened_DelegateWrapper(const FMulticastScriptDelegate& WinEvent_OnWindowOpened, const FString& Title, const FString& Process)
{
	struct _Script_WindowsEventsPlugin_eventWinEvent_OnWindowOpened_Parms
	{
		FString Title;
		FString Process;
	};
	_Script_WindowsEventsPlugin_eventWinEvent_OnWindowOpened_Parms Parms;
	Parms.Title=Title;
	Parms.Process=Process;
	WinEvent_OnWindowOpened.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWinEvent_OnWindowOpened

// Begin Delegate FWinEvent_OnActiveChanged
struct Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature_Statics
{
	struct _Script_WindowsEventsPlugin_eventWinEvent_OnActiveChanged_Parms
	{
		FString Title;
		FString Process;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WinEventManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Process;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WindowsEventsPlugin_eventWinEvent_OnActiveChanged_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature_Statics::NewProp_Process = { "Process", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WindowsEventsPlugin_eventWinEvent_OnActiveChanged_Parms, Process), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature_Statics::NewProp_Process,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WindowsEventsPlugin, nullptr, "WinEvent_OnActiveChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature_Statics::_Script_WindowsEventsPlugin_eventWinEvent_OnActiveChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature_Statics::_Script_WindowsEventsPlugin_eventWinEvent_OnActiveChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWinEvent_OnActiveChanged_DelegateWrapper(const FMulticastScriptDelegate& WinEvent_OnActiveChanged, const FString& Title, const FString& Process)
{
	struct _Script_WindowsEventsPlugin_eventWinEvent_OnActiveChanged_Parms
	{
		FString Title;
		FString Process;
	};
	_Script_WindowsEventsPlugin_eventWinEvent_OnActiveChanged_Parms Parms;
	Parms.Title=Title;
	Parms.Process=Process;
	WinEvent_OnActiveChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWinEvent_OnActiveChanged

// Begin Delegate FWinEvent_OnTitleChanged
struct Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature_Statics
{
	struct _Script_WindowsEventsPlugin_eventWinEvent_OnTitleChanged_Parms
	{
		FString Title;
		FString Process;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WinEventManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Process;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WindowsEventsPlugin_eventWinEvent_OnTitleChanged_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature_Statics::NewProp_Process = { "Process", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WindowsEventsPlugin_eventWinEvent_OnTitleChanged_Parms, Process), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature_Statics::NewProp_Process,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WindowsEventsPlugin, nullptr, "WinEvent_OnTitleChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature_Statics::_Script_WindowsEventsPlugin_eventWinEvent_OnTitleChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature_Statics::_Script_WindowsEventsPlugin_eventWinEvent_OnTitleChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWinEvent_OnTitleChanged_DelegateWrapper(const FMulticastScriptDelegate& WinEvent_OnTitleChanged, const FString& Title, const FString& Process)
{
	struct _Script_WindowsEventsPlugin_eventWinEvent_OnTitleChanged_Parms
	{
		FString Title;
		FString Process;
	};
	_Script_WindowsEventsPlugin_eventWinEvent_OnTitleChanged_Parms Parms;
	Parms.Title=Title;
	Parms.Process=Process;
	WinEvent_OnTitleChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWinEvent_OnTitleChanged

// Begin Delegate FWinEvent_OnNotification
struct Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature_Statics
{
	struct _Script_WindowsEventsPlugin_eventWinEvent_OnNotification_Parms
	{
		FString App;
		FString Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WinEventManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_App;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature_Statics::NewProp_App = { "App", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WindowsEventsPlugin_eventWinEvent_OnNotification_Parms, App), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WindowsEventsPlugin_eventWinEvent_OnNotification_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature_Statics::NewProp_App,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WindowsEventsPlugin, nullptr, "WinEvent_OnNotification__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature_Statics::_Script_WindowsEventsPlugin_eventWinEvent_OnNotification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature_Statics::_Script_WindowsEventsPlugin_eventWinEvent_OnNotification_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWinEvent_OnNotification_DelegateWrapper(const FMulticastScriptDelegate& WinEvent_OnNotification, const FString& App, const FString& Text)
{
	struct _Script_WindowsEventsPlugin_eventWinEvent_OnNotification_Parms
	{
		FString App;
		FString Text;
	};
	_Script_WindowsEventsPlugin_eventWinEvent_OnNotification_Parms Parms;
	Parms.App=App;
	Parms.Text=Text;
	WinEvent_OnNotification.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWinEvent_OnNotification

// Begin Class UWinEventManager
void UWinEventManager::StaticRegisterNativesUWinEventManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWinEventManager);
UClass* Z_Construct_UClass_UWinEventManager_NoRegister()
{
	return UWinEventManager::StaticClass();
}
struct Z_Construct_UClass_UWinEventManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WinEventManager.h" },
		{ "ModuleRelativePath", "Public/WinEventManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActiveWindowChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/WinEventManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWindowOpened_MetaData[] = {
		{ "ModuleRelativePath", "Public/WinEventManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWindowClosed_MetaData[] = {
		{ "ModuleRelativePath", "Public/WinEventManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWindowTitleChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/WinEventManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWindowsNotification_MetaData[] = {
		{ "ModuleRelativePath", "Public/WinEventManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActiveWindowChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWindowOpened;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWindowClosed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWindowTitleChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWindowsNotification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWinEventManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWinEventManager_Statics::NewProp_OnActiveWindowChanged = { "OnActiveWindowChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWinEventManager, OnActiveWindowChanged), Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnActiveChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActiveWindowChanged_MetaData), NewProp_OnActiveWindowChanged_MetaData) }; // 2580927153
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWinEventManager_Statics::NewProp_OnWindowOpened = { "OnWindowOpened", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWinEventManager, OnWindowOpened), Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowOpened__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWindowOpened_MetaData), NewProp_OnWindowOpened_MetaData) }; // 1694073803
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWinEventManager_Statics::NewProp_OnWindowClosed = { "OnWindowClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWinEventManager, OnWindowClosed), Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnWindowClosed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWindowClosed_MetaData), NewProp_OnWindowClosed_MetaData) }; // 3014397727
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWinEventManager_Statics::NewProp_OnWindowTitleChanged = { "OnWindowTitleChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWinEventManager, OnWindowTitleChanged), Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnTitleChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWindowTitleChanged_MetaData), NewProp_OnWindowTitleChanged_MetaData) }; // 3698731857
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWinEventManager_Statics::NewProp_OnWindowsNotification = { "OnWindowsNotification", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWinEventManager, OnWindowsNotification), Z_Construct_UDelegateFunction_WindowsEventsPlugin_WinEvent_OnNotification__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWindowsNotification_MetaData), NewProp_OnWindowsNotification_MetaData) }; // 2884117288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWinEventManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinEventManager_Statics::NewProp_OnActiveWindowChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinEventManager_Statics::NewProp_OnWindowOpened,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinEventManager_Statics::NewProp_OnWindowClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinEventManager_Statics::NewProp_OnWindowTitleChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinEventManager_Statics::NewProp_OnWindowsNotification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWinEventManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWinEventManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsEventsPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWinEventManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWinEventManager_Statics::ClassParams = {
	&UWinEventManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWinEventManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWinEventManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWinEventManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UWinEventManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWinEventManager()
{
	if (!Z_Registration_Info_UClass_UWinEventManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWinEventManager.OuterSingleton, Z_Construct_UClass_UWinEventManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWinEventManager.OuterSingleton;
}
template<> WINDOWSEVENTSPLUGIN_API UClass* StaticClass<UWinEventManager>()
{
	return UWinEventManager::StaticClass();
}
UWinEventManager::UWinEventManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWinEventManager);
UWinEventManager::~UWinEventManager() {}
// End Class UWinEventManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_v0_0_19_2a_Plugins_WindowsEventsPlugin_Source_WindowsEventsPlugin_Public_WinEventManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWinEventManager, UWinEventManager::StaticClass, TEXT("UWinEventManager"), &Z_Registration_Info_UClass_UWinEventManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWinEventManager), 3900424394U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_v0_0_19_2a_Plugins_WindowsEventsPlugin_Source_WindowsEventsPlugin_Public_WinEventManager_h_1577146388(TEXT("/Script/WindowsEventsPlugin"),
	Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_v0_0_19_2a_Plugins_WindowsEventsPlugin_Source_WindowsEventsPlugin_Public_WinEventManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Akuma_OneDrive_Documents_Unreal_Projects_DesktopPal_UE5_v0_0_19_2a_Plugins_WindowsEventsPlugin_Source_WindowsEventsPlugin_Public_WinEventManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
