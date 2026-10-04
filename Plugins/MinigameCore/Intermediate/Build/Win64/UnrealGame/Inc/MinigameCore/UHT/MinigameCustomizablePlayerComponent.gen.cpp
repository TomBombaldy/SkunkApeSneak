// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinigameCustomizablePlayerComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMinigameCustomizablePlayerComponent() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_UCustomizablePlayerComponent();
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObject_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameCustomizablePlayerComponent();
MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameCustomizablePlayerComponent_NoRegister();
MINIGAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationOverride();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCustomizationOverride ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCustomizationOverride;
class UScriptStruct* FCustomizationOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCustomizationOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCustomizationOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizationOverride, (UObject*)Z_Construct_UPackage__Script_MinigameCore(), TEXT("CustomizationOverride"));
	}
	return Z_Registration_Info_UScriptStruct_FCustomizationOverride.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCustomizationOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MinigameCustomizablePlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "Category", "Override" },
		{ "ModuleRelativePath", "Public/MinigameCustomizablePlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[] = {
		{ "Category", "Override" },
		{ "ModuleRelativePath", "Public/MinigameCustomizablePlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizationOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizationOverride_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizationOverride, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizationOverride_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizationOverride, ParameterValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterValue_MetaData), NewProp_ParameterValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizationOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationOverride_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationOverride_Statics::NewProp_ParameterValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizationOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
	nullptr,
	&NewStructOps,
	"CustomizationOverride",
	Z_Construct_UScriptStruct_FCustomizationOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationOverride_Statics::PropPointers),
	sizeof(FCustomizationOverride),
	alignof(FCustomizationOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizationOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomizationOverride()
{
	if (!Z_Registration_Info_UScriptStruct_FCustomizationOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCustomizationOverride.InnerSingleton, Z_Construct_UScriptStruct_FCustomizationOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCustomizationOverride.InnerSingleton;
}
// ********** End ScriptStruct FCustomizationOverride **********************************************

// ********** Begin Class UMinigameCustomizablePlayerComponent *************************************
void UMinigameCustomizablePlayerComponent::StaticRegisterNativesUMinigameCustomizablePlayerComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMinigameCustomizablePlayerComponent;
UClass* UMinigameCustomizablePlayerComponent::GetPrivateStaticClass()
{
	using TClass = UMinigameCustomizablePlayerComponent;
	if (!Z_Registration_Info_UClass_UMinigameCustomizablePlayerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MinigameCustomizablePlayerComponent"),
			Z_Registration_Info_UClass_UMinigameCustomizablePlayerComponent.InnerSingleton,
			StaticRegisterNativesUMinigameCustomizablePlayerComponent,
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
	return Z_Registration_Info_UClass_UMinigameCustomizablePlayerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMinigameCustomizablePlayerComponent_NoRegister()
{
	return UMinigameCustomizablePlayerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMinigameCustomizablePlayerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MinigameCustomizablePlayerComponent.h" },
		{ "ModuleRelativePath", "Public/MinigameCustomizablePlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObject_MetaData[] = {
		{ "Category", "Override" },
		{ "ModuleRelativePath", "Public/MinigameCustomizablePlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomizationOverrides_MetaData[] = {
		{ "Category", "Override" },
		{ "ModuleRelativePath", "Public/MinigameCustomizablePlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomizableObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomizationOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomizationOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinigameCustomizablePlayerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameCustomizablePlayerComponent_Statics::NewProp_CustomizableObject = { "CustomizableObject", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameCustomizablePlayerComponent, CustomizableObject), Z_Construct_UClass_UCustomizableObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomizableObject_MetaData), NewProp_CustomizableObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMinigameCustomizablePlayerComponent_Statics::NewProp_CustomizationOverrides_Inner = { "CustomizationOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizationOverride, METADATA_PARAMS(0, nullptr) }; // 4287615833
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMinigameCustomizablePlayerComponent_Statics::NewProp_CustomizationOverrides = { "CustomizationOverrides", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameCustomizablePlayerComponent, CustomizationOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomizationOverrides_MetaData), NewProp_CustomizationOverrides_MetaData) }; // 4287615833
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMinigameCustomizablePlayerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameCustomizablePlayerComponent_Statics::NewProp_CustomizableObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameCustomizablePlayerComponent_Statics::NewProp_CustomizationOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameCustomizablePlayerComponent_Statics::NewProp_CustomizationOverrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameCustomizablePlayerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMinigameCustomizablePlayerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCustomizablePlayerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameCustomizablePlayerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinigameCustomizablePlayerComponent_Statics::ClassParams = {
	&UMinigameCustomizablePlayerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMinigameCustomizablePlayerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameCustomizablePlayerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameCustomizablePlayerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMinigameCustomizablePlayerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMinigameCustomizablePlayerComponent()
{
	if (!Z_Registration_Info_UClass_UMinigameCustomizablePlayerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinigameCustomizablePlayerComponent.OuterSingleton, Z_Construct_UClass_UMinigameCustomizablePlayerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMinigameCustomizablePlayerComponent.OuterSingleton;
}
UMinigameCustomizablePlayerComponent::UMinigameCustomizablePlayerComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMinigameCustomizablePlayerComponent);
UMinigameCustomizablePlayerComponent::~UMinigameCustomizablePlayerComponent() {}
// ********** End Class UMinigameCustomizablePlayerComponent ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCustomizablePlayerComponent_h__Script_MinigameCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCustomizationOverride::StaticStruct, Z_Construct_UScriptStruct_FCustomizationOverride_Statics::NewStructOps, TEXT("CustomizationOverride"), &Z_Registration_Info_UScriptStruct_FCustomizationOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizationOverride), 4287615833U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMinigameCustomizablePlayerComponent, UMinigameCustomizablePlayerComponent::StaticClass, TEXT("UMinigameCustomizablePlayerComponent"), &Z_Registration_Info_UClass_UMinigameCustomizablePlayerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinigameCustomizablePlayerComponent), 2514930624U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCustomizablePlayerComponent_h__Script_MinigameCore_3977350153(TEXT("/Script/MinigameCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCustomizablePlayerComponent_h__Script_MinigameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCustomizablePlayerComponent_h__Script_MinigameCore_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCustomizablePlayerComponent_h__Script_MinigameCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCustomizablePlayerComponent_h__Script_MinigameCore_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
