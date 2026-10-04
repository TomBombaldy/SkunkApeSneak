// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cutscenes/MinigameCutsceneManager.h"

#ifdef MINIGAMECORE_MinigameCutsceneManager_generated_h
#error "MinigameCutsceneManager.generated.h already included, missing '#pragma once' in MinigameCutsceneManager.h"
#endif
#define MINIGAMECORE_MinigameCutsceneManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AMinigameBase;
class UWorld;

// ********** Begin Class UMinigameCutsceneManager *************************************************
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_MinigameCutsceneManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnStartCutscene_Implementation(AMinigameBase* Minigame); \
	DECLARE_FUNCTION(execGetWorld); \
	DECLARE_FUNCTION(execEndCutscene); \
	DECLARE_FUNCTION(execOnStartCutscene);


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_MinigameCutsceneManager_h_19_CALLBACK_WRAPPERS
MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameCutsceneManager_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_MinigameCutsceneManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMinigameCutsceneManager(); \
	friend struct Z_Construct_UClass_UMinigameCutsceneManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MINIGAMECORE_API UClass* Z_Construct_UClass_UMinigameCutsceneManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UMinigameCutsceneManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MinigameCore"), Z_Construct_UClass_UMinigameCutsceneManager_NoRegister) \
	DECLARE_SERIALIZER(UMinigameCutsceneManager)


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_MinigameCutsceneManager_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMinigameCutsceneManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMinigameCutsceneManager(UMinigameCutsceneManager&&) = delete; \
	UMinigameCutsceneManager(const UMinigameCutsceneManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMinigameCutsceneManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMinigameCutsceneManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMinigameCutsceneManager) \
	NO_API virtual ~UMinigameCutsceneManager();


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_MinigameCutsceneManager_h_16_PROLOG
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_MinigameCutsceneManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_MinigameCutsceneManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_MinigameCutsceneManager_h_19_CALLBACK_WRAPPERS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_MinigameCutsceneManager_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_MinigameCutsceneManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMinigameCutsceneManager;

// ********** End Class UMinigameCutsceneManager ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Cutscenes_MinigameCutsceneManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
