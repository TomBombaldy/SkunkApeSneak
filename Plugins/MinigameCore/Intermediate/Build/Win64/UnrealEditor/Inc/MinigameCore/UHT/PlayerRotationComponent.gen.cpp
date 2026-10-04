// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/PlayerRotationComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerRotationComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_UPlayerRotationComponent();
MINIGAMECORE_API UClass* Z_Construct_UClass_UPlayerRotationComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlayerRotationComponent Function AddAimOffset ***************************
struct Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics
{
	struct PlayerRotationComponent_eventAddAimOffset_Parms
	{
		FVector2D DeltaOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::NewProp_DeltaOffset = { "DeltaOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerRotationComponent_eventAddAimOffset_Parms, DeltaOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaOffset_MetaData), NewProp_DeltaOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::NewProp_DeltaOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerRotationComponent, nullptr, "AddAimOffset", Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::PlayerRotationComponent_eventAddAimOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::PlayerRotationComponent_eventAddAimOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerRotationComponent::execAddAimOffset)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_DeltaOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAimOffset(Z_Param_Out_DeltaOffset);
	P_NATIVE_END;
}
// ********** End Class UPlayerRotationComponent Function AddAimOffset *****************************

// ********** Begin Class UPlayerRotationComponent Function GetAimPosition *************************
struct Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics
{
	struct PlayerRotationComponent_eventGetAimPosition_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Rotation" },
		{ "Comment", "// Gets the screenspace position of the aimed position. Good for rendering a crosshair on a widget.\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
		{ "ToolTip", "Gets the screenspace position of the aimed position. Good for rendering a crosshair on a widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerRotationComponent_eventGetAimPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerRotationComponent, nullptr, "GetAimPosition", Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::PlayerRotationComponent_eventGetAimPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::PlayerRotationComponent_eventGetAimPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerRotationComponent::execGetAimPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetAimPosition();
	P_NATIVE_END;
}
// ********** End Class UPlayerRotationComponent Function GetAimPosition ***************************

// ********** Begin Class UPlayerRotationComponent Function GetDeltaRotation ***********************
struct Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics
{
	struct PlayerRotationComponent_eventGetDeltaRotation_Parms
	{
		FQuat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Rotation" },
		{ "Comment", "// Returns the rotation from the set initial orientation\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
		{ "ToolTip", "Returns the rotation from the set initial orientation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerRotationComponent_eventGetDeltaRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerRotationComponent, nullptr, "GetDeltaRotation", Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::PlayerRotationComponent_eventGetDeltaRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::PlayerRotationComponent_eventGetDeltaRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerRotationComponent::execGetDeltaRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuat*)Z_Param__Result=P_THIS->GetDeltaRotation();
	P_NATIVE_END;
}
// ********** End Class UPlayerRotationComponent Function GetDeltaRotation *************************

// ********** Begin Class UPlayerRotationComponent Function GetDeltaRotationEuler ******************
struct Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics
{
	struct PlayerRotationComponent_eventGetDeltaRotationEuler_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Rotation" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerRotationComponent_eventGetDeltaRotationEuler_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerRotationComponent, nullptr, "GetDeltaRotationEuler", Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::PlayerRotationComponent_eventGetDeltaRotationEuler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::PlayerRotationComponent_eventGetDeltaRotationEuler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerRotationComponent::execGetDeltaRotationEuler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetDeltaRotationEuler();
	P_NATIVE_END;
}
// ********** End Class UPlayerRotationComponent Function GetDeltaRotationEuler ********************

// ********** Begin Class UPlayerRotationComponent Function GetDeltaRotator ************************
struct Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotator_Statics
{
	struct PlayerRotationComponent_eventGetDeltaRotator_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Rotation" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerRotationComponent_eventGetDeltaRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerRotationComponent, nullptr, "GetDeltaRotator", Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotator_Statics::PlayerRotationComponent_eventGetDeltaRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotator_Statics::PlayerRotationComponent_eventGetDeltaRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerRotationComponent::execGetDeltaRotator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetDeltaRotator();
	P_NATIVE_END;
}
// ********** End Class UPlayerRotationComponent Function GetDeltaRotator **************************

// ********** Begin Class UPlayerRotationComponent Function GetDirectionFromCamera *****************
struct Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics
{
	struct PlayerRotationComponent_eventGetDirectionFromCamera_Parms
	{
		FQuat CameraOrientation;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Rotation" },
		{ "Comment", "// Gets a direction from the camera to the aimed position in global worldspace. Good for raycasting to where a crosshair is visually aiming.\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
		{ "ToolTip", "Gets a direction from the camera to the aimed position in global worldspace. Good for raycasting to where a crosshair is visually aiming." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraOrientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::NewProp_CameraOrientation = { "CameraOrientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerRotationComponent_eventGetDirectionFromCamera_Parms, CameraOrientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerRotationComponent_eventGetDirectionFromCamera_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::NewProp_CameraOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerRotationComponent, nullptr, "GetDirectionFromCamera", Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::PlayerRotationComponent_eventGetDirectionFromCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::PlayerRotationComponent_eventGetDirectionFromCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerRotationComponent::execGetDirectionFromCamera)
{
	P_GET_STRUCT(FQuat,Z_Param_CameraOrientation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetDirectionFromCamera(Z_Param_CameraOrientation);
	P_NATIVE_END;
}
// ********** End Class UPlayerRotationComponent Function GetDirectionFromCamera *******************

// ********** Begin Class UPlayerRotationComponent Function GetRotationInputValue ******************
struct Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics
{
	struct PlayerRotationComponent_eventGetRotationInputValue_Parms
	{
		FQuat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Rotation" },
		{ "Comment", "// Reads the rotation value from the Rotation input action\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
		{ "ToolTip", "Reads the rotation value from the Rotation input action" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerRotationComponent_eventGetRotationInputValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerRotationComponent, nullptr, "GetRotationInputValue", Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::PlayerRotationComponent_eventGetRotationInputValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::PlayerRotationComponent_eventGetRotationInputValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerRotationComponent::execGetRotationInputValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuat*)Z_Param__Result=P_THIS->GetRotationInputValue();
	P_NATIVE_END;
}
// ********** End Class UPlayerRotationComponent Function GetRotationInputValue ********************

// ********** Begin Class UPlayerRotationComponent Function GetRotationInputValueVector ************
struct Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValueVector_Statics
{
	struct PlayerRotationComponent_eventGetRotationInputValueVector_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Rotation" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValueVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerRotationComponent_eventGetRotationInputValueVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValueVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValueVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValueVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValueVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerRotationComponent, nullptr, "GetRotationInputValueVector", Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValueVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValueVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValueVector_Statics::PlayerRotationComponent_eventGetRotationInputValueVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValueVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValueVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValueVector_Statics::PlayerRotationComponent_eventGetRotationInputValueVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValueVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValueVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerRotationComponent::execGetRotationInputValueVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetRotationInputValueVector();
	P_NATIVE_END;
}
// ********** End Class UPlayerRotationComponent Function GetRotationInputValueVector **************

// ********** Begin Class UPlayerRotationComponent Function GetSetScreenResolution *****************
struct Z_Construct_UFunction_UPlayerRotationComponent_GetSetScreenResolution_Statics
{
	struct PlayerRotationComponent_eventGetSetScreenResolution_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Rotation" },
		{ "Comment", "// Returns the resolution used for rotation aiming\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
		{ "ToolTip", "Returns the resolution used for rotation aiming" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerRotationComponent_GetSetScreenResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerRotationComponent_eventGetSetScreenResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerRotationComponent_GetSetScreenResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerRotationComponent_GetSetScreenResolution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetSetScreenResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerRotationComponent_GetSetScreenResolution_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerRotationComponent, nullptr, "GetSetScreenResolution", Z_Construct_UFunction_UPlayerRotationComponent_GetSetScreenResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetSetScreenResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetSetScreenResolution_Statics::PlayerRotationComponent_eventGetSetScreenResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_GetSetScreenResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerRotationComponent_GetSetScreenResolution_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerRotationComponent_GetSetScreenResolution_Statics::PlayerRotationComponent_eventGetSetScreenResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerRotationComponent_GetSetScreenResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerRotationComponent_GetSetScreenResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerRotationComponent::execGetSetScreenResolution)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetSetScreenResolution();
	P_NATIVE_END;
}
// ********** End Class UPlayerRotationComponent Function GetSetScreenResolution *******************

// ********** Begin Class UPlayerRotationComponent Function ResetInitialOrientation ****************
struct Z_Construct_UFunction_UPlayerRotationComponent_ResetInitialOrientation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Rotation" },
		{ "Comment", "// Sets the initial rotation to the current rotation. Helpful to reset effects of drift along Z-axis\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
		{ "ToolTip", "Sets the initial rotation to the current rotation. Helpful to reset effects of drift along Z-axis" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerRotationComponent_ResetInitialOrientation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerRotationComponent, nullptr, "ResetInitialOrientation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_ResetInitialOrientation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerRotationComponent_ResetInitialOrientation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPlayerRotationComponent_ResetInitialOrientation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerRotationComponent_ResetInitialOrientation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerRotationComponent::execResetInitialOrientation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetInitialOrientation();
	P_NATIVE_END;
}
// ********** End Class UPlayerRotationComponent Function ResetInitialOrientation ******************

// ********** Begin Class UPlayerRotationComponent Function SetAimOffset ***************************
struct Z_Construct_UFunction_UPlayerRotationComponent_SetAimOffset_Statics
{
	struct PlayerRotationComponent_eventSetAimOffset_Parms
	{
		FVector2D NewAimOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAimOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewAimOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerRotationComponent_SetAimOffset_Statics::NewProp_NewAimOffset = { "NewAimOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerRotationComponent_eventSetAimOffset_Parms, NewAimOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAimOffset_MetaData), NewProp_NewAimOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerRotationComponent_SetAimOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerRotationComponent_SetAimOffset_Statics::NewProp_NewAimOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_SetAimOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerRotationComponent_SetAimOffset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerRotationComponent, nullptr, "SetAimOffset", Z_Construct_UFunction_UPlayerRotationComponent_SetAimOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_SetAimOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerRotationComponent_SetAimOffset_Statics::PlayerRotationComponent_eventSetAimOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerRotationComponent_SetAimOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerRotationComponent_SetAimOffset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerRotationComponent_SetAimOffset_Statics::PlayerRotationComponent_eventSetAimOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerRotationComponent_SetAimOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerRotationComponent_SetAimOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerRotationComponent::execSetAimOffset)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NewAimOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAimOffset(Z_Param_Out_NewAimOffset);
	P_NATIVE_END;
}
// ********** End Class UPlayerRotationComponent Function SetAimOffset *****************************

// ********** Begin Class UPlayerRotationComponent *************************************************
void UPlayerRotationComponent::StaticRegisterNativesUPlayerRotationComponent()
{
	UClass* Class = UPlayerRotationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddAimOffset", &UPlayerRotationComponent::execAddAimOffset },
		{ "GetAimPosition", &UPlayerRotationComponent::execGetAimPosition },
		{ "GetDeltaRotation", &UPlayerRotationComponent::execGetDeltaRotation },
		{ "GetDeltaRotationEuler", &UPlayerRotationComponent::execGetDeltaRotationEuler },
		{ "GetDeltaRotator", &UPlayerRotationComponent::execGetDeltaRotator },
		{ "GetDirectionFromCamera", &UPlayerRotationComponent::execGetDirectionFromCamera },
		{ "GetRotationInputValue", &UPlayerRotationComponent::execGetRotationInputValue },
		{ "GetRotationInputValueVector", &UPlayerRotationComponent::execGetRotationInputValueVector },
		{ "GetSetScreenResolution", &UPlayerRotationComponent::execGetSetScreenResolution },
		{ "ResetInitialOrientation", &UPlayerRotationComponent::execResetInitialOrientation },
		{ "SetAimOffset", &UPlayerRotationComponent::execSetAimOffset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerRotationComponent;
UClass* UPlayerRotationComponent::GetPrivateStaticClass()
{
	using TClass = UPlayerRotationComponent;
	if (!Z_Registration_Info_UClass_UPlayerRotationComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerRotationComponent"),
			Z_Registration_Info_UClass_UPlayerRotationComponent.InnerSingleton,
			StaticRegisterNativesUPlayerRotationComponent,
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
	return Z_Registration_Info_UClass_UPlayerRotationComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerRotationComponent_NoRegister()
{
	return UPlayerRotationComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerRotationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Processes raw rotation input data to provide helpful utilities.\n * Recommended if minigame needs motion inputs for gameplay.\n * Requires resetting the initial orientation for accurate Z-axis orientation\n */" },
		{ "IncludePath", "Player/PlayerRotationComponent.h" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
		{ "ToolTip", "Processes raw rotation input data to provide helpful utilities.\nRecommended if minigame needs motion inputs for gameplay.\nRequires resetting the initial orientation for accurate Z-axis orientation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialPosition_MetaData[] = {
		{ "Category", "Player Rotation" },
		{ "Comment", "/* The initial position of the crosshair.\n\x09*  Each coordinate is a percentage of the screen size away from the top left corner\n\x09*/" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
		{ "ToolTip", "The initial position of the crosshair.\n      *  Each coordinate is a percentage of the screen size away from the top left corner" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimSensitivity_MetaData[] = {
		{ "Category", "Player Rotation" },
		{ "Comment", "// Screen distance traveled per angle of rotation\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
		{ "ToolTip", "Screen distance traveled per angle of rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenResolution_MetaData[] = {
		{ "Category", "Player Rotation" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampOffset_MetaData[] = {
		{ "Category", "Player Rotation" },
		{ "Comment", "// The distance from the edge of the screen that the aimed position must remain in\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerRotationComponent.h" },
		{ "ToolTip", "The distance from the edge of the screen that the aimed position must remain in" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationAction;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AimSensitivity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenResolution;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ClampOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerRotationComponent_AddAimOffset, "AddAimOffset" }, // 4198201280
		{ &Z_Construct_UFunction_UPlayerRotationComponent_GetAimPosition, "GetAimPosition" }, // 667872270
		{ &Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotation, "GetDeltaRotation" }, // 1815841424
		{ &Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotationEuler, "GetDeltaRotationEuler" }, // 473017462
		{ &Z_Construct_UFunction_UPlayerRotationComponent_GetDeltaRotator, "GetDeltaRotator" }, // 3681972672
		{ &Z_Construct_UFunction_UPlayerRotationComponent_GetDirectionFromCamera, "GetDirectionFromCamera" }, // 2522827164
		{ &Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValue, "GetRotationInputValue" }, // 1386139466
		{ &Z_Construct_UFunction_UPlayerRotationComponent_GetRotationInputValueVector, "GetRotationInputValueVector" }, // 1927099902
		{ &Z_Construct_UFunction_UPlayerRotationComponent_GetSetScreenResolution, "GetSetScreenResolution" }, // 4169817254
		{ &Z_Construct_UFunction_UPlayerRotationComponent_ResetInitialOrientation, "ResetInitialOrientation" }, // 3902731151
		{ &Z_Construct_UFunction_UPlayerRotationComponent_SetAimOffset, "SetAimOffset" }, // 112285986
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerRotationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_InitialPosition = { "InitialPosition", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerRotationComponent, InitialPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialPosition_MetaData), NewProp_InitialPosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_RotationAction = { "RotationAction", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerRotationComponent, RotationAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAction_MetaData), NewProp_RotationAction_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_AimSensitivity = { "AimSensitivity", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerRotationComponent, AimSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimSensitivity_MetaData), NewProp_AimSensitivity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_ScreenResolution = { "ScreenResolution", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerRotationComponent, ScreenResolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenResolution_MetaData), NewProp_ScreenResolution_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_ClampOffset = { "ClampOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerRotationComponent, ClampOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampOffset_MetaData), NewProp_ClampOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerRotationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_InitialPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_RotationAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_AimSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_ScreenResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerRotationComponent_Statics::NewProp_ClampOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerRotationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerRotationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerRotationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerRotationComponent_Statics::ClassParams = {
	&UPlayerRotationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerRotationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerRotationComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerRotationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerRotationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerRotationComponent()
{
	if (!Z_Registration_Info_UClass_UPlayerRotationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerRotationComponent.OuterSingleton, Z_Construct_UClass_UPlayerRotationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerRotationComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerRotationComponent);
UPlayerRotationComponent::~UPlayerRotationComponent() {}
// ********** End Class UPlayerRotationComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationComponent_h__Script_MinigameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerRotationComponent, UPlayerRotationComponent::StaticClass, TEXT("UPlayerRotationComponent"), &Z_Registration_Info_UClass_UPlayerRotationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerRotationComponent), 4172030749U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationComponent_h__Script_MinigameCore_780913076(TEXT("/Script/MinigameCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationComponent_h__Script_MinigameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationComponent_h__Script_MinigameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
