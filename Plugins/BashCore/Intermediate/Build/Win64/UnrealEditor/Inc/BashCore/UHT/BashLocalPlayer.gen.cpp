// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/BashLocalPlayer.h"
#include "Engine/Engine.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBashLocalPlayer() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_UBashLocalPlayer();
BASHCORE_API UClass* Z_Construct_UClass_UBashLocalPlayer_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UPlayerData();
BASHCORE_API UClass* Z_Construct_UClass_UPlayerData_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObject_NoRegister();
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_ULimbitlessLocalPlayer();
UPackage* Z_Construct_UPackage__Script_BashCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlayerData Function AddBoardItem ****************************************
struct Z_Construct_UFunction_UPlayerData_AddBoardItem_Statics
{
	struct PlayerData_eventAddBoardItem_Parms
	{
		UObject* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerData_AddBoardItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventAddBoardItem_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_AddBoardItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_AddBoardItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_AddBoardItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_AddBoardItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "AddBoardItem", Z_Construct_UFunction_UPlayerData_AddBoardItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_AddBoardItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_AddBoardItem_Statics::PlayerData_eventAddBoardItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_AddBoardItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_AddBoardItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_AddBoardItem_Statics::PlayerData_eventAddBoardItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_AddBoardItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_AddBoardItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execAddBoardItem)
{
	P_GET_OBJECT(UObject,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBoardItem(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function AddBoardItem ******************************************

// ********** Begin Class UPlayerData Function GetBoardItems ***************************************
struct Z_Construct_UFunction_UPlayerData_GetBoardItems_Statics
{
	struct PlayerData_eventGetBoardItems_Parms
	{
		TArray<UObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerData_GetBoardItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayerData_GetBoardItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventGetBoardItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_GetBoardItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_GetBoardItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_GetBoardItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetBoardItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_GetBoardItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "GetBoardItems", Z_Construct_UFunction_UPlayerData_GetBoardItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetBoardItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_GetBoardItems_Statics::PlayerData_eventGetBoardItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetBoardItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_GetBoardItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_GetBoardItems_Statics::PlayerData_eventGetBoardItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_GetBoardItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_GetBoardItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execGetBoardItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetBoardItems();
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function GetBoardItems *****************************************

// ********** Begin Class UPlayerData Function GetCoins ********************************************
struct Z_Construct_UFunction_UPlayerData_GetCoins_Statics
{
	struct PlayerData_eventGetCoins_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerData_GetCoins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventGetCoins_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_GetCoins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_GetCoins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetCoins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_GetCoins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "GetCoins", Z_Construct_UFunction_UPlayerData_GetCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetCoins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_GetCoins_Statics::PlayerData_eventGetCoins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetCoins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_GetCoins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_GetCoins_Statics::PlayerData_eventGetCoins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_GetCoins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_GetCoins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execGetCoins)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCoins();
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function GetCoins **********************************************

// ********** Begin Class UPlayerData Function GetCustomizableInstance *****************************
struct Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics
{
	struct PlayerData_eventGetCustomizableInstance_Parms
	{
		UCustomizableObjectInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventGetCustomizableInstance_Parms, ReturnValue), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "GetCustomizableInstance", Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::PlayerData_eventGetCustomizableInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::PlayerData_eventGetCustomizableInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_GetCustomizableInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_GetCustomizableInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execGetCustomizableInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCustomizableObjectInstance**)Z_Param__Result=P_THIS->GetCustomizableInstance();
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function GetCustomizableInstance *******************************

// ********** Begin Class UPlayerData Function GetMobius *******************************************
struct Z_Construct_UFunction_UPlayerData_GetMobius_Statics
{
	struct PlayerData_eventGetMobius_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerData_GetMobius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventGetMobius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_GetMobius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_GetMobius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetMobius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_GetMobius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "GetMobius", Z_Construct_UFunction_UPlayerData_GetMobius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetMobius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_GetMobius_Statics::PlayerData_eventGetMobius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetMobius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_GetMobius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_GetMobius_Statics::PlayerData_eventGetMobius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_GetMobius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_GetMobius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execGetMobius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMobius();
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function GetMobius *********************************************

// ********** Begin Class UPlayerData Function GetPlayerNum ****************************************
struct Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics
{
	struct PlayerData_eventGetPlayerNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventGetPlayerNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "GetPlayerNum", Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::PlayerData_eventGetPlayerNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::PlayerData_eventGetPlayerNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_GetPlayerNum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_GetPlayerNum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execGetPlayerNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlayerNum();
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function GetPlayerNum ******************************************

// ********** Begin Class UPlayerData Function GetTilePos ******************************************
struct Z_Construct_UFunction_UPlayerData_GetTilePos_Statics
{
	struct PlayerData_eventGetTilePos_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "Comment", "//Player Data getters/setters\n" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
		{ "ToolTip", "Player Data getters/setters" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventGetTilePos_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "GetTilePos", Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::PlayerData_eventGetTilePos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::PlayerData_eventGetTilePos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_GetTilePos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_GetTilePos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execGetTilePos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTilePos();
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function GetTilePos ********************************************

// ********** Begin Class UPlayerData Function ModifyCoins *****************************************
struct Z_Construct_UFunction_UPlayerData_ModifyCoins_Statics
{
	struct PlayerData_eventModifyCoins_Parms
	{
		int32 DeltaCoins;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeltaCoins;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerData_ModifyCoins_Statics::NewProp_DeltaCoins = { "DeltaCoins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventModifyCoins_Parms, DeltaCoins), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_ModifyCoins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_ModifyCoins_Statics::NewProp_DeltaCoins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_ModifyCoins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_ModifyCoins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "ModifyCoins", Z_Construct_UFunction_UPlayerData_ModifyCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_ModifyCoins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_ModifyCoins_Statics::PlayerData_eventModifyCoins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_ModifyCoins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_ModifyCoins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_ModifyCoins_Statics::PlayerData_eventModifyCoins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_ModifyCoins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_ModifyCoins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execModifyCoins)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DeltaCoins);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyCoins(Z_Param_DeltaCoins);
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function ModifyCoins *******************************************

// ********** Begin Class UPlayerData Function RemoveBoardItem *************************************
struct Z_Construct_UFunction_UPlayerData_RemoveBoardItem_Statics
{
	struct PlayerData_eventRemoveBoardItem_Parms
	{
		UObject* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerData_RemoveBoardItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventRemoveBoardItem_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_RemoveBoardItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_RemoveBoardItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_RemoveBoardItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_RemoveBoardItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "RemoveBoardItem", Z_Construct_UFunction_UPlayerData_RemoveBoardItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_RemoveBoardItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_RemoveBoardItem_Statics::PlayerData_eventRemoveBoardItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_RemoveBoardItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_RemoveBoardItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_RemoveBoardItem_Statics::PlayerData_eventRemoveBoardItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_RemoveBoardItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_RemoveBoardItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execRemoveBoardItem)
{
	P_GET_OBJECT(UObject,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveBoardItem(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function RemoveBoardItem ***************************************

// ********** Begin Class UPlayerData Function SetCoins ********************************************
struct Z_Construct_UFunction_UPlayerData_SetCoins_Statics
{
	struct PlayerData_eventSetCoins_Parms
	{
		int32 newCoins;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_newCoins;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerData_SetCoins_Statics::NewProp_newCoins = { "newCoins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventSetCoins_Parms, newCoins), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_SetCoins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_SetCoins_Statics::NewProp_newCoins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetCoins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_SetCoins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "SetCoins", Z_Construct_UFunction_UPlayerData_SetCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetCoins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_SetCoins_Statics::PlayerData_eventSetCoins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetCoins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_SetCoins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_SetCoins_Statics::PlayerData_eventSetCoins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_SetCoins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_SetCoins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execSetCoins)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_newCoins);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCoins(Z_Param_newCoins);
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function SetCoins **********************************************

// ********** Begin Class UPlayerData Function SetMobius *******************************************
struct Z_Construct_UFunction_UPlayerData_SetMobius_Statics
{
	struct PlayerData_eventSetMobius_Parms
	{
		int32 newMobius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_newMobius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerData_SetMobius_Statics::NewProp_newMobius = { "newMobius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventSetMobius_Parms, newMobius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_SetMobius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_SetMobius_Statics::NewProp_newMobius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetMobius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_SetMobius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "SetMobius", Z_Construct_UFunction_UPlayerData_SetMobius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetMobius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_SetMobius_Statics::PlayerData_eventSetMobius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetMobius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_SetMobius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_SetMobius_Statics::PlayerData_eventSetMobius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_SetMobius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_SetMobius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execSetMobius)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_newMobius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMobius(Z_Param_newMobius);
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function SetMobius *********************************************

// ********** Begin Class UPlayerData Function SetPlayerNum ****************************************
struct Z_Construct_UFunction_UPlayerData_SetPlayerNum_Statics
{
	struct PlayerData_eventSetPlayerNum_Parms
	{
		int32 Num;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Num;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerData_SetPlayerNum_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventSetPlayerNum_Parms, Num), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_SetPlayerNum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_SetPlayerNum_Statics::NewProp_Num,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetPlayerNum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_SetPlayerNum_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "SetPlayerNum", Z_Construct_UFunction_UPlayerData_SetPlayerNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetPlayerNum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_SetPlayerNum_Statics::PlayerData_eventSetPlayerNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetPlayerNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_SetPlayerNum_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_SetPlayerNum_Statics::PlayerData_eventSetPlayerNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_SetPlayerNum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_SetPlayerNum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execSetPlayerNum)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Num);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerNum(Z_Param_Num);
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function SetPlayerNum ******************************************

// ********** Begin Class UPlayerData Function SetTilePos ******************************************
struct Z_Construct_UFunction_UPlayerData_SetTilePos_Statics
{
	struct PlayerData_eventSetTilePos_Parms
	{
		int32 NewTilePos;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewTilePos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::NewProp_NewTilePos = { "NewTilePos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerData_eventSetTilePos_Parms, NewTilePos), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::NewProp_NewTilePos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerData, nullptr, "SetTilePos", Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::PlayerData_eventSetTilePos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::PlayerData_eventSetTilePos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerData_SetTilePos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerData_SetTilePos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerData::execSetTilePos)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewTilePos);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTilePos(Z_Param_NewTilePos);
	P_NATIVE_END;
}
// ********** End Class UPlayerData Function SetTilePos ********************************************

// ********** Begin Class UPlayerData **************************************************************
void UPlayerData::StaticRegisterNativesUPlayerData()
{
	UClass* Class = UPlayerData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBoardItem", &UPlayerData::execAddBoardItem },
		{ "GetBoardItems", &UPlayerData::execGetBoardItems },
		{ "GetCoins", &UPlayerData::execGetCoins },
		{ "GetCustomizableInstance", &UPlayerData::execGetCustomizableInstance },
		{ "GetMobius", &UPlayerData::execGetMobius },
		{ "GetPlayerNum", &UPlayerData::execGetPlayerNum },
		{ "GetTilePos", &UPlayerData::execGetTilePos },
		{ "ModifyCoins", &UPlayerData::execModifyCoins },
		{ "RemoveBoardItem", &UPlayerData::execRemoveBoardItem },
		{ "SetCoins", &UPlayerData::execSetCoins },
		{ "SetMobius", &UPlayerData::execSetMobius },
		{ "SetPlayerNum", &UPlayerData::execSetPlayerNum },
		{ "SetTilePos", &UPlayerData::execSetTilePos },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerData;
UClass* UPlayerData::GetPrivateStaticClass()
{
	using TClass = UPlayerData;
	if (!Z_Registration_Info_UClass_UPlayerData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerData"),
			Z_Registration_Info_UClass_UPlayerData.InnerSingleton,
			StaticRegisterNativesUPlayerData,
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
	return Z_Registration_Info_UClass_UPlayerData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerData_NoRegister()
{
	return UPlayerData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Player/BashLocalPlayer.h" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoardItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObjectInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoardItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoardItems;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomizableObjectInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerData_AddBoardItem, "AddBoardItem" }, // 1440804418
		{ &Z_Construct_UFunction_UPlayerData_GetBoardItems, "GetBoardItems" }, // 1450071106
		{ &Z_Construct_UFunction_UPlayerData_GetCoins, "GetCoins" }, // 1413395485
		{ &Z_Construct_UFunction_UPlayerData_GetCustomizableInstance, "GetCustomizableInstance" }, // 3165297211
		{ &Z_Construct_UFunction_UPlayerData_GetMobius, "GetMobius" }, // 4272605864
		{ &Z_Construct_UFunction_UPlayerData_GetPlayerNum, "GetPlayerNum" }, // 1121576403
		{ &Z_Construct_UFunction_UPlayerData_GetTilePos, "GetTilePos" }, // 884446194
		{ &Z_Construct_UFunction_UPlayerData_ModifyCoins, "ModifyCoins" }, // 2029724850
		{ &Z_Construct_UFunction_UPlayerData_RemoveBoardItem, "RemoveBoardItem" }, // 2654792039
		{ &Z_Construct_UFunction_UPlayerData_SetCoins, "SetCoins" }, // 1290350708
		{ &Z_Construct_UFunction_UPlayerData_SetMobius, "SetMobius" }, // 570519964
		{ &Z_Construct_UFunction_UPlayerData_SetPlayerNum, "SetPlayerNum" }, // 1942134348
		{ &Z_Construct_UFunction_UPlayerData_SetTilePos, "SetTilePos" }, // 2902608865
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerData_Statics::NewProp_BoardItems_Inner = { "BoardItems", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerData_Statics::NewProp_BoardItems = { "BoardItems", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerData, BoardItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoardItems_MetaData), NewProp_BoardItems_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerData_Statics::NewProp_CustomizableObjectInstance = { "CustomizableObjectInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerData, CustomizableObjectInstance), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomizableObjectInstance_MetaData), NewProp_CustomizableObjectInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerData_Statics::NewProp_BoardItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerData_Statics::NewProp_BoardItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerData_Statics::NewProp_CustomizableObjectInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerData_Statics::ClassParams = {
	&UPlayerData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerData()
{
	if (!Z_Registration_Info_UClass_UPlayerData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerData.OuterSingleton, Z_Construct_UClass_UPlayerData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerData.OuterSingleton;
}
UPlayerData::UPlayerData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerData);
UPlayerData::~UPlayerData() {}
// ********** End Class UPlayerData ****************************************************************

// ********** Begin Class UBashLocalPlayer Function GetPlayerData **********************************
struct Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics
{
	struct BashLocalPlayer_eventGetPlayerData_Parms
	{
		UPlayerData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BashLocalPlayer_eventGetPlayerData_Parms, ReturnValue), Z_Construct_UClass_UPlayerData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBashLocalPlayer, nullptr, "GetPlayerData", Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::BashLocalPlayer_eventGetPlayerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::BashLocalPlayer_eventGetPlayerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBashLocalPlayer::execGetPlayerData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayerData**)Z_Param__Result=P_THIS->GetPlayerData();
	P_NATIVE_END;
}
// ********** End Class UBashLocalPlayer Function GetPlayerData ************************************

// ********** Begin Class UBashLocalPlayer *********************************************************
void UBashLocalPlayer::StaticRegisterNativesUBashLocalPlayer()
{
	UClass* Class = UBashLocalPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerData", &UBashLocalPlayer::execGetPlayerData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBashLocalPlayer;
UClass* UBashLocalPlayer::GetPrivateStaticClass()
{
	using TClass = UBashLocalPlayer;
	if (!Z_Registration_Info_UClass_UBashLocalPlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BashLocalPlayer"),
			Z_Registration_Info_UClass_UBashLocalPlayer.InnerSingleton,
			StaticRegisterNativesUBashLocalPlayer,
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
	return Z_Registration_Info_UClass_UBashLocalPlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_UBashLocalPlayer_NoRegister()
{
	return UBashLocalPlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBashLocalPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/BashLocalPlayer.h" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[] = {
		{ "BlueprintGetter", "GetPlayerData" },
		{ "Category", "Player Data" },
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/BashLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomizableObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBashLocalPlayer_GetPlayerData, "GetPlayerData" }, // 4159252913
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBashLocalPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBashLocalPlayer_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBashLocalPlayer, PlayerData), Z_Construct_UClass_UPlayerData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerData_MetaData), NewProp_PlayerData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBashLocalPlayer_Statics::NewProp_CustomizableObject = { "CustomizableObject", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBashLocalPlayer, CustomizableObject), Z_Construct_UClass_UCustomizableObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomizableObject_MetaData), NewProp_CustomizableObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBashLocalPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBashLocalPlayer_Statics::NewProp_PlayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBashLocalPlayer_Statics::NewProp_CustomizableObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBashLocalPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBashLocalPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULimbitlessLocalPlayer,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBashLocalPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBashLocalPlayer_Statics::ClassParams = {
	&UBashLocalPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBashLocalPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBashLocalPlayer_Statics::PropPointers),
	0,
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBashLocalPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBashLocalPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBashLocalPlayer()
{
	if (!Z_Registration_Info_UClass_UBashLocalPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBashLocalPlayer.OuterSingleton, Z_Construct_UClass_UBashLocalPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBashLocalPlayer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBashLocalPlayer);
UBashLocalPlayer::~UBashLocalPlayer() {}
// ********** End Class UBashLocalPlayer ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h__Script_BashCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerData, UPlayerData::StaticClass, TEXT("UPlayerData"), &Z_Registration_Info_UClass_UPlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerData), 3545619406U) },
		{ Z_Construct_UClass_UBashLocalPlayer, UBashLocalPlayer::StaticClass, TEXT("UBashLocalPlayer"), &Z_Registration_Info_UClass_UBashLocalPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBashLocalPlayer), 405146345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h__Script_BashCore_4230061967(TEXT("/Script/BashCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h__Script_BashCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h__Script_BashCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
