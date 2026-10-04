// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LimbitlessBluetoothManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLimbitlessBluetoothManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UBluetoothManager_NoRegister();
PLATFORMMANAGER_API UClass* Z_Construct_UClass_ULimbitlessBluetoothManager();
PLATFORMMANAGER_API UClass* Z_Construct_UClass_ULimbitlessBluetoothManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_PlatformManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULimbitlessBluetoothManager **********************************************
void ULimbitlessBluetoothManager::StaticRegisterNativesULimbitlessBluetoothManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULimbitlessBluetoothManager;
UClass* ULimbitlessBluetoothManager::GetPrivateStaticClass()
{
	using TClass = ULimbitlessBluetoothManager;
	if (!Z_Registration_Info_UClass_ULimbitlessBluetoothManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LimbitlessBluetoothManager"),
			Z_Registration_Info_UClass_ULimbitlessBluetoothManager.InnerSingleton,
			StaticRegisterNativesULimbitlessBluetoothManager,
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
	return Z_Registration_Info_UClass_ULimbitlessBluetoothManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ULimbitlessBluetoothManager_NoRegister()
{
	return ULimbitlessBluetoothManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULimbitlessBluetoothManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LimbitlessBluetoothManager.h" },
		{ "ModuleRelativePath", "Public/LimbitlessBluetoothManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BLEManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/LimbitlessBluetoothManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_BLEManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULimbitlessBluetoothManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::NewProp_BLEManager = { "BLEManager", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULimbitlessBluetoothManager, BLEManager), Z_Construct_UClass_UBluetoothManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BLEManager_MetaData), NewProp_BLEManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::NewProp_BLEManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PlatformManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBluetoothManager_NoRegister, (int32)VTABLE_OFFSET(ULimbitlessBluetoothManager, IBluetoothManager), false },  // 390813429
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::ClassParams = {
	&ULimbitlessBluetoothManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULimbitlessBluetoothManager()
{
	if (!Z_Registration_Info_UClass_ULimbitlessBluetoothManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULimbitlessBluetoothManager.OuterSingleton, Z_Construct_UClass_ULimbitlessBluetoothManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULimbitlessBluetoothManager.OuterSingleton;
}
ULimbitlessBluetoothManager::ULimbitlessBluetoothManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULimbitlessBluetoothManager);
ULimbitlessBluetoothManager::~ULimbitlessBluetoothManager() {}
// ********** End Class ULimbitlessBluetoothManager ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_LimbitlessBluetoothManager_h__Script_PlatformManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULimbitlessBluetoothManager, ULimbitlessBluetoothManager::StaticClass, TEXT("ULimbitlessBluetoothManager"), &Z_Registration_Info_UClass_ULimbitlessBluetoothManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULimbitlessBluetoothManager), 2895720890U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_LimbitlessBluetoothManager_h__Script_PlatformManager_763937205(TEXT("/Script/PlatformManager"),
	Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_LimbitlessBluetoothManager_h__Script_PlatformManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_LimbitlessBluetoothManager_h__Script_PlatformManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
