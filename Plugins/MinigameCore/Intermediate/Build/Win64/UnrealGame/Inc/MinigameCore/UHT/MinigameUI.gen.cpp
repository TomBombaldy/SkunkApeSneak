// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/MinigameUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMinigameUI() {}

// ********** Begin Cross Module References ********************************************************
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameBase_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameUI();
MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMinigameUI Function StartUI *********************************************
static FName NAME_UMinigameUI_StartUI = FName(TEXT("StartUI"));
void UMinigameUI::StartUI()
{
	UFunction* Func = FindFunctionChecked(NAME_UMinigameUI_StartUI);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		StartUI_Implementation();
	}
}
struct Z_Construct_UFunction_UMinigameUI_StartUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/MinigameUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameUI_StartUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMinigameUI, nullptr, "StartUI", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameUI_StartUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMinigameUI_StartUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMinigameUI_StartUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameUI_StartUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMinigameUI::execStartUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartUI_Implementation();
	P_NATIVE_END;
}
// ********** End Class UMinigameUI Function StartUI ***********************************************

// ********** Begin Class UMinigameUI **************************************************************
void UMinigameUI::StaticRegisterNativesUMinigameUI()
{
	UClass* Class = UMinigameUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartUI", &UMinigameUI::execStartUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMinigameUI;
UClass* UMinigameUI::GetPrivateStaticClass()
{
	using TClass = UMinigameUI;
	if (!Z_Registration_Info_UClass_UMinigameUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MinigameUI"),
			Z_Registration_Info_UClass_UMinigameUI.InnerSingleton,
			StaticRegisterNativesUMinigameUI,
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
	return Z_Registration_Info_UClass_UMinigameUI.InnerSingleton;
}
UClass* Z_Construct_UClass_UMinigameUI_NoRegister()
{
	return UMinigameUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMinigameUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/MinigameUI.h" },
		{ "ModuleRelativePath", "Public/Widgets/MinigameUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minigame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Minigame" },
		{ "ModuleRelativePath", "Public/Widgets/MinigameUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssignedSplit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Minigame" },
		{ "ModuleRelativePath", "Public/Widgets/MinigameUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Minigame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssignedSplit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMinigameUI_StartUI, "StartUI" }, // 4275193387
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinigameUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinigameUI_Statics::NewProp_Minigame = { "Minigame", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameUI, Minigame), Z_Construct_UClass_AMinigameBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minigame_MetaData), NewProp_Minigame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMinigameUI_Statics::NewProp_AssignedSplit = { "AssignedSplit", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinigameUI, AssignedSplit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssignedSplit_MetaData), NewProp_AssignedSplit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMinigameUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameUI_Statics::NewProp_Minigame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinigameUI_Statics::NewProp_AssignedSplit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMinigameUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinigameUI_Statics::ClassParams = {
	&UMinigameUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMinigameUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UMinigameUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMinigameUI()
{
	if (!Z_Registration_Info_UClass_UMinigameUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinigameUI.OuterSingleton, Z_Construct_UClass_UMinigameUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMinigameUI.OuterSingleton;
}
UMinigameUI::UMinigameUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMinigameUI);
UMinigameUI::~UMinigameUI() {}
// ********** End Class UMinigameUI ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_MinigameUI_h__Script_MinigameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMinigameUI, UMinigameUI::StaticClass, TEXT("UMinigameUI"), &Z_Registration_Info_UClass_UMinigameUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinigameUI), 4179466355U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_MinigameUI_h__Script_MinigameCore_1075603299(TEXT("/Script/MinigameCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_MinigameUI_h__Script_MinigameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_MinigameUI_h__Script_MinigameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
