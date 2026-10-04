// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/CircularWipeWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCircularWipeWidget() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_UCircularWipeWidget();
BASHCORE_API UClass* Z_Construct_UClass_UCircularWipeWidget_NoRegister();
BASHCORE_API UFunction* Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature();
BASHCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCircleWipeParams();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BashCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnWipeFilledSignature ************************************************
struct Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BashCore, nullptr, "OnWipeFilledSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWipeFilledSignature_DelegateWrapper(const FScriptDelegate& OnWipeFilledSignature)
{
	OnWipeFilledSignature.ProcessDelegate<UObject>(NULL);
}
// ********** End Delegate FOnWipeFilledSignature **************************************************

// ********** Begin ScriptStruct FCircleWipeParams *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCircleWipeParams;
class UScriptStruct* FCircleWipeParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCircleWipeParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCircleWipeParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCircleWipeParams, (UObject*)Z_Construct_UPackage__Script_BashCore(), TEXT("CircleWipeParams"));
	}
	return Z_Registration_Info_UScriptStruct_FCircleWipeParams.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCircleWipeParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onWipeFilled_MetaData[] = {
		{ "Category", "Wipe Params" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onWipeComplete_MetaData[] = {
		{ "Category", "Wipe Params" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onWipeFilled;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_onWipeComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCircleWipeParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FCircleWipeParams_Statics::NewProp_onWipeFilled = { "onWipeFilled", nullptr, (EPropertyFlags)0x0010000000080014, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCircleWipeParams, onWipeFilled), Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onWipeFilled_MetaData), NewProp_onWipeFilled_MetaData) }; // 3345847146
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FCircleWipeParams_Statics::NewProp_onWipeComplete = { "onWipeComplete", nullptr, (EPropertyFlags)0x0010000000080014, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCircleWipeParams, onWipeComplete), Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onWipeComplete_MetaData), NewProp_onWipeComplete_MetaData) }; // 3345847146
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCircleWipeParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircleWipeParams_Statics::NewProp_onWipeFilled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircleWipeParams_Statics::NewProp_onWipeComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircleWipeParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCircleWipeParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
	nullptr,
	&NewStructOps,
	"CircleWipeParams",
	Z_Construct_UScriptStruct_FCircleWipeParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircleWipeParams_Statics::PropPointers),
	sizeof(FCircleWipeParams),
	alignof(FCircleWipeParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircleWipeParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCircleWipeParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCircleWipeParams()
{
	if (!Z_Registration_Info_UScriptStruct_FCircleWipeParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCircleWipeParams.InnerSingleton, Z_Construct_UScriptStruct_FCircleWipeParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCircleWipeParams.InnerSingleton;
}
// ********** End ScriptStruct FCircleWipeParams ***************************************************

// ********** Begin Class UCircularWipeWidget Function CallDelegate ********************************
struct Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics
{
	struct CircularWipeWidget_eventCallDelegate_Parms
	{
		FScriptDelegate delegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wipe Control" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::NewProp_delegate = { "delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CircularWipeWidget_eventCallDelegate_Parms, delegate), Z_Construct_UDelegateFunction_BashCore_OnWipeFilledSignature__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3345847146
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::NewProp_delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCircularWipeWidget, nullptr, "CallDelegate", Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::CircularWipeWidget_eventCallDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::CircularWipeWidget_eventCallDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCircularWipeWidget_CallDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularWipeWidget_CallDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCircularWipeWidget::execCallDelegate)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallDelegate(FOnWipeFilledSignature(Z_Param_delegate));
	P_NATIVE_END;
}
// ********** End Class UCircularWipeWidget Function CallDelegate **********************************

// ********** Begin Class UCircularWipeWidget Function EndWipeVisuals ******************************
struct CircularWipeWidget_eventEndWipeVisuals_Parms
{
	FCircleWipeParams params;
};
static FName NAME_UCircularWipeWidget_EndWipeVisuals = FName(TEXT("EndWipeVisuals"));
void UCircularWipeWidget::EndWipeVisuals(FCircleWipeParams params)
{
	CircularWipeWidget_eventEndWipeVisuals_Parms Parms;
	Parms.params=params;
	UFunction* Func = FindFunctionChecked(NAME_UCircularWipeWidget_EndWipeVisuals);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wipe Control" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CircularWipeWidget_eventEndWipeVisuals_Parms, params), Z_Construct_UScriptStruct_FCircleWipeParams, METADATA_PARAMS(0, nullptr) }; // 2393117434
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::NewProp_params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCircularWipeWidget, nullptr, "EndWipeVisuals", Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::PropPointers), sizeof(CircularWipeWidget_eventEndWipeVisuals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CircularWipeWidget_eventEndWipeVisuals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCircularWipeWidget Function EndWipeVisuals ********************************

// ********** Begin Class UCircularWipeWidget Function FadeFromBlack *******************************
struct Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics
{
	struct CircularWipeWidget_eventFadeFromBlack_Parms
	{
		FCircleWipeParams params;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wipe Control" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CircularWipeWidget_eventFadeFromBlack_Parms, params), Z_Construct_UScriptStruct_FCircleWipeParams, METADATA_PARAMS(0, nullptr) }; // 2393117434
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::NewProp_params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCircularWipeWidget, nullptr, "FadeFromBlack", Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::CircularWipeWidget_eventFadeFromBlack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::CircularWipeWidget_eventFadeFromBlack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCircularWipeWidget::execFadeFromBlack)
{
	P_GET_STRUCT(FCircleWipeParams,Z_Param_params);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FadeFromBlack(Z_Param_params);
	P_NATIVE_END;
}
// ********** End Class UCircularWipeWidget Function FadeFromBlack *********************************

// ********** Begin Class UCircularWipeWidget Function PlayFullWipe ********************************
struct Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics
{
	struct CircularWipeWidget_eventPlayFullWipe_Parms
	{
		FCircleWipeParams params;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wipe Control" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CircularWipeWidget_eventPlayFullWipe_Parms, params), Z_Construct_UScriptStruct_FCircleWipeParams, METADATA_PARAMS(0, nullptr) }; // 2393117434
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::NewProp_params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCircularWipeWidget, nullptr, "PlayFullWipe", Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::CircularWipeWidget_eventPlayFullWipe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::CircularWipeWidget_eventPlayFullWipe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCircularWipeWidget::execPlayFullWipe)
{
	P_GET_STRUCT(FCircleWipeParams,Z_Param_params);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayFullWipe(Z_Param_params);
	P_NATIVE_END;
}
// ********** End Class UCircularWipeWidget Function PlayFullWipe **********************************

// ********** Begin Class UCircularWipeWidget Function PlayFullWipeVisuals *************************
struct CircularWipeWidget_eventPlayFullWipeVisuals_Parms
{
	FCircleWipeParams params;
};
static FName NAME_UCircularWipeWidget_PlayFullWipeVisuals = FName(TEXT("PlayFullWipeVisuals"));
void UCircularWipeWidget::PlayFullWipeVisuals(FCircleWipeParams params)
{
	CircularWipeWidget_eventPlayFullWipeVisuals_Parms Parms;
	Parms.params=params;
	UFunction* Func = FindFunctionChecked(NAME_UCircularWipeWidget_PlayFullWipeVisuals);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wipe Control" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CircularWipeWidget_eventPlayFullWipeVisuals_Parms, params), Z_Construct_UScriptStruct_FCircleWipeParams, METADATA_PARAMS(0, nullptr) }; // 2393117434
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::NewProp_params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCircularWipeWidget, nullptr, "PlayFullWipeVisuals", Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::PropPointers), sizeof(CircularWipeWidget_eventPlayFullWipeVisuals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CircularWipeWidget_eventPlayFullWipeVisuals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCircularWipeWidget Function PlayFullWipeVisuals ***************************

// ********** Begin Class UCircularWipeWidget Function StartWipe ***********************************
struct Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics
{
	struct CircularWipeWidget_eventStartWipe_Parms
	{
		FCircleWipeParams params;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wipe Control" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CircularWipeWidget_eventStartWipe_Parms, params), Z_Construct_UScriptStruct_FCircleWipeParams, METADATA_PARAMS(0, nullptr) }; // 2393117434
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::NewProp_params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCircularWipeWidget, nullptr, "StartWipe", Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::CircularWipeWidget_eventStartWipe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::CircularWipeWidget_eventStartWipe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCircularWipeWidget_StartWipe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularWipeWidget_StartWipe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCircularWipeWidget::execStartWipe)
{
	P_GET_STRUCT(FCircleWipeParams,Z_Param_params);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartWipe(Z_Param_params);
	P_NATIVE_END;
}
// ********** End Class UCircularWipeWidget Function StartWipe *************************************

// ********** Begin Class UCircularWipeWidget Function StartWipeVisuals ****************************
struct CircularWipeWidget_eventStartWipeVisuals_Parms
{
	FCircleWipeParams params;
};
static FName NAME_UCircularWipeWidget_StartWipeVisuals = FName(TEXT("StartWipeVisuals"));
void UCircularWipeWidget::StartWipeVisuals(FCircleWipeParams params)
{
	CircularWipeWidget_eventStartWipeVisuals_Parms Parms;
	Parms.params=params;
	UFunction* Func = FindFunctionChecked(NAME_UCircularWipeWidget_StartWipeVisuals);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wipe Control" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CircularWipeWidget_eventStartWipeVisuals_Parms, params), Z_Construct_UScriptStruct_FCircleWipeParams, METADATA_PARAMS(0, nullptr) }; // 2393117434
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::NewProp_params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCircularWipeWidget, nullptr, "StartWipeVisuals", Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::PropPointers), sizeof(CircularWipeWidget_eventStartWipeVisuals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CircularWipeWidget_eventStartWipeVisuals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCircularWipeWidget Function StartWipeVisuals ******************************

// ********** Begin Class UCircularWipeWidget ******************************************************
void UCircularWipeWidget::StaticRegisterNativesUCircularWipeWidget()
{
	UClass* Class = UCircularWipeWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallDelegate", &UCircularWipeWidget::execCallDelegate },
		{ "FadeFromBlack", &UCircularWipeWidget::execFadeFromBlack },
		{ "PlayFullWipe", &UCircularWipeWidget::execPlayFullWipe },
		{ "StartWipe", &UCircularWipeWidget::execStartWipe },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCircularWipeWidget;
UClass* UCircularWipeWidget::GetPrivateStaticClass()
{
	using TClass = UCircularWipeWidget;
	if (!Z_Registration_Info_UClass_UCircularWipeWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CircularWipeWidget"),
			Z_Registration_Info_UClass_UCircularWipeWidget.InnerSingleton,
			StaticRegisterNativesUCircularWipeWidget,
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
	return Z_Registration_Info_UClass_UCircularWipeWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UCircularWipeWidget_NoRegister()
{
	return UCircularWipeWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCircularWipeWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/CircularWipeWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/CircularWipeWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCircularWipeWidget_CallDelegate, "CallDelegate" }, // 1848332482
		{ &Z_Construct_UFunction_UCircularWipeWidget_EndWipeVisuals, "EndWipeVisuals" }, // 1310602777
		{ &Z_Construct_UFunction_UCircularWipeWidget_FadeFromBlack, "FadeFromBlack" }, // 1717593888
		{ &Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipe, "PlayFullWipe" }, // 3806605540
		{ &Z_Construct_UFunction_UCircularWipeWidget_PlayFullWipeVisuals, "PlayFullWipeVisuals" }, // 1793888082
		{ &Z_Construct_UFunction_UCircularWipeWidget_StartWipe, "StartWipe" }, // 951365160
		{ &Z_Construct_UFunction_UCircularWipeWidget_StartWipeVisuals, "StartWipeVisuals" }, // 2788617034
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCircularWipeWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCircularWipeWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCircularWipeWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCircularWipeWidget_Statics::ClassParams = {
	&UCircularWipeWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCircularWipeWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCircularWipeWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCircularWipeWidget()
{
	if (!Z_Registration_Info_UClass_UCircularWipeWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCircularWipeWidget.OuterSingleton, Z_Construct_UClass_UCircularWipeWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCircularWipeWidget.OuterSingleton;
}
UCircularWipeWidget::UCircularWipeWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCircularWipeWidget);
UCircularWipeWidget::~UCircularWipeWidget() {}
// ********** End Class UCircularWipeWidget ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h__Script_BashCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCircleWipeParams::StaticStruct, Z_Construct_UScriptStruct_FCircleWipeParams_Statics::NewStructOps, TEXT("CircleWipeParams"), &Z_Registration_Info_UScriptStruct_FCircleWipeParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCircleWipeParams), 2393117434U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCircularWipeWidget, UCircularWipeWidget::StaticClass, TEXT("UCircularWipeWidget"), &Z_Registration_Info_UClass_UCircularWipeWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCircularWipeWidget), 2942561924U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h__Script_BashCore_4155159319(TEXT("/Script/BashCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h__Script_BashCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h__Script_BashCore_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h__Script_BashCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h__Script_BashCore_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
