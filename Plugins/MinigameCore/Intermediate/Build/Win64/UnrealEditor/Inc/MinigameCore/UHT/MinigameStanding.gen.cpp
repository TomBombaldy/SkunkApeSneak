// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/MinigameStanding.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMinigameStanding() {}

// ********** Begin Cross Module References ********************************************************
MINIGAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMinigameStanding();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMinigameStanding *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMinigameStanding;
class UScriptStruct* FMinigameStanding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMinigameStanding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMinigameStanding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinigameStanding, (UObject*)Z_Construct_UPackage__Script_MinigameCore(), TEXT("MinigameStanding"));
	}
	return Z_Registration_Info_UScriptStruct_FMinigameStanding.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMinigameStanding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Data/MinigameStanding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "Category", "Standing" },
		{ "Comment", "// Number of the player in this standing\n" },
		{ "ModuleRelativePath", "Public/Data/MinigameStanding.h" },
		{ "ToolTip", "Number of the player in this standing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Place_MetaData[] = {
		{ "Category", "Standing" },
		{ "Comment", "// 1st place, 2nd place, etc. Multiple players can have the same place\n" },
		{ "ModuleRelativePath", "Public/Data/MinigameStanding.h" },
		{ "ToolTip", "1st place, 2nd place, etc. Multiple players can have the same place" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Player;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Place;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinigameStanding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMinigameStanding_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinigameStanding, Player), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMinigameStanding_Statics::NewProp_Place = { "Place", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinigameStanding, Place), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Place_MetaData), NewProp_Place_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMinigameStanding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinigameStanding_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinigameStanding_Statics::NewProp_Place,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinigameStanding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMinigameStanding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
	nullptr,
	&NewStructOps,
	"MinigameStanding",
	Z_Construct_UScriptStruct_FMinigameStanding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinigameStanding_Statics::PropPointers),
	sizeof(FMinigameStanding),
	alignof(FMinigameStanding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinigameStanding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMinigameStanding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMinigameStanding()
{
	if (!Z_Registration_Info_UScriptStruct_FMinigameStanding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMinigameStanding.InnerSingleton, Z_Construct_UScriptStruct_FMinigameStanding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMinigameStanding.InnerSingleton;
}
// ********** End ScriptStruct FMinigameStanding ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Data_MinigameStanding_h__Script_MinigameCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMinigameStanding::StaticStruct, Z_Construct_UScriptStruct_FMinigameStanding_Statics::NewStructOps, TEXT("MinigameStanding"), &Z_Registration_Info_UScriptStruct_FMinigameStanding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMinigameStanding), 585325468U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Data_MinigameStanding_h__Script_MinigameCore_4034878163(TEXT("/Script/MinigameCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Data_MinigameStanding_h__Script_MinigameCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Data_MinigameStanding_h__Script_MinigameCore_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
