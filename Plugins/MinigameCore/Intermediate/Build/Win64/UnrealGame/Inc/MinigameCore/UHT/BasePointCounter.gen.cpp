// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/BasePointCounter.h"
#include "Data/MinigameStanding.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasePointCounter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MINIGAMECORE_API UClass* Z_Construct_UClass_UBasePointCounter();
MINIGAMECORE_API UClass* Z_Construct_UClass_UBasePointCounter_NoRegister();
MINIGAMECORE_API UFunction* Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature();
MINIGAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMinigameStanding();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FPointsChanged ********************************************************
struct Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics
{
	struct _Script_MinigameCore_eventPointsChanged_Parms
	{
		int32 Team;
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/BasePointCounter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MinigameCore_eventPointsChanged_Parms, Team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MinigameCore_eventPointsChanged_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MinigameCore, nullptr, "PointsChanged__DelegateSignature", Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::_Script_MinigameCore_eventPointsChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::_Script_MinigameCore_eventPointsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPointsChanged_DelegateWrapper(const FMulticastScriptDelegate& PointsChanged, int32 Team, int32 Amount)
{
	struct _Script_MinigameCore_eventPointsChanged_Parms
	{
		int32 Team;
		int32 Amount;
	};
	_Script_MinigameCore_eventPointsChanged_Parms Parms;
	Parms.Team=Team;
	Parms.Amount=Amount;
	PointsChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FPointsChanged **********************************************************

// ********** Begin Class UBasePointCounter Function AddPoints *************************************
struct BasePointCounter_eventAddPoints_Parms
{
	int32 Team;
	int32 Amount;
};
static FName NAME_UBasePointCounter_AddPoints = FName(TEXT("AddPoints"));
void UBasePointCounter::AddPoints(int32 Team, int32 Amount)
{
	UFunction* Func = FindFunctionChecked(NAME_UBasePointCounter_AddPoints);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BasePointCounter_eventAddPoints_Parms Parms;
		Parms.Team=Team;
		Parms.Amount=Amount;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		AddPoints_Implementation(Team, Amount);
	}
}
struct Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Point Counter" },
		{ "Comment", "// Adds points to the team's point counter. In FFA, the player number is the team number.\n" },
		{ "ModuleRelativePath", "Public/Components/BasePointCounter.h" },
		{ "ToolTip", "Adds points to the team's point counter. In FFA, the player number is the team number." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePointCounter_eventAddPoints_Parms, Team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePointCounter_eventAddPoints_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasePointCounter, nullptr, "AddPoints", Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::PropPointers), sizeof(BasePointCounter_eventAddPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BasePointCounter_eventAddPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasePointCounter_AddPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePointCounter_AddPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasePointCounter::execAddPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Team);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPoints_Implementation(Z_Param_Team,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UBasePointCounter Function AddPoints ***************************************

// ********** Begin Class UBasePointCounter Function GetIsInitialized ******************************
struct Z_Construct_UFunction_UBasePointCounter_GetIsInitialized_Statics
{
	struct BasePointCounter_eventGetIsInitialized_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Point Counters" },
		{ "ModuleRelativePath", "Public/Components/BasePointCounter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBasePointCounter_GetIsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BasePointCounter_eventGetIsInitialized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBasePointCounter_GetIsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BasePointCounter_eventGetIsInitialized_Parms), &Z_Construct_UFunction_UBasePointCounter_GetIsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePointCounter_GetIsInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_GetIsInitialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetIsInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePointCounter_GetIsInitialized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasePointCounter, nullptr, "GetIsInitialized", Z_Construct_UFunction_UBasePointCounter_GetIsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetIsInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasePointCounter_GetIsInitialized_Statics::BasePointCounter_eventGetIsInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetIsInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasePointCounter_GetIsInitialized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasePointCounter_GetIsInitialized_Statics::BasePointCounter_eventGetIsInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasePointCounter_GetIsInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePointCounter_GetIsInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasePointCounter::execGetIsInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsInitialized();
	P_NATIVE_END;
}
// ********** End Class UBasePointCounter Function GetIsInitialized ********************************

// ********** Begin Class UBasePointCounter Function GetPoints *************************************
struct BasePointCounter_eventGetPoints_Parms
{
	int32 Team;
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	BasePointCounter_eventGetPoints_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UBasePointCounter_GetPoints = FName(TEXT("GetPoints"));
int32 UBasePointCounter::GetPoints(int32 Team) const
{
	UFunction* Func = FindFunctionChecked(NAME_UBasePointCounter_GetPoints);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BasePointCounter_eventGetPoints_Parms Parms;
		Parms.Team=Team;
		const_cast<UBasePointCounter*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UBasePointCounter*>(this)->GetPoints_Implementation(Team);
	}
}
struct Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Point Counter" },
		{ "Comment", "// Returns the current number of points of a team. In FFA, the player number is the team number.\n" },
		{ "ModuleRelativePath", "Public/Components/BasePointCounter.h" },
		{ "ToolTip", "Returns the current number of points of a team. In FFA, the player number is the team number." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePointCounter_eventGetPoints_Parms, Team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePointCounter_eventGetPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasePointCounter, nullptr, "GetPoints", Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::PropPointers), sizeof(BasePointCounter_eventGetPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BasePointCounter_eventGetPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasePointCounter_GetPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePointCounter_GetPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasePointCounter::execGetPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Team);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPoints_Implementation(Z_Param_Team);
	P_NATIVE_END;
}
// ********** End Class UBasePointCounter Function GetPoints ***************************************

// ********** Begin Class UBasePointCounter Function GetPointsByPlayer *****************************
struct BasePointCounter_eventGetPointsByPlayer_Parms
{
	int32 Player;
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	BasePointCounter_eventGetPointsByPlayer_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UBasePointCounter_GetPointsByPlayer = FName(TEXT("GetPointsByPlayer"));
int32 UBasePointCounter::GetPointsByPlayer(int32 Player) const
{
	UFunction* Func = FindFunctionChecked(NAME_UBasePointCounter_GetPointsByPlayer);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BasePointCounter_eventGetPointsByPlayer_Parms Parms;
		Parms.Player=Player;
		const_cast<UBasePointCounter*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UBasePointCounter*>(this)->GetPointsByPlayer_Implementation(Player);
	}
}
struct Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Point Counter" },
		{ "Comment", "// Returns the current number of points of a player. In FFA, the player number is the team number.\n" },
		{ "ModuleRelativePath", "Public/Components/BasePointCounter.h" },
		{ "ToolTip", "Returns the current number of points of a player. In FFA, the player number is the team number." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Player;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePointCounter_eventGetPointsByPlayer_Parms, Player), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePointCounter_eventGetPointsByPlayer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasePointCounter, nullptr, "GetPointsByPlayer", Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::PropPointers), sizeof(BasePointCounter_eventGetPointsByPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BasePointCounter_eventGetPointsByPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasePointCounter::execGetPointsByPlayer)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPointsByPlayer_Implementation(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class UBasePointCounter Function GetPointsByPlayer *******************************

// ********** Begin Class UBasePointCounter Function GetStandings **********************************
struct BasePointCounter_eventGetStandings_Parms
{
	TArray<FMinigameStanding> ReturnValue;
};
static FName NAME_UBasePointCounter_GetStandings = FName(TEXT("GetStandings"));
TArray<FMinigameStanding> UBasePointCounter::GetStandings() const
{
	UFunction* Func = FindFunctionChecked(NAME_UBasePointCounter_GetStandings);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BasePointCounter_eventGetStandings_Parms Parms;
		const_cast<UBasePointCounter*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UBasePointCounter*>(this)->GetStandings_Implementation();
	}
}
struct Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Point Counter" },
		{ "Comment", "// Gets the results of the minigame based on the current score\n" },
		{ "ModuleRelativePath", "Public/Components/BasePointCounter.h" },
		{ "ToolTip", "Gets the results of the minigame based on the current score" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMinigameStanding, METADATA_PARAMS(0, nullptr) }; // 585325468
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePointCounter_eventGetStandings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 585325468
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasePointCounter, nullptr, "GetStandings", Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::PropPointers), sizeof(BasePointCounter_eventGetStandings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BasePointCounter_eventGetStandings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasePointCounter_GetStandings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePointCounter_GetStandings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasePointCounter::execGetStandings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMinigameStanding>*)Z_Param__Result=P_THIS->GetStandings_Implementation();
	P_NATIVE_END;
}
// ********** End Class UBasePointCounter Function GetStandings ************************************

// ********** Begin Class UBasePointCounter Function InitializePointCounter ************************
struct BasePointCounter_eventInitializePointCounter_Parms
{
	int32 NumTeams;
	TArray<int32> TeamAssignment;
};
static FName NAME_UBasePointCounter_InitializePointCounter = FName(TEXT("InitializePointCounter"));
void UBasePointCounter::InitializePointCounter(int32 NumTeams, TArray<int32> const& TeamAssignment)
{
	UFunction* Func = FindFunctionChecked(NAME_UBasePointCounter_InitializePointCounter);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BasePointCounter_eventInitializePointCounter_Parms Parms;
		Parms.NumTeams=NumTeams;
		Parms.TeamAssignment=TeamAssignment;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		InitializePointCounter_Implementation(NumTeams, TeamAssignment);
	}
}
struct Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Point Counter" },
		{ "Comment", "// Initializes point counter with team information\n" },
		{ "ModuleRelativePath", "Public/Components/BasePointCounter.h" },
		{ "ToolTip", "Initializes point counter with team information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamAssignment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTeams;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamAssignment_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TeamAssignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::NewProp_NumTeams = { "NumTeams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePointCounter_eventInitializePointCounter_Parms, NumTeams), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::NewProp_TeamAssignment_Inner = { "TeamAssignment", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::NewProp_TeamAssignment = { "TeamAssignment", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePointCounter_eventInitializePointCounter_Parms, TeamAssignment), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamAssignment_MetaData), NewProp_TeamAssignment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::NewProp_NumTeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::NewProp_TeamAssignment_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::NewProp_TeamAssignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasePointCounter, nullptr, "InitializePointCounter", Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::PropPointers), sizeof(BasePointCounter_eventInitializePointCounter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BasePointCounter_eventInitializePointCounter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasePointCounter_InitializePointCounter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePointCounter_InitializePointCounter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasePointCounter::execInitializePointCounter)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumTeams);
	P_GET_TARRAY_REF(int32,Z_Param_Out_TeamAssignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializePointCounter_Implementation(Z_Param_NumTeams,Z_Param_Out_TeamAssignment);
	P_NATIVE_END;
}
// ********** End Class UBasePointCounter Function InitializePointCounter **************************

// ********** Begin Class UBasePointCounter Function SetPoints *************************************
struct BasePointCounter_eventSetPoints_Parms
{
	int32 Team;
	int32 Amount;
};
static FName NAME_UBasePointCounter_SetPoints = FName(TEXT("SetPoints"));
void UBasePointCounter::SetPoints(int32 Team, int32 Amount)
{
	UFunction* Func = FindFunctionChecked(NAME_UBasePointCounter_SetPoints);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BasePointCounter_eventSetPoints_Parms Parms;
		Parms.Team=Team;
		Parms.Amount=Amount;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetPoints_Implementation(Team, Amount);
	}
}
struct Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Point Counter" },
		{ "Comment", "// Sets a team's point counter to the amount. In FFA, the player number is the team number.\n" },
		{ "ModuleRelativePath", "Public/Components/BasePointCounter.h" },
		{ "ToolTip", "Sets a team's point counter to the amount. In FFA, the player number is the team number." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePointCounter_eventSetPoints_Parms, Team), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePointCounter_eventSetPoints_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasePointCounter, nullptr, "SetPoints", Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::PropPointers), sizeof(BasePointCounter_eventSetPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BasePointCounter_eventSetPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasePointCounter_SetPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePointCounter_SetPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasePointCounter::execSetPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Team);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPoints_Implementation(Z_Param_Team,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UBasePointCounter Function SetPoints ***************************************

// ********** Begin Class UBasePointCounter Function SetupTeamAssignment ***************************
struct BasePointCounter_eventSetupTeamAssignment_Parms
{
	int32 NumTeams;
	TArray<int32> TeamAssignments;
};
static FName NAME_UBasePointCounter_SetupTeamAssignment = FName(TEXT("SetupTeamAssignment"));
void UBasePointCounter::SetupTeamAssignment(int32 NumTeams, TArray<int32> const& TeamAssignments)
{
	UFunction* Func = FindFunctionChecked(NAME_UBasePointCounter_SetupTeamAssignment);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BasePointCounter_eventSetupTeamAssignment_Parms Parms;
		Parms.NumTeams=NumTeams;
		Parms.TeamAssignments=TeamAssignments;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetupTeamAssignment_Implementation(NumTeams, TeamAssignments);
	}
}
struct Z_Construct_UFunction_UBasePointCounter_SetupTeamAssignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Point Counter" },
		{ "ModuleRelativePath", "Public/Components/BasePointCounter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamAssignments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTeams;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamAssignments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TeamAssignments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasePointCounter_SetupTeamAssignment_Statics::NewProp_NumTeams = { "NumTeams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePointCounter_eventSetupTeamAssignment_Parms, NumTeams), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBasePointCounter_SetupTeamAssignment_Statics::NewProp_TeamAssignments_Inner = { "TeamAssignments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBasePointCounter_SetupTeamAssignment_Statics::NewProp_TeamAssignments = { "TeamAssignments", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePointCounter_eventSetupTeamAssignment_Parms, TeamAssignments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamAssignments_MetaData), NewProp_TeamAssignments_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasePointCounter_SetupTeamAssignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_SetupTeamAssignment_Statics::NewProp_NumTeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_SetupTeamAssignment_Statics::NewProp_TeamAssignments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasePointCounter_SetupTeamAssignment_Statics::NewProp_TeamAssignments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_SetupTeamAssignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasePointCounter_SetupTeamAssignment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasePointCounter, nullptr, "SetupTeamAssignment", Z_Construct_UFunction_UBasePointCounter_SetupTeamAssignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_SetupTeamAssignment_Statics::PropPointers), sizeof(BasePointCounter_eventSetupTeamAssignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasePointCounter_SetupTeamAssignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasePointCounter_SetupTeamAssignment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BasePointCounter_eventSetupTeamAssignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasePointCounter_SetupTeamAssignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasePointCounter_SetupTeamAssignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasePointCounter::execSetupTeamAssignment)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumTeams);
	P_GET_TARRAY_REF(int32,Z_Param_Out_TeamAssignments);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupTeamAssignment_Implementation(Z_Param_NumTeams,Z_Param_Out_TeamAssignments);
	P_NATIVE_END;
}
// ********** End Class UBasePointCounter Function SetupTeamAssignment *****************************

// ********** Begin Class UBasePointCounter ********************************************************
void UBasePointCounter::StaticRegisterNativesUBasePointCounter()
{
	UClass* Class = UBasePointCounter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPoints", &UBasePointCounter::execAddPoints },
		{ "GetIsInitialized", &UBasePointCounter::execGetIsInitialized },
		{ "GetPoints", &UBasePointCounter::execGetPoints },
		{ "GetPointsByPlayer", &UBasePointCounter::execGetPointsByPlayer },
		{ "GetStandings", &UBasePointCounter::execGetStandings },
		{ "InitializePointCounter", &UBasePointCounter::execInitializePointCounter },
		{ "SetPoints", &UBasePointCounter::execSetPoints },
		{ "SetupTeamAssignment", &UBasePointCounter::execSetupTeamAssignment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBasePointCounter;
UClass* UBasePointCounter::GetPrivateStaticClass()
{
	using TClass = UBasePointCounter;
	if (!Z_Registration_Info_UClass_UBasePointCounter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BasePointCounter"),
			Z_Registration_Info_UClass_UBasePointCounter.InnerSingleton,
			StaticRegisterNativesUBasePointCounter,
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
	return Z_Registration_Info_UClass_UBasePointCounter.InnerSingleton;
}
UClass* Z_Construct_UClass_UBasePointCounter_NoRegister()
{
	return UBasePointCounter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBasePointCounter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/BasePointCounter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/BasePointCounter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPointsChanged_MetaData[] = {
		{ "Category", "Point Counter" },
		{ "ModuleRelativePath", "Public/Components/BasePointCounter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamPoints_MetaData[] = {
		{ "Category", "Point Info" },
		{ "ModuleRelativePath", "Public/Components/BasePointCounter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayersToTeams_MetaData[] = {
		{ "Category", "Point Info" },
		{ "Comment", "// Maps player numbers to teams\n" },
		{ "ModuleRelativePath", "Public/Components/BasePointCounter.h" },
		{ "ToolTip", "Maps player numbers to teams" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPointsChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TeamPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersToTeams_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayersToTeams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasePointCounter_AddPoints, "AddPoints" }, // 2677129301
		{ &Z_Construct_UFunction_UBasePointCounter_GetIsInitialized, "GetIsInitialized" }, // 2025712767
		{ &Z_Construct_UFunction_UBasePointCounter_GetPoints, "GetPoints" }, // 346090920
		{ &Z_Construct_UFunction_UBasePointCounter_GetPointsByPlayer, "GetPointsByPlayer" }, // 1184841961
		{ &Z_Construct_UFunction_UBasePointCounter_GetStandings, "GetStandings" }, // 190263886
		{ &Z_Construct_UFunction_UBasePointCounter_InitializePointCounter, "InitializePointCounter" }, // 844582397
		{ &Z_Construct_UFunction_UBasePointCounter_SetPoints, "SetPoints" }, // 3799764789
		{ &Z_Construct_UFunction_UBasePointCounter_SetupTeamAssignment, "SetupTeamAssignment" }, // 571587040
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasePointCounter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBasePointCounter_Statics::NewProp_OnPointsChanged = { "OnPointsChanged", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasePointCounter, OnPointsChanged), Z_Construct_UDelegateFunction_MinigameCore_PointsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPointsChanged_MetaData), NewProp_OnPointsChanged_MetaData) }; // 2274746109
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBasePointCounter_Statics::NewProp_TeamPoints_Inner = { "TeamPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBasePointCounter_Statics::NewProp_TeamPoints = { "TeamPoints", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasePointCounter, TeamPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamPoints_MetaData), NewProp_TeamPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBasePointCounter_Statics::NewProp_PlayersToTeams_Inner = { "PlayersToTeams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBasePointCounter_Statics::NewProp_PlayersToTeams = { "PlayersToTeams", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasePointCounter, PlayersToTeams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayersToTeams_MetaData), NewProp_PlayersToTeams_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasePointCounter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePointCounter_Statics::NewProp_OnPointsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePointCounter_Statics::NewProp_TeamPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePointCounter_Statics::NewProp_TeamPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePointCounter_Statics::NewProp_PlayersToTeams_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePointCounter_Statics::NewProp_PlayersToTeams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasePointCounter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBasePointCounter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasePointCounter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasePointCounter_Statics::ClassParams = {
	&UBasePointCounter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBasePointCounter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBasePointCounter_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBasePointCounter_Statics::Class_MetaDataParams), Z_Construct_UClass_UBasePointCounter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBasePointCounter()
{
	if (!Z_Registration_Info_UClass_UBasePointCounter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasePointCounter.OuterSingleton, Z_Construct_UClass_UBasePointCounter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBasePointCounter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBasePointCounter);
UBasePointCounter::~UBasePointCounter() {}
// ********** End Class UBasePointCounter **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Components_BasePointCounter_h__Script_MinigameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBasePointCounter, UBasePointCounter::StaticClass, TEXT("UBasePointCounter"), &Z_Registration_Info_UClass_UBasePointCounter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasePointCounter), 787038019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Components_BasePointCounter_h__Script_MinigameCore_1637911243(TEXT("/Script/MinigameCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Components_BasePointCounter_h__Script_MinigameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Components_BasePointCounter_h__Script_MinigameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
