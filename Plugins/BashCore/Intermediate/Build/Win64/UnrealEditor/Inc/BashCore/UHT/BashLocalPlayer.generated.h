// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/BashLocalPlayer.h"

#ifdef BASHCORE_BashLocalPlayer_generated_h
#error "BashLocalPlayer.generated.h already included, missing '#pragma once' in BashLocalPlayer.h"
#endif
#define BASHCORE_BashLocalPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCustomizableObjectInstance;
class UObject;
class UPlayerData;

// ********** Begin Class UPlayerData **************************************************************
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBoardItems); \
	DECLARE_FUNCTION(execRemoveBoardItem); \
	DECLARE_FUNCTION(execAddBoardItem); \
	DECLARE_FUNCTION(execGetCustomizableInstance); \
	DECLARE_FUNCTION(execSetMobius); \
	DECLARE_FUNCTION(execModifyCoins); \
	DECLARE_FUNCTION(execSetCoins); \
	DECLARE_FUNCTION(execGetPlayerNum); \
	DECLARE_FUNCTION(execGetMobius); \
	DECLARE_FUNCTION(execGetCoins); \
	DECLARE_FUNCTION(execSetTilePos); \
	DECLARE_FUNCTION(execSetPlayerNum); \
	DECLARE_FUNCTION(execGetTilePos);


BASHCORE_API UClass* Z_Construct_UClass_UPlayerData_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerData(); \
	friend struct Z_Construct_UClass_UPlayerData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASHCORE_API UClass* Z_Construct_UClass_UPlayerData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlayerData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BashCore"), Z_Construct_UClass_UPlayerData_NoRegister) \
	DECLARE_SERIALIZER(UPlayerData)


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlayerData(UPlayerData&&) = delete; \
	UPlayerData(const UPlayerData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerData) \
	NO_API virtual ~UPlayerData();


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_14_PROLOG
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlayerData;

// ********** End Class UPlayerData ****************************************************************

// ********** Begin Class UBashLocalPlayer *********************************************************
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPlayerData);


BASHCORE_API UClass* Z_Construct_UClass_UBashLocalPlayer_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBashLocalPlayer(); \
	friend struct Z_Construct_UClass_UBashLocalPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASHCORE_API UClass* Z_Construct_UClass_UBashLocalPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UBashLocalPlayer, ULimbitlessLocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BashCore"), Z_Construct_UClass_UBashLocalPlayer_NoRegister) \
	DECLARE_SERIALIZER(UBashLocalPlayer)


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_102_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBashLocalPlayer(UBashLocalPlayer&&) = delete; \
	UBashLocalPlayer(const UBashLocalPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBashLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBashLocalPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBashLocalPlayer) \
	NO_API virtual ~UBashLocalPlayer();


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_99_PROLOG
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_102_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBashLocalPlayer;

// ********** End Class UBashLocalPlayer ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashLocalPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
