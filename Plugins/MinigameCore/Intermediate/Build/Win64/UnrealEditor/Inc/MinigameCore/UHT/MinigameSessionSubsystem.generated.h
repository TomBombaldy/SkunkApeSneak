// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MinigameSessionSubsystem.h"

#ifdef MINIGAMECORE_MinigameSessionSubsystem_generated_h
#error "MinigameSessionSubsystem.generated.h already included, missing '#pragma once' in MinigameSessionSubsystem.h"
#endif
#define MINIGAMECORE_MinigameSessionSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UWorld;
struct FMinigameStanding;

// ********** Begin Delegate FGetMinigamePlayerCountSignature **************************************
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_11_DELEGATE \
MINIGAMECORE_API int32 FGetMinigamePlayerCountSignature_DelegateWrapper(const FScriptDelegate& GetMinigamePlayerCountSignature);


// ********** End Delegate FGetMinigamePlayerCountSignature ****************************************

// ********** Begin Class UMinigameSessionSubsystem ************************************************
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMinigameReturnLevel); \
	DECLARE_FUNCTION(execSetMinigameReturnLevel); \
	DECLARE_FUNCTION(execGetPlayerCount); \
	DECLARE_FUNCTION(execSetPlayerCount); \
	DECLARE_FUNCTION(execGetMinigameResults);


MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameSessionSubsystem_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMinigameSessionSubsystem(); \
	friend struct Z_Construct_UClass_UMinigameSessionSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameSessionSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMinigameSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MinigameCore"), Z_Construct_UClass_UMinigameSessionSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMinigameSessionSubsystem)


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMinigameSessionSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMinigameSessionSubsystem(UMinigameSessionSubsystem&&) = delete; \
	UMinigameSessionSubsystem(const UMinigameSessionSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMinigameSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMinigameSessionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMinigameSessionSubsystem) \
	NO_API virtual ~UMinigameSessionSubsystem();


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_16_PROLOG
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMinigameSessionSubsystem;

// ********** End Class UMinigameSessionSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameSessionSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
