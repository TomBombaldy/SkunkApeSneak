// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/GraphPlot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGraphPlot() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UGraphPlot();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UGraphPlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGraphPlot Function GetCurrentMaxValue ***********************************
struct Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics
{
	struct GraphPlot_eventGetCurrentMaxValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Graph Data" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphPlot_eventGetCurrentMaxValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGraphPlot, nullptr, "GetCurrentMaxValue", Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::GraphPlot_eventGetCurrentMaxValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::GraphPlot_eventGetCurrentMaxValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGraphPlot::execGetCurrentMaxValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentMaxValue();
	P_NATIVE_END;
}
// ********** End Class UGraphPlot Function GetCurrentMaxValue *************************************

// ********** Begin Class UGraphPlot Function GetCurrentMinValue ***********************************
struct Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics
{
	struct GraphPlot_eventGetCurrentMinValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Graph Data" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphPlot_eventGetCurrentMinValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGraphPlot, nullptr, "GetCurrentMinValue", Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::GraphPlot_eventGetCurrentMinValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::GraphPlot_eventGetCurrentMinValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGraphPlot::execGetCurrentMinValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentMinValue();
	P_NATIVE_END;
}
// ********** End Class UGraphPlot Function GetCurrentMinValue *************************************

// ********** Begin Class UGraphPlot Function MarkValue ********************************************
struct Z_Construct_UFunction_UGraphPlot_MarkValue_Statics
{
	struct GraphPlot_eventMarkValue_Parms
	{
		FString Key;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Graph Data" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphPlot_eventMarkValue_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphPlot_eventMarkValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGraphPlot, nullptr, "MarkValue", Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::GraphPlot_eventMarkValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::GraphPlot_eventMarkValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGraphPlot_MarkValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphPlot_MarkValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGraphPlot::execMarkValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MarkValue(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UGraphPlot Function MarkValue **********************************************

// ********** Begin Class UGraphPlot Function SetData **********************************************
struct Z_Construct_UFunction_UGraphPlot_SetData_Statics
{
	struct GraphPlot_eventSetData_Parms
	{
		TArray<float> InData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Graph Data" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGraphPlot_SetData_Statics::NewProp_InData_Inner = { "InData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGraphPlot_SetData_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphPlot_eventSetData_Parms, InData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InData_MetaData), NewProp_InData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraphPlot_SetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphPlot_SetData_Statics::NewProp_InData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphPlot_SetData_Statics::NewProp_InData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_SetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphPlot_SetData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGraphPlot, nullptr, "SetData", Z_Construct_UFunction_UGraphPlot_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_SetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGraphPlot_SetData_Statics::GraphPlot_eventSetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphPlot_SetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGraphPlot_SetData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGraphPlot_SetData_Statics::GraphPlot_eventSetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGraphPlot_SetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphPlot_SetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGraphPlot::execSetData)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_InData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetData(Z_Param_Out_InData);
	P_NATIVE_END;
}
// ********** End Class UGraphPlot Function SetData ************************************************

// ********** Begin Class UGraphPlot ***************************************************************
void UGraphPlot::StaticRegisterNativesUGraphPlot()
{
	UClass* Class = UGraphPlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentMaxValue", &UGraphPlot::execGetCurrentMaxValue },
		{ "GetCurrentMinValue", &UGraphPlot::execGetCurrentMinValue },
		{ "MarkValue", &UGraphPlot::execMarkValue },
		{ "SetData", &UGraphPlot::execSetData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGraphPlot;
UClass* UGraphPlot::GetPrivateStaticClass()
{
	using TClass = UGraphPlot;
	if (!Z_Registration_Info_UClass_UGraphPlot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GraphPlot"),
			Z_Registration_Info_UClass_UGraphPlot.InnerSingleton,
			StaticRegisterNativesUGraphPlot,
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
	return Z_Registration_Info_UClass_UGraphPlot.InnerSingleton;
}
UClass* Z_Construct_UClass_UGraphPlot_NoRegister()
{
	return UGraphPlot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGraphPlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/GraphPlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumVerticalLines_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "// Number of grid lines that stretch from top to bottom\n" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
		{ "ToolTip", "Number of grid lines that stretch from top to bottom" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumHorizontalLines_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "// Number of grid lines that stretch from left to right\n" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
		{ "ToolTip", "Number of grid lines that stretch from left to right" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridLineThickness_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridLineColor_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkLineThickness_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkLineColor_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleLineThickness_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleLineColor_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoscaleToData_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinGraphSize_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "// The amount added to the most extreme absolute value in a data sample when setting graph vertical scaling.\n// For scaling graphs only.\n" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
		{ "ToolTip", "The amount added to the most extreme absolute value in a data sample when setting graph vertical scaling.\nFor scaling graphs only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnscaledGraphMinimum_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "// The minimum value shown on the graph. For nonscaling graphs only.\n" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
		{ "ToolTip", "The minimum value shown on the graph. For nonscaling graphs only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnscaledGraphMaximum_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "// The maximum value shown on the graph. For nonscaling graphs only.\n" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
		{ "ToolTip", "The maximum value shown on the graph. For nonscaling graphs only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovingAverageWindowSize_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "// Number of values to be stored when using a simple moving average\n// If zero, there will be no SMA smoothing\n" },
		{ "ModuleRelativePath", "Public/Widgets/GraphPlot.h" },
		{ "ToolTip", "Number of values to be stored when using a simple moving average\nIf zero, there will be no SMA smoothing" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumVerticalLines;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumHorizontalLines;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridLineThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridLineColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkLineThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkLineColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleLineThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SampleLineColor;
	static void NewProp_bAutoscaleToData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoscaleToData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinGraphSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnscaledGraphMinimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnscaledGraphMaximum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MovingAverageWindowSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGraphPlot_GetCurrentMaxValue, "GetCurrentMaxValue" }, // 1992939421
		{ &Z_Construct_UFunction_UGraphPlot_GetCurrentMinValue, "GetCurrentMinValue" }, // 4145288835
		{ &Z_Construct_UFunction_UGraphPlot_MarkValue, "MarkValue" }, // 1011086258
		{ &Z_Construct_UFunction_UGraphPlot_SetData, "SetData" }, // 3014814571
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraphPlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_NumVerticalLines = { "NumVerticalLines", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphPlot, NumVerticalLines), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumVerticalLines_MetaData), NewProp_NumVerticalLines_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_NumHorizontalLines = { "NumHorizontalLines", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphPlot, NumHorizontalLines), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumHorizontalLines_MetaData), NewProp_NumHorizontalLines_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_GridLineThickness = { "GridLineThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphPlot, GridLineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridLineThickness_MetaData), NewProp_GridLineThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_GridLineColor = { "GridLineColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphPlot, GridLineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridLineColor_MetaData), NewProp_GridLineColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_MarkLineThickness = { "MarkLineThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphPlot, MarkLineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkLineThickness_MetaData), NewProp_MarkLineThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_MarkLineColor = { "MarkLineColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphPlot, MarkLineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkLineColor_MetaData), NewProp_MarkLineColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_SampleLineThickness = { "SampleLineThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphPlot, SampleLineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleLineThickness_MetaData), NewProp_SampleLineThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_SampleLineColor = { "SampleLineColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphPlot, SampleLineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleLineColor_MetaData), NewProp_SampleLineColor_MetaData) };
void Z_Construct_UClass_UGraphPlot_Statics::NewProp_bAutoscaleToData_SetBit(void* Obj)
{
	((UGraphPlot*)Obj)->bAutoscaleToData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_bAutoscaleToData = { "bAutoscaleToData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGraphPlot), &Z_Construct_UClass_UGraphPlot_Statics::NewProp_bAutoscaleToData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoscaleToData_MetaData), NewProp_bAutoscaleToData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_MinGraphSize = { "MinGraphSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphPlot, MinGraphSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinGraphSize_MetaData), NewProp_MinGraphSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_UnscaledGraphMinimum = { "UnscaledGraphMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphPlot, UnscaledGraphMinimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnscaledGraphMinimum_MetaData), NewProp_UnscaledGraphMinimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_UnscaledGraphMaximum = { "UnscaledGraphMaximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphPlot, UnscaledGraphMaximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnscaledGraphMaximum_MetaData), NewProp_UnscaledGraphMaximum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGraphPlot_Statics::NewProp_MovingAverageWindowSize = { "MovingAverageWindowSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphPlot, MovingAverageWindowSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingAverageWindowSize_MetaData), NewProp_MovingAverageWindowSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGraphPlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_NumVerticalLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_NumHorizontalLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_GridLineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_GridLineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_MarkLineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_MarkLineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_SampleLineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_SampleLineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_bAutoscaleToData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_MinGraphSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_UnscaledGraphMinimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_UnscaledGraphMaximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphPlot_Statics::NewProp_MovingAverageWindowSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGraphPlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGraphPlot_Statics::ClassParams = {
	&UGraphPlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGraphPlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphPlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UGraphPlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGraphPlot()
{
	if (!Z_Registration_Info_UClass_UGraphPlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraphPlot.OuterSingleton, Z_Construct_UClass_UGraphPlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGraphPlot.OuterSingleton;
}
UGraphPlot::UGraphPlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGraphPlot);
UGraphPlot::~UGraphPlot() {}
// ********** End Class UGraphPlot *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_Widgets_GraphPlot_h__Script_LimbitlessBluetoothPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGraphPlot, UGraphPlot::StaticClass, TEXT("UGraphPlot"), &Z_Registration_Info_UClass_UGraphPlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraphPlot), 2173472607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_Widgets_GraphPlot_h__Script_LimbitlessBluetoothPlugin_2859060710(TEXT("/Script/LimbitlessBluetoothPlugin"),
	Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_Widgets_GraphPlot_h__Script_LimbitlessBluetoothPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_Widgets_GraphPlot_h__Script_LimbitlessBluetoothPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
