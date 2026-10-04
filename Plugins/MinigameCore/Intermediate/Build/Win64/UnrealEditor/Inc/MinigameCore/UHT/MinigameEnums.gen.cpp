// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/MinigameEnums.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMinigameEnums() {}

// ********** Begin Cross Module References ********************************************************
MINIGAMECORE_API UEnum* Z_Construct_UEnum_MinigameCore_EMinigameType();
MINIGAMECORE_API UEnum* Z_Construct_UEnum_MinigameCore_ESplitBy();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMinigameType *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMinigameType;
static UEnum* EMinigameType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMinigameType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMinigameType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MinigameCore_EMinigameType, (UObject*)Z_Construct_UPackage__Script_MinigameCore(), TEXT("EMinigameType"));
	}
	return Z_Registration_Info_UEnum_EMinigameType.OuterSingleton;
}
template<> MINIGAMECORE_API UEnum* StaticEnum<EMinigameType>()
{
	return EMinigameType_StaticEnum();
}
struct Z_Construct_UEnum_MinigameCore_EMinigameType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/MinigameEnums.h" },
		{ "MT_2v2.DisplayName", "2v2" },
		{ "MT_2v2.Name", "EMinigameType::MT_2v2" },
		{ "MT_3v1.DisplayName", "3v1" },
		{ "MT_3v1.Name", "EMinigameType::MT_3v1" },
		{ "MT_FFA.DisplayName", "Free for All" },
		{ "MT_FFA.Name", "EMinigameType::MT_FFA" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMinigameType::MT_FFA", (int64)EMinigameType::MT_FFA },
		{ "EMinigameType::MT_3v1", (int64)EMinigameType::MT_3v1 },
		{ "EMinigameType::MT_2v2", (int64)EMinigameType::MT_2v2 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MinigameCore_EMinigameType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MinigameCore,
	nullptr,
	"EMinigameType",
	"EMinigameType",
	Z_Construct_UEnum_MinigameCore_EMinigameType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MinigameCore_EMinigameType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MinigameCore_EMinigameType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MinigameCore_EMinigameType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MinigameCore_EMinigameType()
{
	if (!Z_Registration_Info_UEnum_EMinigameType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMinigameType.InnerSingleton, Z_Construct_UEnum_MinigameCore_EMinigameType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMinigameType.InnerSingleton;
}
// ********** End Enum EMinigameType ***************************************************************

// ********** Begin Enum ESplitBy ******************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESplitBy;
static UEnum* ESplitBy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESplitBy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESplitBy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MinigameCore_ESplitBy, (UObject*)Z_Construct_UPackage__Script_MinigameCore(), TEXT("ESplitBy"));
	}
	return Z_Registration_Info_UEnum_ESplitBy.OuterSingleton;
}
template<> MINIGAMECORE_API UEnum* StaticEnum<ESplitBy>()
{
	return ESplitBy_StaticEnum();
}
struct Z_Construct_UEnum_MinigameCore_ESplitBy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/MinigameEnums.h" },
		{ "PLAYERS.DisplayName", "Players" },
		{ "PLAYERS.Name", "ESplitBy::PLAYERS" },
		{ "TEAMS.DisplayName", "Teams" },
		{ "TEAMS.Name", "ESplitBy::TEAMS" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESplitBy::PLAYERS", (int64)ESplitBy::PLAYERS },
		{ "ESplitBy::TEAMS", (int64)ESplitBy::TEAMS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MinigameCore_ESplitBy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MinigameCore,
	nullptr,
	"ESplitBy",
	"ESplitBy",
	Z_Construct_UEnum_MinigameCore_ESplitBy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MinigameCore_ESplitBy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MinigameCore_ESplitBy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MinigameCore_ESplitBy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MinigameCore_ESplitBy()
{
	if (!Z_Registration_Info_UEnum_ESplitBy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESplitBy.InnerSingleton, Z_Construct_UEnum_MinigameCore_ESplitBy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESplitBy.InnerSingleton;
}
// ********** End Enum ESplitBy ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Data_MinigameEnums_h__Script_MinigameCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMinigameType_StaticEnum, TEXT("EMinigameType"), &Z_Registration_Info_UEnum_EMinigameType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1798098046U) },
		{ ESplitBy_StaticEnum, TEXT("ESplitBy"), &Z_Registration_Info_UEnum_ESplitBy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 838745005U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Data_MinigameEnums_h__Script_MinigameCore_2173365657(TEXT("/Script/MinigameCore"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Data_MinigameEnums_h__Script_MinigameCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Data_MinigameEnums_h__Script_MinigameCore_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
