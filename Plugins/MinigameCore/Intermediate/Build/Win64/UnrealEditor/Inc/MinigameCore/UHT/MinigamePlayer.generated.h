// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/MinigamePlayer.h"

#ifdef MINIGAMECORE_MinigamePlayer_generated_h
#error "MinigamePlayer.generated.h already included, missing '#pragma once' in MinigamePlayer.h"
#endif
#define MINIGAMECORE_MinigamePlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FInputActionValue;

// ********** Begin Class AMinigamePlayer **********************************************************
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReadyPlayer);


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h_17_CALLBACK_WRAPPERS
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigamePlayer_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinigamePlayer(); \
	friend struct Z_Construct_UClass_AMinigamePlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigamePlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(AMinigamePlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinigameCore"), Z_Construct_UClass_AMinigamePlayer_NoRegister) \
	DECLARE_SERIALIZER(AMinigamePlayer)


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMinigamePlayer(AMinigamePlayer&&) = delete; \
	AMinigamePlayer(const AMinigamePlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinigamePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinigamePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinigamePlayer) \
	NO_API virtual ~AMinigamePlayer();


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h_14_PROLOG
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h_17_CALLBACK_WRAPPERS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMinigamePlayer;

// ********** End Class AMinigamePlayer ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_MinigamePlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
