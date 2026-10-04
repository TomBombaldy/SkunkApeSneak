// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PlayerSpawn.h"

#ifdef MINIGAMECORE_PlayerSpawn_generated_h
#error "PlayerSpawn.generated.h already included, missing '#pragma once' in PlayerSpawn.h"
#endif
#define MINIGAMECORE_PlayerSpawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APlayerSpawn *************************************************************
MINIGAMECORE_API UClass* Z_Construct_UClass_APlayerSpawn_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerSpawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerSpawn(); \
	friend struct Z_Construct_UClass_APlayerSpawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MINIGAMECORE_API UClass* Z_Construct_UClass_APlayerSpawn_NoRegister(); \
public: \
	DECLARE_CLASS2(APlayerSpawn, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinigameCore"), Z_Construct_UClass_APlayerSpawn_NoRegister) \
	DECLARE_SERIALIZER(APlayerSpawn)


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerSpawn_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerSpawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlayerSpawn(APlayerSpawn&&) = delete; \
	APlayerSpawn(const APlayerSpawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerSpawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerSpawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerSpawn) \
	NO_API virtual ~APlayerSpawn();


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerSpawn_h_9_PROLOG
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerSpawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerSpawn_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerSpawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlayerSpawn;

// ********** End Class APlayerSpawn ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerSpawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
