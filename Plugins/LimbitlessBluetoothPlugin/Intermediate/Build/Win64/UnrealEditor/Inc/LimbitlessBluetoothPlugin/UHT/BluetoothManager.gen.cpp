// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Managers/BluetoothManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBluetoothManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UBluetoothManager();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UBluetoothManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UBluetoothManager ****************************************************
void UBluetoothManager::StaticRegisterNativesUBluetoothManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBluetoothManager;
UClass* UBluetoothManager::GetPrivateStaticClass()
{
	using TClass = UBluetoothManager;
	if (!Z_Registration_Info_UClass_UBluetoothManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BluetoothManager"),
			Z_Registration_Info_UClass_UBluetoothManager.InnerSingleton,
			StaticRegisterNativesUBluetoothManager,
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
	return Z_Registration_Info_UClass_UBluetoothManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UBluetoothManager_NoRegister()
{
	return UBluetoothManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBluetoothManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/BluetoothManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBluetoothManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBluetoothManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBluetoothManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBluetoothManager_Statics::ClassParams = {
	&UBluetoothManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBluetoothManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UBluetoothManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBluetoothManager()
{
	if (!Z_Registration_Info_UClass_UBluetoothManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBluetoothManager.OuterSingleton, Z_Construct_UClass_UBluetoothManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBluetoothManager.OuterSingleton;
}
UBluetoothManager::UBluetoothManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBluetoothManager);
// ********** End Interface UBluetoothManager ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_Managers_BluetoothManager_h__Script_LimbitlessBluetoothPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBluetoothManager, UBluetoothManager::StaticClass, TEXT("UBluetoothManager"), &Z_Registration_Info_UClass_UBluetoothManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBluetoothManager), 390813429U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_Managers_BluetoothManager_h__Script_LimbitlessBluetoothPlugin_1496336677(TEXT("/Script/LimbitlessBluetoothPlugin"),
	Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_Managers_BluetoothManager_h__Script_LimbitlessBluetoothPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_Managers_BluetoothManager_h__Script_LimbitlessBluetoothPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
