// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MinigameCoreBlueprintLibrary.h"

#ifdef MINIGAMECORE_MinigameCoreBlueprintLibrary_generated_h
#error "MinigameCoreBlueprintLibrary.generated.h already included, missing '#pragma once' in MinigameCoreBlueprintLibrary.h"
#endif
#define MINIGAMECORE_MinigameCoreBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;

// ********** Begin Class UMinigameCoreBlueprintLibrary ********************************************
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCoreBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetProjectileTrajectoryVelocityFromTime); \
	DECLARE_FUNCTION(execGetProjectileTrajectoryVelocityFromLaunchSpeed); \
	DECLARE_FUNCTION(execGetProjectileTrajectoryAngleFromLaunchSpeed);


MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameCoreBlueprintLibrary_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCoreBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMinigameCoreBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMinigameCoreBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameCoreBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMinigameCoreBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MinigameCore"), Z_Construct_UClass_UMinigameCoreBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMinigameCoreBlueprintLibrary)


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCoreBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMinigameCoreBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMinigameCoreBlueprintLibrary(UMinigameCoreBlueprintLibrary&&) = delete; \
	UMinigameCoreBlueprintLibrary(const UMinigameCoreBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMinigameCoreBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMinigameCoreBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMinigameCoreBlueprintLibrary) \
	NO_API virtual ~UMinigameCoreBlueprintLibrary();


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCoreBlueprintLibrary_h_12_PROLOG
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCoreBlueprintLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCoreBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCoreBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCoreBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMinigameCoreBlueprintLibrary;

// ********** End Class UMinigameCoreBlueprintLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameCoreBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
