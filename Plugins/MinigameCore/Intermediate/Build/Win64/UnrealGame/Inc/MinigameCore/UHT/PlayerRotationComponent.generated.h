// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PlayerRotationComponent.h"

#ifdef MINIGAMECORE_PlayerRotationComponent_generated_h
#error "PlayerRotationComponent.generated.h already included, missing '#pragma once' in PlayerRotationComponent.h"
#endif
#define MINIGAMECORE_PlayerRotationComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPlayerRotationComponent *************************************************
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSetScreenResolution); \
	DECLARE_FUNCTION(execGetRotationInputValueVector); \
	DECLARE_FUNCTION(execGetRotationInputValue); \
	DECLARE_FUNCTION(execSetAimOffset); \
	DECLARE_FUNCTION(execAddAimOffset); \
	DECLARE_FUNCTION(execGetDirectionFromCamera); \
	DECLARE_FUNCTION(execGetAimPosition); \
	DECLARE_FUNCTION(execGetDeltaRotator); \
	DECLARE_FUNCTION(execGetDeltaRotationEuler); \
	DECLARE_FUNCTION(execGetDeltaRotation); \
	DECLARE_FUNCTION(execResetInitialOrientation);


MINIGAMECORE_API UClass* Z_Construct_UClass_UPlayerRotationComponent_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerRotationComponent(); \
	friend struct Z_Construct_UClass_UPlayerRotationComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MINIGAMECORE_API UClass* Z_Construct_UClass_UPlayerRotationComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlayerRotationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinigameCore"), Z_Construct_UClass_UPlayerRotationComponent_NoRegister) \
	DECLARE_SERIALIZER(UPlayerRotationComponent)


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlayerRotationComponent(UPlayerRotationComponent&&) = delete; \
	UPlayerRotationComponent(const UPlayerRotationComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerRotationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerRotationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerRotationComponent) \
	NO_API virtual ~UPlayerRotationComponent();


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationComponent_h_17_PROLOG
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlayerRotationComponent;

// ********** End Class UPlayerRotationComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerRotationComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
