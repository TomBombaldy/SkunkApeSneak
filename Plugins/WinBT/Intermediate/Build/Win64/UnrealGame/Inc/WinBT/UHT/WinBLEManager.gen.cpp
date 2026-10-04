// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WinBLEManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWinBLEManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_WinBT();
WINBT_API UClass* Z_Construct_UClass_UWinBLEManager();
WINBT_API UClass* Z_Construct_UClass_UWinBLEManager_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWinBLEManager ***********************************************************
void UWinBLEManager::StaticRegisterNativesUWinBLEManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWinBLEManager;
UClass* UWinBLEManager::GetPrivateStaticClass()
{
	using TClass = UWinBLEManager;
	if (!Z_Registration_Info_UClass_UWinBLEManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WinBLEManager"),
			Z_Registration_Info_UClass_UWinBLEManager.InnerSingleton,
			StaticRegisterNativesUWinBLEManager,
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
	return Z_Registration_Info_UClass_UWinBLEManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UWinBLEManager_NoRegister()
{
	return UWinBLEManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWinBLEManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ServiceUUIDs \"0000FE84-0000-1000-8000-00805F9B34FB\"\n// CharacteristicUUID \"0000FE84-0000-0001-8000-00805F9B34FB\"\n" },
		{ "IncludePath", "WinBLEManager.h" },
		{ "ModuleRelativePath", "Public/WinBLEManager.h" },
		{ "ToolTip", "ServiceUUIDs \"0000FE84-0000-1000-8000-00805F9B34FB\"\nCharacteristicUUID \"0000FE84-0000-0001-8000-00805F9B34FB\"" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWinBLEManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWinBLEManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WinBT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWinBLEManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWinBLEManager_Statics::ClassParams = {
	&UWinBLEManager::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWinBLEManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UWinBLEManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWinBLEManager()
{
	if (!Z_Registration_Info_UClass_UWinBLEManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWinBLEManager.OuterSingleton, Z_Construct_UClass_UWinBLEManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWinBLEManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWinBLEManager);
UWinBLEManager::~UWinBLEManager() {}
// ********** End Class UWinBLEManager *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_HostProject_Plugins_WinBT_Source_WinBT_Public_WinBLEManager_h__Script_WinBT_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWinBLEManager, UWinBLEManager::StaticClass, TEXT("UWinBLEManager"), &Z_Registration_Info_UClass_UWinBLEManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWinBLEManager), 175275694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_HostProject_Plugins_WinBT_Source_WinBT_Public_WinBLEManager_h__Script_WinBT_621119075(TEXT("/Script/WinBT"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_HostProject_Plugins_WinBT_Source_WinBT_Public_WinBLEManager_h__Script_WinBT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_HostProject_Plugins_WinBT_Source_WinBT_Public_WinBLEManager_h__Script_WinBT_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
