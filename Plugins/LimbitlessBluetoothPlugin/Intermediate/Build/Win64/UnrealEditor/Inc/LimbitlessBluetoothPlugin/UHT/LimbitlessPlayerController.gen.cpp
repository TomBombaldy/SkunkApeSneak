// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseClasses/LimbitlessPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLimbitlessPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_ALimbitlessPlayerController();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_ALimbitlessPlayerController_NoRegister();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController_NoRegister();
UPackage* Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALimbitlessPlayerController Function FlexControllerConnected *************
struct Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics
{
	struct LimbitlessPlayerController_eventFlexControllerConnected_Parms
	{
		UFlexController* FlexController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlexController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::NewProp_FlexController = { "FlexController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbitlessPlayerController_eventFlexControllerConnected_Parms, FlexController), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::NewProp_FlexController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALimbitlessPlayerController, nullptr, "FlexControllerConnected", Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::LimbitlessPlayerController_eventFlexControllerConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::LimbitlessPlayerController_eventFlexControllerConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALimbitlessPlayerController::execFlexControllerConnected)
{
	P_GET_OBJECT(UFlexController,Z_Param_FlexController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FlexControllerConnected(Z_Param_FlexController);
	P_NATIVE_END;
}
// ********** End Class ALimbitlessPlayerController Function FlexControllerConnected ***************

// ********** Begin Class ALimbitlessPlayerController Function OnAcceleration **********************
struct Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics
{
	struct LimbitlessPlayerController_eventOnAcceleration_Parms
	{
		FVector accel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_accel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::NewProp_accel = { "accel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbitlessPlayerController_eventOnAcceleration_Parms, accel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::NewProp_accel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALimbitlessPlayerController, nullptr, "OnAcceleration", Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::LimbitlessPlayerController_eventOnAcceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::LimbitlessPlayerController_eventOnAcceleration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALimbitlessPlayerController::execOnAcceleration)
{
	P_GET_STRUCT(FVector,Z_Param_accel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAcceleration(Z_Param_accel);
	P_NATIVE_END;
}
// ********** End Class ALimbitlessPlayerController Function OnAcceleration ************************

// ********** Begin Class ALimbitlessPlayerController Function OnAnalogFlex ************************
struct Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics
{
	struct LimbitlessPlayerController_eventOnAnalogFlex_Parms
	{
		float val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbitlessPlayerController_eventOnAnalogFlex_Parms, val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::NewProp_val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALimbitlessPlayerController, nullptr, "OnAnalogFlex", Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::LimbitlessPlayerController_eventOnAnalogFlex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::LimbitlessPlayerController_eventOnAnalogFlex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALimbitlessPlayerController::execOnAnalogFlex)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnalogFlex(Z_Param_val);
	P_NATIVE_END;
}
// ********** End Class ALimbitlessPlayerController Function OnAnalogFlex **************************

// ********** Begin Class ALimbitlessPlayerController Function OnAngularVelocity *******************
struct Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics
{
	struct LimbitlessPlayerController_eventOnAngularVelocity_Parms
	{
		FVector vel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_vel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::NewProp_vel = { "vel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbitlessPlayerController_eventOnAngularVelocity_Parms, vel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::NewProp_vel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALimbitlessPlayerController, nullptr, "OnAngularVelocity", Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::LimbitlessPlayerController_eventOnAngularVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::LimbitlessPlayerController_eventOnAngularVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALimbitlessPlayerController::execOnAngularVelocity)
{
	P_GET_STRUCT(FVector,Z_Param_vel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAngularVelocity(Z_Param_vel);
	P_NATIVE_END;
}
// ********** End Class ALimbitlessPlayerController Function OnAngularVelocity *********************

// ********** Begin Class ALimbitlessPlayerController Function OnDiscreteFlex **********************
struct Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics
{
	struct LimbitlessPlayerController_eventOnDiscreteFlex_Parms
	{
		int32 level;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbitlessPlayerController_eventOnDiscreteFlex_Parms, level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::NewProp_level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALimbitlessPlayerController, nullptr, "OnDiscreteFlex", Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::LimbitlessPlayerController_eventOnDiscreteFlex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::LimbitlessPlayerController_eventOnDiscreteFlex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALimbitlessPlayerController::execOnDiscreteFlex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_level);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDiscreteFlex(Z_Param_level);
	P_NATIVE_END;
}
// ********** End Class ALimbitlessPlayerController Function OnDiscreteFlex ************************

// ********** Begin Class ALimbitlessPlayerController Function OnRotation **************************
struct Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics
{
	struct LimbitlessPlayerController_eventOnRotation_Parms
	{
		FVector angle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_angle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::NewProp_angle = { "angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbitlessPlayerController_eventOnRotation_Parms, angle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::NewProp_angle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALimbitlessPlayerController, nullptr, "OnRotation", Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::LimbitlessPlayerController_eventOnRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::LimbitlessPlayerController_eventOnRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALimbitlessPlayerController::execOnRotation)
{
	P_GET_STRUCT(FVector,Z_Param_angle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRotation(Z_Param_angle);
	P_NATIVE_END;
}
// ********** End Class ALimbitlessPlayerController Function OnRotation ****************************

// ********** Begin Class ALimbitlessPlayerController **********************************************
void ALimbitlessPlayerController::StaticRegisterNativesALimbitlessPlayerController()
{
	UClass* Class = ALimbitlessPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FlexControllerConnected", &ALimbitlessPlayerController::execFlexControllerConnected },
		{ "OnAcceleration", &ALimbitlessPlayerController::execOnAcceleration },
		{ "OnAnalogFlex", &ALimbitlessPlayerController::execOnAnalogFlex },
		{ "OnAngularVelocity", &ALimbitlessPlayerController::execOnAngularVelocity },
		{ "OnDiscreteFlex", &ALimbitlessPlayerController::execOnDiscreteFlex },
		{ "OnRotation", &ALimbitlessPlayerController::execOnRotation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALimbitlessPlayerController;
UClass* ALimbitlessPlayerController::GetPrivateStaticClass()
{
	using TClass = ALimbitlessPlayerController;
	if (!Z_Registration_Info_UClass_ALimbitlessPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LimbitlessPlayerController"),
			Z_Registration_Info_UClass_ALimbitlessPlayerController.InnerSingleton,
			StaticRegisterNativesALimbitlessPlayerController,
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
	return Z_Registration_Info_UClass_ALimbitlessPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ALimbitlessPlayerController_NoRegister()
{
	return ALimbitlessPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALimbitlessPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BaseClasses/LimbitlessPlayerController.h" },
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnalogFlexAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightFlexAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediumFlexAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrongFlexAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseClasses/LimbitlessPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnalogFlexAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightFlexAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediumFlexAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrongFlexAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AngularVelocityAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AccelerationAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALimbitlessPlayerController_FlexControllerConnected, "FlexControllerConnected" }, // 2582323367
		{ &Z_Construct_UFunction_ALimbitlessPlayerController_OnAcceleration, "OnAcceleration" }, // 57210623
		{ &Z_Construct_UFunction_ALimbitlessPlayerController_OnAnalogFlex, "OnAnalogFlex" }, // 471402552
		{ &Z_Construct_UFunction_ALimbitlessPlayerController_OnAngularVelocity, "OnAngularVelocity" }, // 1455200491
		{ &Z_Construct_UFunction_ALimbitlessPlayerController_OnDiscreteFlex, "OnDiscreteFlex" }, // 2397375471
		{ &Z_Construct_UFunction_ALimbitlessPlayerController_OnRotation, "OnRotation" }, // 535915010
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALimbitlessPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AnalogFlexAction = { "AnalogFlexAction", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALimbitlessPlayerController, AnalogFlexAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnalogFlexAction_MetaData), NewProp_AnalogFlexAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_LightFlexAction = { "LightFlexAction", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALimbitlessPlayerController, LightFlexAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightFlexAction_MetaData), NewProp_LightFlexAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_MediumFlexAction = { "MediumFlexAction", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALimbitlessPlayerController, MediumFlexAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediumFlexAction_MetaData), NewProp_MediumFlexAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_StrongFlexAction = { "StrongFlexAction", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALimbitlessPlayerController, StrongFlexAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrongFlexAction_MetaData), NewProp_StrongFlexAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_RotationAction = { "RotationAction", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALimbitlessPlayerController, RotationAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAction_MetaData), NewProp_RotationAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AngularVelocityAction = { "AngularVelocityAction", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALimbitlessPlayerController, AngularVelocityAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocityAction_MetaData), NewProp_AngularVelocityAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AccelerationAction = { "AccelerationAction", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALimbitlessPlayerController, AccelerationAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationAction_MetaData), NewProp_AccelerationAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALimbitlessPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AnalogFlexAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_LightFlexAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_MediumFlexAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_StrongFlexAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_RotationAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AngularVelocityAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALimbitlessPlayerController_Statics::NewProp_AccelerationAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALimbitlessPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALimbitlessPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALimbitlessPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALimbitlessPlayerController_Statics::ClassParams = {
	&ALimbitlessPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALimbitlessPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALimbitlessPlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALimbitlessPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ALimbitlessPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALimbitlessPlayerController()
{
	if (!Z_Registration_Info_UClass_ALimbitlessPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALimbitlessPlayerController.OuterSingleton, Z_Construct_UClass_ALimbitlessPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALimbitlessPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALimbitlessPlayerController);
ALimbitlessPlayerController::~ALimbitlessPlayerController() {}
// ********** End Class ALimbitlessPlayerController ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessPlayerController_h__Script_LimbitlessBluetoothPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALimbitlessPlayerController, ALimbitlessPlayerController::StaticClass, TEXT("ALimbitlessPlayerController"), &Z_Registration_Info_UClass_ALimbitlessPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALimbitlessPlayerController), 3114328922U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessPlayerController_h__Script_LimbitlessBluetoothPlugin_661397051(TEXT("/Script/LimbitlessBluetoothPlugin"),
	Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessPlayerController_h__Script_LimbitlessBluetoothPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_BaseClasses_LimbitlessPlayerController_h__Script_LimbitlessBluetoothPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
