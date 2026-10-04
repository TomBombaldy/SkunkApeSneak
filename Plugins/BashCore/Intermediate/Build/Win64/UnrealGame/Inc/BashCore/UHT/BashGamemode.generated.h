// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BashGamemode.h"

#ifdef BASHCORE_BashGamemode_generated_h
#error "BashGamemode.generated.h already included, missing '#pragma once' in BashGamemode.h"
#endif
#define BASHCORE_BashGamemode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FLoadLevelParams;

// ********** Begin ScriptStruct FLoadLevelParams **************************************************
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLoadLevelParams_Statics; \
	BASHCORE_API static class UScriptStruct* StaticStruct();


struct FLoadLevelParams;
// ********** End ScriptStruct FLoadLevelParams ****************************************************

// ********** Begin Class ABashGamemode ************************************************************
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOpenLevel); \
	DECLARE_FUNCTION(execPlayTransitionEffects); \
	DECLARE_FUNCTION(execOnEnterTransitionFinish); \
	DECLARE_FUNCTION(execTransitionToLevel);


BASHCORE_API UClass* Z_Construct_UClass_ABashGamemode_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABashGamemode(); \
	friend struct Z_Construct_UClass_ABashGamemode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASHCORE_API UClass* Z_Construct_UClass_ABashGamemode_NoRegister(); \
public: \
	DECLARE_CLASS2(ABashGamemode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BashCore"), Z_Construct_UClass_ABashGamemode_NoRegister) \
	DECLARE_SERIALIZER(ABashGamemode)


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABashGamemode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABashGamemode(ABashGamemode&&) = delete; \
	ABashGamemode(const ABashGamemode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABashGamemode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABashGamemode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABashGamemode) \
	NO_API virtual ~ABashGamemode();


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h_25_PROLOG
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h_28_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABashGamemode;

// ********** End Class ABashGamemode **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashGamemode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
