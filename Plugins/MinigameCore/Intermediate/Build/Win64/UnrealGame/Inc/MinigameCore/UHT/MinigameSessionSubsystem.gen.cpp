// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinigameSessionSubsystem.h"
#include "Data/MinigameStanding.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMinigameSessionSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameSessionSubsystem();
MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameSessionSubsystem_NoRegister();
MINIGAMECORE_API UFunction* Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature();
MINIGAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMinigameStanding();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FGetMinigamePlayerCountSignature **************************************
struct Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics
{
	struct _Script_MinigameCore_eventGetMinigamePlayerCountSignature_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MinigameSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MinigameCore_eventGetMinigamePlayerCountSignature_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MinigameCore, nullptr, "GetMinigamePlayerCountSignature__DelegateSignature", Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::_Script_MinigameCore_eventGetMinigamePlayerCountSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::_Script_MinigameCore_eventGetMinigamePlayerCountSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinigameCore_GetMinigamePlayerCountSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
int32 FGetMinigamePlayerCountSignature_DelegateWrapper(const FScriptDelegate& GetMinigamePlayerCountSignature)
{
	struct _Script_MinigameCore_eventGetMinigamePlayerCountSignature_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_MinigameCore_eventGetMinigamePlayerCountSignature_Parms()
			: ReturnValue(0)
		{
		}
	};
	_Script_MinigameCore_eventGetMinigamePlayerCountSignature_Parms Parms;
	GetMinigamePlayerCountSignature.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// ********** End Delegate FGetMinigamePlayerCountSignature ****************************************

// ********** Begin Class UMinigameSessionSubsystem Function GetMinigameResults ********************
struct Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics
{
	struct MinigameSessionSubsystem_eventGetMinigameResults_Parms
	{
		TArray<FMinigameStanding> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame Output" },
		{ "ModuleRelativePath", "Public/MinigameSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMinigameStanding, METADATA_PARAMS(0, nullptr) }; // 585325468
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameSessionSubsystem_eventGetMinigameResults_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 585325468
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMinigameSessionSubsystem, nullptr, "GetMinigameResults", Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::MinigameSessionSubsystem_eventGetMinigameResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::MinigameSessionSubsystem_eventGetMinigameResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMinigameSessionSubsystem::execGetMinigameResults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMinigameStanding>*)Z_Param__Result=P_THIS->GetMinigameResults();
	P_NATIVE_END;
}
// ********** End Class UMinigameSessionSubsystem Function GetMinigameResults **********************

// ********** Begin Class UMinigameSessionSubsystem Function GetMinigameReturnLevel ****************
struct Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics
{
	struct MinigameSessionSubsystem_eventGetMinigameReturnLevel_Parms
	{
		TSoftObjectPtr<UWorld> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame Input" },
		{ "ModuleRelativePath", "Public/MinigameSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameSessionSubsystem_eventGetMinigameReturnLevel_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMinigameSessionSubsystem, nullptr, "GetMinigameReturnLevel", Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::MinigameSessionSubsystem_eventGetMinigameReturnLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::MinigameSessionSubsystem_eventGetMinigameReturnLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMinigameSessionSubsystem::execGetMinigameReturnLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<UWorld>*)Z_Param__Result=P_THIS->GetMinigameReturnLevel();
	P_NATIVE_END;
}
// ********** End Class UMinigameSessionSubsystem Function GetMinigameReturnLevel ******************

// ********** Begin Class UMinigameSessionSubsystem Function GetPlayerCount ************************
struct Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics
{
	struct MinigameSessionSubsystem_eventGetPlayerCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame Input" },
		{ "ModuleRelativePath", "Public/MinigameSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameSessionSubsystem_eventGetPlayerCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMinigameSessionSubsystem, nullptr, "GetPlayerCount", Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::MinigameSessionSubsystem_eventGetPlayerCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::MinigameSessionSubsystem_eventGetPlayerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMinigameSessionSubsystem::execGetPlayerCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlayerCount();
	P_NATIVE_END;
}
// ********** End Class UMinigameSessionSubsystem Function GetPlayerCount **************************

// ********** Begin Class UMinigameSessionSubsystem Function SetMinigameReturnLevel ****************
struct Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics
{
	struct MinigameSessionSubsystem_eventSetMinigameReturnLevel_Parms
	{
		TSoftObjectPtr<UWorld> Level;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame Input" },
		{ "Comment", "// Sets the level to return to after the minigame\n" },
		{ "ModuleRelativePath", "Public/MinigameSessionSubsystem.h" },
		{ "ToolTip", "Sets the level to return to after the minigame" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameSessionSubsystem_eventSetMinigameReturnLevel_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMinigameSessionSubsystem, nullptr, "SetMinigameReturnLevel", Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::MinigameSessionSubsystem_eventSetMinigameReturnLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::MinigameSessionSubsystem_eventSetMinigameReturnLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMinigameSessionSubsystem::execSetMinigameReturnLevel)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<UWorld>,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinigameReturnLevel(Z_Param_Level);
	P_NATIVE_END;
}
// ********** End Class UMinigameSessionSubsystem Function SetMinigameReturnLevel ******************

// ********** Begin Class UMinigameSessionSubsystem Function SetPlayerCount ************************
struct Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics
{
	struct MinigameSessionSubsystem_eventSetPlayerCount_Parms
	{
		int32 PlayerCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minigame Input" },
		{ "ModuleRelativePath", "Public/MinigameSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::NewProp_PlayerCount = { "PlayerCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinigameSessionSubsystem_eventSetPlayerCount_Parms, PlayerCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::NewProp_PlayerCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMinigameSessionSubsystem, nullptr, "SetPlayerCount", Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::MinigameSessionSubsystem_eventSetPlayerCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::MinigameSessionSubsystem_eventSetPlayerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMinigameSessionSubsystem::execSetPlayerCount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerCount(Z_Param_PlayerCount);
	P_NATIVE_END;
}
// ********** End Class UMinigameSessionSubsystem Function SetPlayerCount **************************

// ********** Begin Class UMinigameSessionSubsystem ************************************************
void UMinigameSessionSubsystem::StaticRegisterNativesUMinigameSessionSubsystem()
{
	UClass* Class = UMinigameSessionSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMinigameResults", &UMinigameSessionSubsystem::execGetMinigameResults },
		{ "GetMinigameReturnLevel", &UMinigameSessionSubsystem::execGetMinigameReturnLevel },
		{ "GetPlayerCount", &UMinigameSessionSubsystem::execGetPlayerCount },
		{ "SetMinigameReturnLevel", &UMinigameSessionSubsystem::execSetMinigameReturnLevel },
		{ "SetPlayerCount", &UMinigameSessionSubsystem::execSetPlayerCount },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMinigameSessionSubsystem;
UClass* UMinigameSessionSubsystem::GetPrivateStaticClass()
{
	using TClass = UMinigameSessionSubsystem;
	if (!Z_Registration_Info_UClass_UMinigameSessionSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MinigameSessionSubsystem"),
			Z_Registration_Info_UClass_UMinigameSessionSubsystem.InnerSingleton,
			StaticRegisterNativesUMinigameSessionSubsystem,
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
	return Z_Registration_Info_UClass_UMinigameSessionSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UMinigameSessionSubsystem_NoRegister()
{
	return UMinigameSessionSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMinigameSessionSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MinigameSessionSubsystem.h" },
		{ "ModuleRelativePath", "Public/MinigameSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameResults, "GetMinigameResults" }, // 4254838859
		{ &Z_Construct_UFunction_UMinigameSessionSubsystem_GetMinigameReturnLevel, "GetMinigameReturnLevel" }, // 1430433858
		{ &Z_Construct_UFunction_UMinigameSessionSubsystem_GetPlayerCount, "GetPlayerCount" }, // 3128610292
		{ &Z_Construct_UFunction_UMinigameSessionSubsystem_SetMinigameReturnLevel, "SetMinigameReturnLevel" }, // 1579177313
		{ &Z_Construct_UFunction_UMinigameSessionSubsystem_SetPlayerCount, "SetPlayerCount" }, // 4258968797
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinigameSessionSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMinigameSessionSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameSessionSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinigameSessionSubsystem_Statics::ClassParams = {
	&UMinigameSessionSubsystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMinigameSessionSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMinigameSessionSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMinigameSessionSubsystem()
{
	if (!Z_Registration_Info_UClass_UMinigameSessionSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinigameSessionSubsystem.OuterSingleton, Z_Construct_UClass_UMinigameSessionSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMinigameSessionSubsystem.OuterSingleton;
}
UMinigameSessionSubsystem::UMinigameSessionSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMinigameSessionSubsystem);
UMinigameSessionSubsystem::~UMinigameSessionSubsystem() {}
// ********** End Class UMinigameSessionSubsystem **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h__Script_MinigameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMinigameSessionSubsystem, UMinigameSessionSubsystem::StaticClass, TEXT("UMinigameSessionSubsystem"), &Z_Registration_Info_UClass_UMinigameSessionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinigameSessionSubsystem), 3292440744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h__Script_MinigameCore_1740446214(TEXT("/Script/MinigameCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h__Script_MinigameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h__Script_MinigameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
