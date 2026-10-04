// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/MinigameAIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMinigameAIController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameAIController();
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameAIController_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameBase_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigamePlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMinigameAIController Function OnMinigamePlayerPossessed *****************
static FName NAME_AMinigameAIController_OnMinigamePlayerPossessed = FName(TEXT("OnMinigamePlayerPossessed"));
void AMinigameAIController::OnMinigamePlayerPossessed()
{
	UFunction* Func = FindFunctionChecked(NAME_AMinigameAIController_OnMinigamePlayerPossessed);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMinigameAIController_OnMinigamePlayerPossessed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/MinigameAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameAIController_OnMinigamePlayerPossessed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameAIController, nullptr, "OnMinigamePlayerPossessed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameAIController_OnMinigamePlayerPossessed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameAIController_OnMinigamePlayerPossessed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMinigameAIController_OnMinigamePlayerPossessed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameAIController_OnMinigamePlayerPossessed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMinigameAIController Function OnMinigamePlayerPossessed *******************

// ********** Begin Class AMinigameAIController ****************************************************
void AMinigameAIController::StaticRegisterNativesAMinigameAIController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMinigameAIController;
UClass* AMinigameAIController::GetPrivateStaticClass()
{
	using TClass = AMinigameAIController;
	if (!Z_Registration_Info_UClass_AMinigameAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MinigameAIController"),
			Z_Registration_Info_UClass_AMinigameAIController.InnerSingleton,
			StaticRegisterNativesAMinigameAIController,
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
	return Z_Registration_Info_UClass_AMinigameAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_AMinigameAIController_NoRegister()
{
	return AMinigameAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMinigameAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/MinigameAIController.h" },
		{ "ModuleRelativePath", "Public/Player/MinigameAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minigame_MetaData[] = {
		{ "Category", "Minigame" },
		{ "ModuleRelativePath", "Public/Player/MinigameAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "Category", "Minigame" },
		{ "ModuleRelativePath", "Public/Player/MinigameAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Minigame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinigameAIController_OnMinigamePlayerPossessed, "OnMinigamePlayerPossessed" }, // 1639375580
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinigameAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigameAIController_Statics::NewProp_Minigame = { "Minigame", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameAIController, Minigame), Z_Construct_UClass_AMinigameBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minigame_MetaData), NewProp_Minigame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigameAIController_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameAIController, Player), Z_Construct_UClass_AMinigamePlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinigameAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameAIController_Statics::NewProp_Minigame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameAIController_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMinigameAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinigameAIController_Statics::ClassParams = {
	&AMinigameAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMinigameAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameAIController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinigameAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinigameAIController()
{
	if (!Z_Registration_Info_UClass_AMinigameAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinigameAIController.OuterSingleton, Z_Construct_UClass_AMinigameAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinigameAIController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinigameAIController);
AMinigameAIController::~AMinigameAIController() {}
// ********** End Class AMinigameAIController ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigameAIController_h__Script_MinigameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinigameAIController, AMinigameAIController::StaticClass, TEXT("AMinigameAIController"), &Z_Registration_Info_UClass_AMinigameAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinigameAIController), 2435665972U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigameAIController_h__Script_MinigameCore_3656055878(TEXT("/Script/MinigameCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigameAIController_h__Script_MinigameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigameAIController_h__Script_MinigameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
