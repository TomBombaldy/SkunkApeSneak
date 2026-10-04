// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/PlayerRotationMovingAverageComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerRotationMovingAverageComponent() {}

// ********** Begin Cross Module References ********************************************************
MINIGAMECORE_API UClass* Z_Construct_UClass_UPlayerRotationComponent();
MINIGAMECORE_API UClass* Z_Construct_UClass_UPlayerRotationMovingAverageComponent();
MINIGAMECORE_API UClass* Z_Construct_UClass_UPlayerRotationMovingAverageComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlayerRotationMovingAverageComponent ************************************
void UPlayerRotationMovingAverageComponent::StaticRegisterNativesUPlayerRotationMovingAverageComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerRotationMovingAverageComponent;
UClass* UPlayerRotationMovingAverageComponent::GetPrivateStaticClass()
{
	using TClass = UPlayerRotationMovingAverageComponent;
	if (!Z_Registration_Info_UClass_UPlayerRotationMovingAverageComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerRotationMovingAverageComponent"),
			Z_Registration_Info_UClass_UPlayerRotationMovingAverageComponent.InnerSingleton,
			StaticRegisterNativesUPlayerRotationMovingAverageComponent,
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
	return Z_Registration_Info_UClass_UPlayerRotationMovingAverageComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerRotationMovingAverageComponent_NoRegister()
{
	return UPlayerRotationMovingAverageComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerRotationMovingAverageComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Uses a simple moving average of rotation data to calculate delta rotations.\n * This effectively \"zeros\" the rotation continuously, removing the need to explicitly zero with ResetInitialOrientation()\n * Use if you need rotation/acceleration data for quick movements and actions without interrupting gameplay.\n * If you need aiming behavior, use the base UPlayerRotationComponent instead\n */" },
		{ "IncludePath", "Player/PlayerRotationMovingAverageComponent.h" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationMovingAverageComponent.h" },
		{ "ToolTip", "Uses a simple moving average of rotation data to calculate delta rotations.\nThis effectively \"zeros\" the rotation continuously, removing the need to explicitly zero with ResetInitialOrientation()\nUse if you need rotation/acceleration data for quick movements and actions without interrupting gameplay.\nIf you need aiming behavior, use the base UPlayerRotationComponent instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowSize_MetaData[] = {
		{ "Category", "Player Rotation" },
		{ "Comment", "// Number of samples to use in the average\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationMovingAverageComponent.h" },
		{ "ToolTip", "Number of samples to use in the average" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WindowSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerRotationMovingAverageComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerRotationMovingAverageComponent_Statics::NewProp_WindowSize = { "WindowSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerRotationMovingAverageComponent, WindowSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowSize_MetaData), NewProp_WindowSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerRotationMovingAverageComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerRotationMovingAverageComponent_Statics::NewProp_WindowSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerRotationMovingAverageComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerRotationMovingAverageComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlayerRotationComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerRotationMovingAverageComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerRotationMovingAverageComponent_Statics::ClassParams = {
	&UPlayerRotationMovingAverageComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerRotationMovingAverageComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerRotationMovingAverageComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerRotationMovingAverageComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerRotationMovingAverageComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerRotationMovingAverageComponent()
{
	if (!Z_Registration_Info_UClass_UPlayerRotationMovingAverageComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerRotationMovingAverageComponent.OuterSingleton, Z_Construct_UClass_UPlayerRotationMovingAverageComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerRotationMovingAverageComponent.OuterSingleton;
}
UPlayerRotationMovingAverageComponent::UPlayerRotationMovingAverageComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerRotationMovingAverageComponent);
UPlayerRotationMovingAverageComponent::~UPlayerRotationMovingAverageComponent() {}
// ********** End Class UPlayerRotationMovingAverageComponent **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationMovingAverageComponent_h__Script_MinigameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerRotationMovingAverageComponent, UPlayerRotationMovingAverageComponent::StaticClass, TEXT("UPlayerRotationMovingAverageComponent"), &Z_Registration_Info_UClass_UPlayerRotationMovingAverageComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerRotationMovingAverageComponent), 1020168761U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationMovingAverageComponent_h__Script_MinigameCore_321161421(TEXT("/Script/MinigameCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationMovingAverageComponent_h__Script_MinigameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationMovingAverageComponent_h__Script_MinigameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
