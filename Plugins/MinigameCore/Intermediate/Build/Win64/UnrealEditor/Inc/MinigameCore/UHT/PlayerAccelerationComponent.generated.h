// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PlayerAccelerationComponent.h"

#ifdef MINIGAMECORE_PlayerAccelerationComponent_generated_h
#error "PlayerAccelerationComponent.generated.h already included, missing '#pragma once' in PlayerAccelerationComponent.h"
#endif
#define MINIGAMECORE_PlayerAccelerationComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnMovementTriggeredSignature *****************************************
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_13_DELEGATE \
MINIGAMECORE_API void FOnMovementTriggeredSignature_DelegateWrapper(const FScriptDelegate& OnMovementTriggeredSignature);


// ********** End Delegate FOnMovementTriggeredSignature *******************************************

// ********** Begin Delegate FEvaluateMovementSignature ********************************************
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_14_DELEGATE \
MINIGAMECORE_API bool FEvaluateMovementSignature_DelegateWrapper(const FScriptDelegate& EvaluateMovementSignature, FVector CoordinateAcceleration);


// ********** End Delegate FEvaluateMovementSignature **********************************************

// ********** Begin Class UPlayerAccelerationComponent *********************************************
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAccelerationInputValue); \
	DECLARE_FUNCTION(execGetCoordinateAcceleration); \
	DECLARE_FUNCTION(execListenForMovement);


MINIGAMECORE_API UClass* Z_Construct_UClass_UPlayerAccelerationComponent_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAccelerationComponent(); \
	friend struct Z_Construct_UClass_UPlayerAccelerationComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MINIGAMECORE_API UClass* Z_Construct_UClass_UPlayerAccelerationComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlayerAccelerationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinigameCore"), Z_Construct_UClass_UPlayerAccelerationComponent_NoRegister) \
	DECLARE_SERIALIZER(UPlayerAccelerationComponent)


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlayerAccelerationComponent(UPlayerAccelerationComponent&&) = delete; \
	UPlayerAccelerationComponent(const UPlayerAccelerationComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAccelerationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAccelerationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerAccelerationComponent) \
	NO_API virtual ~UPlayerAccelerationComponent();


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_16_PROLOG
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlayerAccelerationComponent;

// ********** End Class UPlayerAccelerationComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
