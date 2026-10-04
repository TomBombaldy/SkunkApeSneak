// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Player/CustomizablePlayerComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCustomizablePlayerComponent() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_UCustomizablePlayerComponent();
BASHCORE_API UClass* Z_Construct_UClass_UCustomizablePlayerComponent_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UPlayerData_NoRegister();
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableSkeletalComponent();
UPackage* Z_Construct_UPackage__Script_BashCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCustomizablePlayerComponent Function LoadCustomizableInstance ***********
struct Z_Construct_UFunction_UCustomizablePlayerComponent_LoadCustomizableInstance_Statics
{
	struct CustomizablePlayerComponent_eventLoadCustomizableInstance_Parms
	{
		UPlayerData* PlayerData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Customizable Player" },
		{ "ModuleRelativePath", "Public/Components/Player/CustomizablePlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizablePlayerComponent_LoadCustomizableInstance_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizablePlayerComponent_eventLoadCustomizableInstance_Parms, PlayerData), Z_Construct_UClass_UPlayerData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizablePlayerComponent_LoadCustomizableInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizablePlayerComponent_LoadCustomizableInstance_Statics::NewProp_PlayerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizablePlayerComponent_LoadCustomizableInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizablePlayerComponent_LoadCustomizableInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomizablePlayerComponent, nullptr, "LoadCustomizableInstance", Z_Construct_UFunction_UCustomizablePlayerComponent_LoadCustomizableInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizablePlayerComponent_LoadCustomizableInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizablePlayerComponent_LoadCustomizableInstance_Statics::CustomizablePlayerComponent_eventLoadCustomizableInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizablePlayerComponent_LoadCustomizableInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizablePlayerComponent_LoadCustomizableInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCustomizablePlayerComponent_LoadCustomizableInstance_Statics::CustomizablePlayerComponent_eventLoadCustomizableInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomizablePlayerComponent_LoadCustomizableInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizablePlayerComponent_LoadCustomizableInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomizablePlayerComponent::execLoadCustomizableInstance)
{
	P_GET_OBJECT(UPlayerData,Z_Param_PlayerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadCustomizableInstance(Z_Param_PlayerData);
	P_NATIVE_END;
}
// ********** End Class UCustomizablePlayerComponent Function LoadCustomizableInstance *************

// ********** Begin Class UCustomizablePlayerComponent *********************************************
void UCustomizablePlayerComponent::StaticRegisterNativesUCustomizablePlayerComponent()
{
	UClass* Class = UCustomizablePlayerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadCustomizableInstance", &UCustomizablePlayerComponent::execLoadCustomizableInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomizablePlayerComponent;
UClass* UCustomizablePlayerComponent::GetPrivateStaticClass()
{
	using TClass = UCustomizablePlayerComponent;
	if (!Z_Registration_Info_UClass_UCustomizablePlayerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CustomizablePlayerComponent"),
			Z_Registration_Info_UClass_UCustomizablePlayerComponent.InnerSingleton,
			StaticRegisterNativesUCustomizablePlayerComponent,
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
	return Z_Registration_Info_UClass_UCustomizablePlayerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCustomizablePlayerComponent_NoRegister()
{
	return UCustomizablePlayerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCustomizablePlayerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/Player/CustomizablePlayerComponent.h" },
		{ "ModuleRelativePath", "Public/Components/Player/CustomizablePlayerComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomizablePlayerComponent_LoadCustomizableInstance, "LoadCustomizableInstance" }, // 763417210
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizablePlayerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomizablePlayerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCustomizableSkeletalComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizablePlayerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizablePlayerComponent_Statics::ClassParams = {
	&UCustomizablePlayerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizablePlayerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizablePlayerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomizablePlayerComponent()
{
	if (!Z_Registration_Info_UClass_UCustomizablePlayerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizablePlayerComponent.OuterSingleton, Z_Construct_UClass_UCustomizablePlayerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomizablePlayerComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizablePlayerComponent);
UCustomizablePlayerComponent::~UCustomizablePlayerComponent() {}
// ********** End Class UCustomizablePlayerComponent ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizablePlayerComponent_h__Script_BashCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizablePlayerComponent, UCustomizablePlayerComponent::StaticClass, TEXT("UCustomizablePlayerComponent"), &Z_Registration_Info_UClass_UCustomizablePlayerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizablePlayerComponent), 1930239817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizablePlayerComponent_h__Script_BashCore_3514290136(TEXT("/Script/BashCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizablePlayerComponent_h__Script_BashCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizablePlayerComponent_h__Script_BashCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
