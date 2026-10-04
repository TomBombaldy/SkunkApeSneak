// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlexController.h"
#include "SensorData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFlexController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController_NoRegister();
LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature();
LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature();
LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature();
LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature();
LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature();
LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature();
LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature();
LIMBITLESSBLUETOOTHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature();
LIMBITLESSBLUETOOTHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSensorData();
UPackage* Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FAnalogReceivedFlexSignature ******************************************
struct Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics
{
	struct _Script_LimbitlessBluetoothPlugin_eventAnalogReceivedFlexSignature_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LimbitlessBluetoothPlugin_eventAnalogReceivedFlexSignature_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin, nullptr, "AnalogReceivedFlexSignature__DelegateSignature", Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventAnalogReceivedFlexSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventAnalogReceivedFlexSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAnalogReceivedFlexSignature_DelegateWrapper(const FMulticastScriptDelegate& AnalogReceivedFlexSignature, float Value)
{
	struct _Script_LimbitlessBluetoothPlugin_eventAnalogReceivedFlexSignature_Parms
	{
		float Value;
	};
	_Script_LimbitlessBluetoothPlugin_eventAnalogReceivedFlexSignature_Parms Parms;
	Parms.Value=Value;
	AnalogReceivedFlexSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAnalogReceivedFlexSignature ********************************************

// ********** Begin Delegate FOnRotationReceivedSignature ******************************************
struct Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics
{
	struct _Script_LimbitlessBluetoothPlugin_eventOnRotationReceivedSignature_Parms
	{
		FVector Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LimbitlessBluetoothPlugin_eventOnRotationReceivedSignature_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin, nullptr, "OnRotationReceivedSignature__DelegateSignature", Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventOnRotationReceivedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventOnRotationReceivedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRotationReceivedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnRotationReceivedSignature, FVector Value)
{
	struct _Script_LimbitlessBluetoothPlugin_eventOnRotationReceivedSignature_Parms
	{
		FVector Value;
	};
	_Script_LimbitlessBluetoothPlugin_eventOnRotationReceivedSignature_Parms Parms;
	Parms.Value=Value;
	OnRotationReceivedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRotationReceivedSignature ********************************************

// ********** Begin Delegate FOnAccelerationReceivedSignature **************************************
struct Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics
{
	struct _Script_LimbitlessBluetoothPlugin_eventOnAccelerationReceivedSignature_Parms
	{
		FVector Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LimbitlessBluetoothPlugin_eventOnAccelerationReceivedSignature_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin, nullptr, "OnAccelerationReceivedSignature__DelegateSignature", Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventOnAccelerationReceivedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventOnAccelerationReceivedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAccelerationReceivedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAccelerationReceivedSignature, FVector Value)
{
	struct _Script_LimbitlessBluetoothPlugin_eventOnAccelerationReceivedSignature_Parms
	{
		FVector Value;
	};
	_Script_LimbitlessBluetoothPlugin_eventOnAccelerationReceivedSignature_Parms Parms;
	Parms.Value=Value;
	OnAccelerationReceivedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAccelerationReceivedSignature ****************************************

// ********** Begin Delegate FOnAngularVelocityReceivedSignature ***********************************
struct Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics
{
	struct _Script_LimbitlessBluetoothPlugin_eventOnAngularVelocityReceivedSignature_Parms
	{
		FVector Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LimbitlessBluetoothPlugin_eventOnAngularVelocityReceivedSignature_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin, nullptr, "OnAngularVelocityReceivedSignature__DelegateSignature", Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventOnAngularVelocityReceivedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventOnAngularVelocityReceivedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAngularVelocityReceivedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAngularVelocityReceivedSignature, FVector Value)
{
	struct _Script_LimbitlessBluetoothPlugin_eventOnAngularVelocityReceivedSignature_Parms
	{
		FVector Value;
	};
	_Script_LimbitlessBluetoothPlugin_eventOnAngularVelocityReceivedSignature_Parms Parms;
	Parms.Value=Value;
	OnAngularVelocityReceivedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAngularVelocityReceivedSignature *************************************

// ********** Begin Delegate FDiscreteReceivedFlexSignature ****************************************
struct Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics
{
	struct _Script_LimbitlessBluetoothPlugin_eventDiscreteReceivedFlexSignature_Parms
	{
		int32 Level;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LimbitlessBluetoothPlugin_eventDiscreteReceivedFlexSignature_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin, nullptr, "DiscreteReceivedFlexSignature__DelegateSignature", Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventDiscreteReceivedFlexSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventDiscreteReceivedFlexSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDiscreteReceivedFlexSignature_DelegateWrapper(const FMulticastScriptDelegate& DiscreteReceivedFlexSignature, int32 Level)
{
	struct _Script_LimbitlessBluetoothPlugin_eventDiscreteReceivedFlexSignature_Parms
	{
		int32 Level;
	};
	_Script_LimbitlessBluetoothPlugin_eventDiscreteReceivedFlexSignature_Parms Parms;
	Parms.Level=Level;
	DiscreteReceivedFlexSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FDiscreteReceivedFlexSignature ******************************************

// ********** Begin Delegate FDiscreteThresholdReachedSignature ************************************
struct Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics
{
	struct _Script_LimbitlessBluetoothPlugin_eventDiscreteThresholdReachedSignature_Parms
	{
		int32 Level;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LimbitlessBluetoothPlugin_eventDiscreteThresholdReachedSignature_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin, nullptr, "DiscreteThresholdReachedSignature__DelegateSignature", Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventDiscreteThresholdReachedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventDiscreteThresholdReachedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDiscreteThresholdReachedSignature_DelegateWrapper(const FMulticastScriptDelegate& DiscreteThresholdReachedSignature, int32 Level)
{
	struct _Script_LimbitlessBluetoothPlugin_eventDiscreteThresholdReachedSignature_Parms
	{
		int32 Level;
	};
	_Script_LimbitlessBluetoothPlugin_eventDiscreteThresholdReachedSignature_Parms Parms;
	Parms.Level=Level;
	DiscreteThresholdReachedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FDiscreteThresholdReachedSignature **************************************

// ********** Begin Delegate FOnCalibrationStartedSignature ****************************************
struct Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics
{
	struct _Script_LimbitlessBluetoothPlugin_eventOnCalibrationStartedSignature_Parms
	{
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LimbitlessBluetoothPlugin_eventOnCalibrationStartedSignature_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin, nullptr, "OnCalibrationStartedSignature__DelegateSignature", Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventOnCalibrationStartedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::_Script_LimbitlessBluetoothPlugin_eventOnCalibrationStartedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCalibrationStartedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnCalibrationStartedSignature, float Duration)
{
	struct _Script_LimbitlessBluetoothPlugin_eventOnCalibrationStartedSignature_Parms
	{
		float Duration;
	};
	_Script_LimbitlessBluetoothPlugin_eventOnCalibrationStartedSignature_Parms Parms;
	Parms.Duration=Duration;
	OnCalibrationStartedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCalibrationStartedSignature ******************************************

// ********** Begin Delegate FOnCalibrationEndedSignature ******************************************
struct Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin, nullptr, "OnCalibrationEndedSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCalibrationEndedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnCalibrationEndedSignature)
{
	OnCalibrationEndedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnCalibrationEndedSignature ********************************************

// ********** Begin Class UFlexController Function BeginFlexCalibration ****************************
struct Z_Construct_UFunction_UFlexController_BeginFlexCalibration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Calibration" },
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlexController_BeginFlexCalibration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFlexController, nullptr, "BeginFlexCalibration", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexController_BeginFlexCalibration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlexController_BeginFlexCalibration_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFlexController_BeginFlexCalibration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlexController_BeginFlexCalibration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlexController::execBeginFlexCalibration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginFlexCalibration();
	P_NATIVE_END;
}
// ********** End Class UFlexController Function BeginFlexCalibration ******************************

// ********** Begin Class UFlexController Function BeginIMUCalibration *****************************
struct Z_Construct_UFunction_UFlexController_BeginIMUCalibration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Calibration" },
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlexController_BeginIMUCalibration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFlexController, nullptr, "BeginIMUCalibration", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlexController_BeginIMUCalibration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlexController_BeginIMUCalibration_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFlexController_BeginIMUCalibration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlexController_BeginIMUCalibration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlexController::execBeginIMUCalibration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginIMUCalibration();
	P_NATIVE_END;
}
// ********** End Class UFlexController Function BeginIMUCalibration *******************************

// ********** Begin Class UFlexController **********************************************************
void UFlexController::StaticRegisterNativesUFlexController()
{
	UClass* Class = UFlexController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginFlexCalibration", &UFlexController::execBeginFlexCalibration },
		{ "BeginIMUCalibration", &UFlexController::execBeginIMUCalibration },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFlexController;
UClass* UFlexController::GetPrivateStaticClass()
{
	using TClass = UFlexController;
	if (!Z_Registration_Info_UClass_UFlexController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FlexController"),
			Z_Registration_Info_UClass_UFlexController.InnerSingleton,
			StaticRegisterNativesUFlexController,
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
	return Z_Registration_Info_UClass_UFlexController.InnerSingleton;
}
UClass* Z_Construct_UClass_UFlexController_NoRegister()
{
	return UFlexController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFlexController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FlexController.h" },
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRotationReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAngularVelocityReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAccelerationReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnalogFlex_MetaData[] = {
		{ "Comment", "// A value from 0-1, where 0 is rest threshold and 1 is maximum flex\n" },
		{ "ModuleRelativePath", "Public/FlexController.h" },
		{ "ToolTip", "A value from 0-1, where 0 is rest threshold and 1 is maximum flex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDiscreteFlex_MetaData[] = {
		{ "Comment", "// Passes discrete level ranging from 1 to NumDiscreteLevels\n" },
		{ "ModuleRelativePath", "Public/FlexController.h" },
		{ "ToolTip", "Passes discrete level ranging from 1 to NumDiscreteLevels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDiscreteThresholdReached_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartRestCalibration_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartFlexCalibration_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinishFlexCalibration_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartIMUCalibration_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinishIMUCalibration_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoordinateAccelerationThreshold_MetaData[] = {
		{ "Category", "Calibration" },
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SensorData_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeoutDelay_MetaData[] = {
		{ "Category", "Disconnection" },
		{ "ModuleRelativePath", "Public/FlexController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRotationReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAngularVelocityReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAccelerationReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnalogFlex;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDiscreteFlex;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDiscreteThresholdReached;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartRestCalibration;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartFlexCalibration;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishFlexCalibration;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartIMUCalibration;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishIMUCalibration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CoordinateAccelerationThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SensorData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeoutDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlexController_BeginFlexCalibration, "BeginFlexCalibration" }, // 3377179915
		{ &Z_Construct_UFunction_UFlexController_BeginIMUCalibration, "BeginIMUCalibration" }, // 1073794069
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlexController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnRotationReceived = { "OnRotationReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlexController, OnRotationReceived), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnRotationReceivedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRotationReceived_MetaData), NewProp_OnRotationReceived_MetaData) }; // 1104154291
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnAngularVelocityReceived = { "OnAngularVelocityReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlexController, OnAngularVelocityReceived), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAngularVelocityReceivedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAngularVelocityReceived_MetaData), NewProp_OnAngularVelocityReceived_MetaData) }; // 2065928854
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnAccelerationReceived = { "OnAccelerationReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlexController, OnAccelerationReceived), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnAccelerationReceivedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAccelerationReceived_MetaData), NewProp_OnAccelerationReceived_MetaData) }; // 1440311773
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnAnalogFlex = { "OnAnalogFlex", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlexController, OnAnalogFlex), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_AnalogReceivedFlexSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnalogFlex_MetaData), NewProp_OnAnalogFlex_MetaData) }; // 914211535
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnDiscreteFlex = { "OnDiscreteFlex", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlexController, OnDiscreteFlex), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteReceivedFlexSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDiscreteFlex_MetaData), NewProp_OnDiscreteFlex_MetaData) }; // 2553149183
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnDiscreteThresholdReached = { "OnDiscreteThresholdReached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlexController, OnDiscreteThresholdReached), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_DiscreteThresholdReachedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDiscreteThresholdReached_MetaData), NewProp_OnDiscreteThresholdReached_MetaData) }; // 1713545384
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartRestCalibration = { "OnStartRestCalibration", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlexController, OnStartRestCalibration), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartRestCalibration_MetaData), NewProp_OnStartRestCalibration_MetaData) }; // 563172242
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartFlexCalibration = { "OnStartFlexCalibration", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlexController, OnStartFlexCalibration), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartFlexCalibration_MetaData), NewProp_OnStartFlexCalibration_MetaData) }; // 563172242
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnFinishFlexCalibration = { "OnFinishFlexCalibration", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlexController, OnFinishFlexCalibration), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinishFlexCalibration_MetaData), NewProp_OnFinishFlexCalibration_MetaData) }; // 2382349246
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartIMUCalibration = { "OnStartIMUCalibration", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlexController, OnStartIMUCalibration), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationStartedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartIMUCalibration_MetaData), NewProp_OnStartIMUCalibration_MetaData) }; // 563172242
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_OnFinishIMUCalibration = { "OnFinishIMUCalibration", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlexController, OnFinishIMUCalibration), Z_Construct_UDelegateFunction_LimbitlessBluetoothPlugin_OnCalibrationEndedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinishIMUCalibration_MetaData), NewProp_OnFinishIMUCalibration_MetaData) }; // 2382349246
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_CoordinateAccelerationThreshold = { "CoordinateAccelerationThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlexController, CoordinateAccelerationThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoordinateAccelerationThreshold_MetaData), NewProp_CoordinateAccelerationThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_SensorData = { "SensorData", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlexController, SensorData), Z_Construct_UScriptStruct_FSensorData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SensorData_MetaData), NewProp_SensorData_MetaData) }; // 3977798340
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlexController_Statics::NewProp_TimeoutDelay = { "TimeoutDelay", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlexController, TimeoutDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeoutDelay_MetaData), NewProp_TimeoutDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlexController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnRotationReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnAngularVelocityReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnAccelerationReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnAnalogFlex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnDiscreteFlex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnDiscreteThresholdReached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartRestCalibration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartFlexCalibration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnFinishFlexCalibration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnStartIMUCalibration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_OnFinishIMUCalibration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_CoordinateAccelerationThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_SensorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlexController_Statics::NewProp_TimeoutDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlexController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlexController_Statics::ClassParams = {
	&UFlexController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFlexController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlexController_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlexController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlexController()
{
	if (!Z_Registration_Info_UClass_UFlexController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlexController.OuterSingleton, Z_Construct_UClass_UFlexController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlexController.OuterSingleton;
}
UFlexController::UFlexController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlexController);
UFlexController::~UFlexController() {}
// ********** End Class UFlexController ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h__Script_LimbitlessBluetoothPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlexController, UFlexController::StaticClass, TEXT("UFlexController"), &Z_Registration_Info_UClass_UFlexController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlexController), 443179580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h__Script_LimbitlessBluetoothPlugin_1252750800(TEXT("/Script/LimbitlessBluetoothPlugin"),
	Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h__Script_LimbitlessBluetoothPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_FlexController_h__Script_LimbitlessBluetoothPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
