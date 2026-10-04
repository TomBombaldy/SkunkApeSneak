// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/AIPlayerDataSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAIPlayerDataSubsystem() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_UAIPlayerDataSubsystem();
BASHCORE_API UClass* Z_Construct_UClass_UAIPlayerDataSubsystem_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UPlayerData_NoRegister();
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_BashCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAIPlayerDataSubsystem ***************************************************
void UAIPlayerDataSubsystem::StaticRegisterNativesUAIPlayerDataSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAIPlayerDataSubsystem;
UClass* UAIPlayerDataSubsystem::GetPrivateStaticClass()
{
	using TClass = UAIPlayerDataSubsystem;
	if (!Z_Registration_Info_UClass_UAIPlayerDataSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AIPlayerDataSubsystem"),
			Z_Registration_Info_UClass_UAIPlayerDataSubsystem.InnerSingleton,
			StaticRegisterNativesUAIPlayerDataSubsystem,
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
	return Z_Registration_Info_UClass_UAIPlayerDataSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UAIPlayerDataSubsystem_NoRegister()
{
	return UAIPlayerDataSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAIPlayerDataSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/AIPlayerDataSubsystem.h" },
		{ "ModuleRelativePath", "Public/Player/AIPlayerDataSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/AIPlayerDataSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/AIPlayerDataSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomizableObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIPlayerDataSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIPlayerDataSubsystem_Statics::NewProp_PlayerData_Inner = { "PlayerData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayerData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIPlayerDataSubsystem_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIPlayerDataSubsystem, PlayerData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerData_MetaData), NewProp_PlayerData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIPlayerDataSubsystem_Statics::NewProp_CustomizableObject = { "CustomizableObject", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIPlayerDataSubsystem, CustomizableObject), Z_Construct_UClass_UCustomizableObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomizableObject_MetaData), NewProp_CustomizableObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIPlayerDataSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPlayerDataSubsystem_Statics::NewProp_PlayerData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPlayerDataSubsystem_Statics::NewProp_PlayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPlayerDataSubsystem_Statics::NewProp_CustomizableObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIPlayerDataSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAIPlayerDataSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIPlayerDataSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIPlayerDataSubsystem_Statics::ClassParams = {
	&UAIPlayerDataSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAIPlayerDataSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAIPlayerDataSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIPlayerDataSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIPlayerDataSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIPlayerDataSubsystem()
{
	if (!Z_Registration_Info_UClass_UAIPlayerDataSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIPlayerDataSubsystem.OuterSingleton, Z_Construct_UClass_UAIPlayerDataSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIPlayerDataSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIPlayerDataSubsystem);
UAIPlayerDataSubsystem::~UAIPlayerDataSubsystem() {}
// ********** End Class UAIPlayerDataSubsystem *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_AIPlayerDataSubsystem_h__Script_BashCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIPlayerDataSubsystem, UAIPlayerDataSubsystem::StaticClass, TEXT("UAIPlayerDataSubsystem"), &Z_Registration_Info_UClass_UAIPlayerDataSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIPlayerDataSubsystem), 1601381333U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_AIPlayerDataSubsystem_h__Script_BashCore_1833336135(TEXT("/Script/BashCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_AIPlayerDataSubsystem_h__Script_BashCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_AIPlayerDataSubsystem_h__Script_BashCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
