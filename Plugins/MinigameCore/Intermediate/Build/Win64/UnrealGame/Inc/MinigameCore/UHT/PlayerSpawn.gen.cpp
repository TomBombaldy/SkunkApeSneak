// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/PlayerSpawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerSpawn() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
MINIGAMECORE_API UClass* Z_Construct_UClass_APlayerSpawn();
MINIGAMECORE_API UClass* Z_Construct_UClass_APlayerSpawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerSpawn *************************************************************
void APlayerSpawn::StaticRegisterNativesAPlayerSpawn()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerSpawn;
UClass* APlayerSpawn::GetPrivateStaticClass()
{
	using TClass = APlayerSpawn;
	if (!Z_Registration_Info_UClass_APlayerSpawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerSpawn"),
			Z_Registration_Info_UClass_APlayerSpawn.InnerSingleton,
			StaticRegisterNativesAPlayerSpawn,
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
	return Z_Registration_Info_UClass_APlayerSpawn.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerSpawn_NoRegister()
{
	return APlayerSpawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerSpawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/PlayerSpawn.h" },
		{ "ModuleRelativePath", "Public/Player/PlayerSpawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[] = {
		{ "Category", "Spawn Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Team associated with this player spawn\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerSpawn.h" },
		{ "ToolTip", "Team associated with this player spawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Spawn Properties" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "Comment", "// The position of this player spawn in the team\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerSpawn.h" },
		{ "ToolTip", "The position of this player spawn in the team" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPlayersRequired_MetaData[] = {
		{ "Category", "Spawn Properties" },
		{ "ClampMax", "4" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * The number of players that must on the associated team to consider this player spawn\n\x09 * For example, restricting a player spawn to only work if there are 2 players on a 3v1 minigame\n\x09 */" },
		{ "ModuleRelativePath", "Public/Player/PlayerSpawn.h" },
		{ "ToolTip", "The number of players that must on the associated team to consider this player spawn\nFor example, restricting a player spawn to only work if there are 2 players on a 3v1 minigame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOnAnyPlayerCount_MetaData[] = {
		{ "Category", "Spawn Properties" },
		{ "ModuleRelativePath", "Public/Player/PlayerSpawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Team;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPlayersRequired;
	static void NewProp_bUseOnAnyPlayerCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOnAnyPlayerCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerSpawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerSpawn_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerSpawn, Team), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Team_MetaData), NewProp_Team_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerSpawn_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerSpawn, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerSpawn_Statics::NewProp_NumPlayersRequired = { "NumPlayersRequired", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerSpawn, NumPlayersRequired), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPlayersRequired_MetaData), NewProp_NumPlayersRequired_MetaData) };
void Z_Construct_UClass_APlayerSpawn_Statics::NewProp_bUseOnAnyPlayerCount_SetBit(void* Obj)
{
	((APlayerSpawn*)Obj)->bUseOnAnyPlayerCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerSpawn_Statics::NewProp_bUseOnAnyPlayerCount = { "bUseOnAnyPlayerCount", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerSpawn), &Z_Construct_UClass_APlayerSpawn_Statics::NewProp_bUseOnAnyPlayerCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOnAnyPlayerCount_MetaData), NewProp_bUseOnAnyPlayerCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSpawn_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSpawn_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSpawn_Statics::NewProp_NumPlayersRequired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSpawn_Statics::NewProp_bUseOnAnyPlayerCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSpawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerSpawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSpawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerSpawn_Statics::ClassParams = {
	&APlayerSpawn::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlayerSpawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSpawn_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSpawn_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerSpawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerSpawn()
{
	if (!Z_Registration_Info_UClass_APlayerSpawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerSpawn.OuterSingleton, Z_Construct_UClass_APlayerSpawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerSpawn.OuterSingleton;
}
APlayerSpawn::APlayerSpawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerSpawn);
APlayerSpawn::~APlayerSpawn() {}
// ********** End Class APlayerSpawn ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerSpawn_h__Script_MinigameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerSpawn, APlayerSpawn::StaticClass, TEXT("APlayerSpawn"), &Z_Registration_Info_UClass_APlayerSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerSpawn), 2834900618U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerSpawn_h__Script_MinigameCore_1329441184(TEXT("/Script/MinigameCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerSpawn_h__Script_MinigameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerSpawn_h__Script_MinigameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
