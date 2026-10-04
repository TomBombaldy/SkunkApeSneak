// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WindowsBluetoothManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWindowsBluetoothManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UBluetoothManager_NoRegister();
LIMBITLESSBTWINDOWS_API UClass* Z_Construct_UClass_UWindowsBluetoothManager();
LIMBITLESSBTWINDOWS_API UClass* Z_Construct_UClass_UWindowsBluetoothManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_LimbitlessBTWindows();
WINBT_API UClass* Z_Construct_UClass_UWinBLEManager_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWindowsBluetoothManager *************************************************
void UWindowsBluetoothManager::StaticRegisterNativesUWindowsBluetoothManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWindowsBluetoothManager;
UClass* UWindowsBluetoothManager::GetPrivateStaticClass()
{
	using TClass = UWindowsBluetoothManager;
	if (!Z_Registration_Info_UClass_UWindowsBluetoothManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WindowsBluetoothManager"),
			Z_Registration_Info_UClass_UWindowsBluetoothManager.InnerSingleton,
			StaticRegisterNativesUWindowsBluetoothManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UWindowsBluetoothManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UWindowsBluetoothManager_NoRegister()
{
	return UWindowsBluetoothManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWindowsBluetoothManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WindowsBluetoothManager.h" },
		{ "ModuleRelativePath", "Public/WindowsBluetoothManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinBLEManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/WindowsBluetoothManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WinBLEManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowsBluetoothManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWindowsBluetoothManager_Statics::NewProp_WinBLEManager = { "WinBLEManager", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWindowsBluetoothManager, WinBLEManager), Z_Construct_UClass_UWinBLEManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinBLEManager_MetaData), NewProp_WinBLEManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWindowsBluetoothManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsBluetoothManager_Statics::NewProp_WinBLEManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsBluetoothManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWindowsBluetoothManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBTWindows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsBluetoothManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWindowsBluetoothManager_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBluetoothManager_NoRegister, (int32)VTABLE_OFFSET(UWindowsBluetoothManager, IBluetoothManager), false },  // 390813429
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWindowsBluetoothManager_Statics::ClassParams = {
	&UWindowsBluetoothManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWindowsBluetoothManager_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsBluetoothManager_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsBluetoothManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UWindowsBluetoothManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWindowsBluetoothManager()
{
	if (!Z_Registration_Info_UClass_UWindowsBluetoothManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWindowsBluetoothManager.OuterSingleton, Z_Construct_UClass_UWindowsBluetoothManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWindowsBluetoothManager.OuterSingleton;
}
UWindowsBluetoothManager::UWindowsBluetoothManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowsBluetoothManager);
UWindowsBluetoothManager::~UWindowsBluetoothManager() {}
// ********** End Class UWindowsBluetoothManager ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTWindows_Public_WindowsBluetoothManager_h__Script_LimbitlessBTWindows_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWindowsBluetoothManager, UWindowsBluetoothManager::StaticClass, TEXT("UWindowsBluetoothManager"), &Z_Registration_Info_UClass_UWindowsBluetoothManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWindowsBluetoothManager), 4186346997U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTWindows_Public_WindowsBluetoothManager_h__Script_LimbitlessBTWindows_3430504300(TEXT("/Script/LimbitlessBTWindows"),
	Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTWindows_Public_WindowsBluetoothManager_h__Script_LimbitlessBTWindows_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBTWindows_Public_WindowsBluetoothManager_h__Script_LimbitlessBTWindows_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
