// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinigameCapture.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMinigameCapture() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameCapture();
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameCapture_NoRegister();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMinigameCapture Function ApplyCameraShake *******************************
struct Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics
{
	struct MinigameCapture_eventApplyCameraShake_Parms
	{
		float Intensity;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/MinigameCapture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameCapture_eventApplyCameraShake_Parms, Intensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameCapture_eventApplyCameraShake_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::NewProp_Intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameCapture, nullptr, "ApplyCameraShake", Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::MinigameCapture_eventApplyCameraShake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::MinigameCapture_eventApplyCameraShake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameCapture::execApplyCameraShake)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyCameraShake(Z_Param_Intensity,Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class AMinigameCapture Function ApplyCameraShake *********************************

// ********** Begin Class AMinigameCapture Function GetCaptureNumber *******************************
struct Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics
{
	struct MinigameCapture_eventGetCaptureNumber_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture Info" },
		{ "ModuleRelativePath", "Public/MinigameCapture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameCapture_eventGetCaptureNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameCapture, nullptr, "GetCaptureNumber", Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::MinigameCapture_eventGetCaptureNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::MinigameCapture_eventGetCaptureNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameCapture::execGetCaptureNumber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCaptureNumber();
	P_NATIVE_END;
}
// ********** End Class AMinigameCapture Function GetCaptureNumber *********************************

// ********** Begin Class AMinigameCapture Function GetShakeIntensity ******************************
struct Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics
{
	struct MinigameCapture_eventGetShakeIntensity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/MinigameCapture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameCapture_eventGetShakeIntensity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameCapture, nullptr, "GetShakeIntensity", Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::MinigameCapture_eventGetShakeIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::MinigameCapture_eventGetShakeIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameCapture::execGetShakeIntensity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetShakeIntensity();
	P_NATIVE_END;
}
// ********** End Class AMinigameCapture Function GetShakeIntensity ********************************

// ********** Begin Class AMinigameCapture Function ProjectWorldToCapture **************************
struct Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics
{
	struct MinigameCapture_eventProjectWorldToCapture_Parms
	{
		FVector WorldPosition;
		FVector2D OutScreenPosition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projection" },
		{ "ModuleRelativePath", "Public/MinigameCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutScreenPosition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameCapture_eventProjectWorldToCapture_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics::NewProp_OutScreenPosition = { "OutScreenPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameCapture_eventProjectWorldToCapture_Parms, OutScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MinigameCapture_eventProjectWorldToCapture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MinigameCapture_eventProjectWorldToCapture_Parms), &Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics::NewProp_OutScreenPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameCapture, nullptr, "ProjectWorldToCapture", Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics::MinigameCapture_eventProjectWorldToCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics::MinigameCapture_eventProjectWorldToCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameCapture::execProjectWorldToCapture)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutScreenPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ProjectWorldToCapture(Z_Param_Out_WorldPosition,Z_Param_Out_OutScreenPosition);
	P_NATIVE_END;
}
// ********** End Class AMinigameCapture Function ProjectWorldToCapture ****************************

// ********** Begin Class AMinigameCapture Function SetShakeIntensity ******************************
struct Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics
{
	struct MinigameCapture_eventSetShakeIntensity_Parms
	{
		float Intensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/MinigameCapture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameCapture_eventSetShakeIntensity_Parms, Intensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::NewProp_Intensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMinigameCapture, nullptr, "SetShakeIntensity", Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::MinigameCapture_eventSetShakeIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::MinigameCapture_eventSetShakeIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMinigameCapture::execSetShakeIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShakeIntensity(Z_Param_Intensity);
	P_NATIVE_END;
}
// ********** End Class AMinigameCapture Function SetShakeIntensity ********************************

// ********** Begin Class AMinigameCapture *********************************************************
void AMinigameCapture::StaticRegisterNativesAMinigameCapture()
{
	UClass* Class = AMinigameCapture::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyCameraShake", &AMinigameCapture::execApplyCameraShake },
		{ "GetCaptureNumber", &AMinigameCapture::execGetCaptureNumber },
		{ "GetShakeIntensity", &AMinigameCapture::execGetShakeIntensity },
		{ "ProjectWorldToCapture", &AMinigameCapture::execProjectWorldToCapture },
		{ "SetShakeIntensity", &AMinigameCapture::execSetShakeIntensity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMinigameCapture;
UClass* AMinigameCapture::GetPrivateStaticClass()
{
	using TClass = AMinigameCapture;
	if (!Z_Registration_Info_UClass_AMinigameCapture.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MinigameCapture"),
			Z_Registration_Info_UClass_AMinigameCapture.InnerSingleton,
			StaticRegisterNativesAMinigameCapture,
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
	return Z_Registration_Info_UClass_AMinigameCapture.InnerSingleton;
}
UClass* Z_Construct_UClass_AMinigameCapture_NoRegister()
{
	return AMinigameCapture::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMinigameCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MinigameCapture.h" },
		{ "ModuleRelativePath", "Public/MinigameCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneCapture_MetaData[] = {
		{ "Category", "Capture Info" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MinigameCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureNumber_MetaData[] = {
		{ "Category", "Capture Info" },
		{ "ModuleRelativePath", "Public/MinigameCapture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneCapture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CaptureNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinigameCapture_ApplyCameraShake, "ApplyCameraShake" }, // 2681873639
		{ &Z_Construct_UFunction_AMinigameCapture_GetCaptureNumber, "GetCaptureNumber" }, // 2248154904
		{ &Z_Construct_UFunction_AMinigameCapture_GetShakeIntensity, "GetShakeIntensity" }, // 1723422714
		{ &Z_Construct_UFunction_AMinigameCapture_ProjectWorldToCapture, "ProjectWorldToCapture" }, // 1444196896
		{ &Z_Construct_UFunction_AMinigameCapture_SetShakeIntensity, "SetShakeIntensity" }, // 1997602300
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinigameCapture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinigameCapture_Statics::NewProp_SceneCapture = { "SceneCapture", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameCapture, SceneCapture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneCapture_MetaData), NewProp_SceneCapture_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinigameCapture_Statics::NewProp_CaptureNumber = { "CaptureNumber", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinigameCapture, CaptureNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureNumber_MetaData), NewProp_CaptureNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinigameCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameCapture_Statics::NewProp_SceneCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinigameCapture_Statics::NewProp_CaptureNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameCapture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMinigameCapture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameCapture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinigameCapture_Statics::ClassParams = {
	&AMinigameCapture::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMinigameCapture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameCapture_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinigameCapture_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinigameCapture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinigameCapture()
{
	if (!Z_Registration_Info_UClass_AMinigameCapture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinigameCapture.OuterSingleton, Z_Construct_UClass_AMinigameCapture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinigameCapture.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinigameCapture);
AMinigameCapture::~AMinigameCapture() {}
// ********** End Class AMinigameCapture ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCapture_h__Script_MinigameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinigameCapture, AMinigameCapture::StaticClass, TEXT("AMinigameCapture"), &Z_Registration_Info_UClass_AMinigameCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinigameCapture), 3221492482U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCapture_h__Script_MinigameCore_1095372207(TEXT("/Script/MinigameCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCapture_h__Script_MinigameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCapture_h__Script_MinigameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
