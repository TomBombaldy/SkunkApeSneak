// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/SplitscreenUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSplitscreenUI() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_USplitscreenUI();
MINIGAMECORE_API UClass* Z_Construct_UClass_USplitscreenUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USplitscreenUI Function GetNumSplits *************************************
struct Z_Construct_UFunction_USplitscreenUI_GetNumSplits_Statics
{
	struct SplitscreenUI_eventGetNumSplits_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Splitscreen" },
		{ "ModuleRelativePath", "Public/Widgets/SplitscreenUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplitscreenUI_GetNumSplits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitscreenUI_eventGetNumSplits_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplitscreenUI_GetNumSplits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitscreenUI_GetNumSplits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitscreenUI_GetNumSplits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplitscreenUI_GetNumSplits_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplitscreenUI, nullptr, "GetNumSplits", Z_Construct_UFunction_USplitscreenUI_GetNumSplits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplitscreenUI_GetNumSplits_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplitscreenUI_GetNumSplits_Statics::SplitscreenUI_eventGetNumSplits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitscreenUI_GetNumSplits_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplitscreenUI_GetNumSplits_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USplitscreenUI_GetNumSplits_Statics::SplitscreenUI_eventGetNumSplits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplitscreenUI_GetNumSplits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplitscreenUI_GetNumSplits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplitscreenUI::execGetNumSplits)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumSplits();
	P_NATIVE_END;
}
// ********** End Class USplitscreenUI Function GetNumSplits ***************************************

// ********** Begin Class USplitscreenUI Function GetRootCanvas ************************************
struct SplitscreenUI_eventGetRootCanvas_Parms
{
	UCanvasPanel* ReturnValue;

	/** Constructor, initializes return property only **/
	SplitscreenUI_eventGetRootCanvas_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_USplitscreenUI_GetRootCanvas = FName(TEXT("GetRootCanvas"));
UCanvasPanel* USplitscreenUI::GetRootCanvas() const
{
	SplitscreenUI_eventGetRootCanvas_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_USplitscreenUI_GetRootCanvas);
		const_cast<USplitscreenUI*>(this)->ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USplitscreenUI_GetRootCanvas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/SplitscreenUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplitscreenUI_GetRootCanvas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitscreenUI_eventGetRootCanvas_Parms, ReturnValue), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplitscreenUI_GetRootCanvas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitscreenUI_GetRootCanvas_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitscreenUI_GetRootCanvas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplitscreenUI_GetRootCanvas_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplitscreenUI, nullptr, "GetRootCanvas", Z_Construct_UFunction_USplitscreenUI_GetRootCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplitscreenUI_GetRootCanvas_Statics::PropPointers), sizeof(SplitscreenUI_eventGetRootCanvas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitscreenUI_GetRootCanvas_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplitscreenUI_GetRootCanvas_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SplitscreenUI_eventGetRootCanvas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplitscreenUI_GetRootCanvas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplitscreenUI_GetRootCanvas_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USplitscreenUI Function GetRootCanvas **************************************

// ********** Begin Class USplitscreenUI Function GetSplitPanel ************************************
struct Z_Construct_UFunction_USplitscreenUI_GetSplitPanel_Statics
{
	struct SplitscreenUI_eventGetSplitPanel_Parms
	{
		int32 Num;
		UOverlay* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Splitscreen" },
		{ "ModuleRelativePath", "Public/Widgets/SplitscreenUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Num;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplitscreenUI_GetSplitPanel_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitscreenUI_eventGetSplitPanel_Parms, Num), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USplitscreenUI_GetSplitPanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitscreenUI_eventGetSplitPanel_Parms, ReturnValue), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplitscreenUI_GetSplitPanel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitscreenUI_GetSplitPanel_Statics::NewProp_Num,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplitscreenUI_GetSplitPanel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitscreenUI_GetSplitPanel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplitscreenUI_GetSplitPanel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USplitscreenUI, nullptr, "GetSplitPanel", Z_Construct_UFunction_USplitscreenUI_GetSplitPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplitscreenUI_GetSplitPanel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USplitscreenUI_GetSplitPanel_Statics::SplitscreenUI_eventGetSplitPanel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USplitscreenUI_GetSplitPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USplitscreenUI_GetSplitPanel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USplitscreenUI_GetSplitPanel_Statics::SplitscreenUI_eventGetSplitPanel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplitscreenUI_GetSplitPanel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplitscreenUI_GetSplitPanel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USplitscreenUI::execGetSplitPanel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Num);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOverlay**)Z_Param__Result=P_THIS->GetSplitPanel(Z_Param_Num);
	P_NATIVE_END;
}
// ********** End Class USplitscreenUI Function GetSplitPanel **************************************

// ********** Begin Class USplitscreenUI ***********************************************************
void USplitscreenUI::StaticRegisterNativesUSplitscreenUI()
{
	UClass* Class = USplitscreenUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNumSplits", &USplitscreenUI::execGetNumSplits },
		{ "GetSplitPanel", &USplitscreenUI::execGetSplitPanel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USplitscreenUI;
UClass* USplitscreenUI::GetPrivateStaticClass()
{
	using TClass = USplitscreenUI;
	if (!Z_Registration_Info_UClass_USplitscreenUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SplitscreenUI"),
			Z_Registration_Info_UClass_USplitscreenUI.InnerSingleton,
			StaticRegisterNativesUSplitscreenUI,
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
	return Z_Registration_Info_UClass_USplitscreenUI.InnerSingleton;
}
UClass* Z_Construct_UClass_USplitscreenUI_NoRegister()
{
	return USplitscreenUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USplitscreenUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/SplitscreenUI.h" },
		{ "ModuleRelativePath", "Public/Widgets/SplitscreenUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Splits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Splits" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SplitscreenUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargets_MetaData[] = {
		{ "Category", "Splits" },
		{ "ModuleRelativePath", "Public/Widgets/SplitscreenUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSize_MetaData[] = {
		{ "Category", "Splits" },
		{ "ModuleRelativePath", "Public/Widgets/SplitscreenUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Splits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Splits;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderTargets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USplitscreenUI_GetNumSplits, "GetNumSplits" }, // 3677521046
		{ &Z_Construct_UFunction_USplitscreenUI_GetRootCanvas, "GetRootCanvas" }, // 144272371
		{ &Z_Construct_UFunction_USplitscreenUI_GetSplitPanel, "GetSplitPanel" }, // 3732533482
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplitscreenUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USplitscreenUI_Statics::NewProp_Splits_Inner = { "Splits", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USplitscreenUI_Statics::NewProp_Splits = { "Splits", nullptr, (EPropertyFlags)0x014400800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplitscreenUI, Splits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Splits_MetaData), NewProp_Splits_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USplitscreenUI_Statics::NewProp_RenderTargets_Inner = { "RenderTargets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USplitscreenUI_Statics::NewProp_RenderTargets = { "RenderTargets", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplitscreenUI, RenderTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargets_MetaData), NewProp_RenderTargets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplitscreenUI_Statics::NewProp_TargetSize = { "TargetSize", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplitscreenUI, TargetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSize_MetaData), NewProp_TargetSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplitscreenUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitscreenUI_Statics::NewProp_Splits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitscreenUI_Statics::NewProp_Splits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitscreenUI_Statics::NewProp_RenderTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitscreenUI_Statics::NewProp_RenderTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitscreenUI_Statics::NewProp_TargetSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplitscreenUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USplitscreenUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplitscreenUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USplitscreenUI_Statics::ClassParams = {
	&USplitscreenUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USplitscreenUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USplitscreenUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USplitscreenUI_Statics::Class_MetaDataParams), Z_Construct_UClass_USplitscreenUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USplitscreenUI()
{
	if (!Z_Registration_Info_UClass_USplitscreenUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplitscreenUI.OuterSingleton, Z_Construct_UClass_USplitscreenUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USplitscreenUI.OuterSingleton;
}
USplitscreenUI::USplitscreenUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USplitscreenUI);
USplitscreenUI::~USplitscreenUI() {}
// ********** End Class USplitscreenUI *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h__Script_MinigameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USplitscreenUI, USplitscreenUI::StaticClass, TEXT("USplitscreenUI"), &Z_Registration_Info_UClass_USplitscreenUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplitscreenUI), 2353890109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h__Script_MinigameCore_3683807104(TEXT("/Script/MinigameCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h__Script_MinigameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h__Script_MinigameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
