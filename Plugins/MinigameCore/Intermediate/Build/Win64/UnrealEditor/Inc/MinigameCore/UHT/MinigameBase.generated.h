// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MinigameBase.h"

#ifdef MINIGAMECORE_MinigameBase_generated_h
#error "MinigameBase.generated.h already included, missing '#pragma once' in MinigameBase.h"
#endif
#define MINIGAMECORE_MinigameBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AMinigameCapture;
class AMinigamePlayer;
class UBasePointCounter;
class UOverlaySlot;
class USplitscreenUI;
class UUserWidget;
enum class EMinigameType : uint8;

// ********** Begin Delegate FGameStartedSignature *************************************************
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_25_DELEGATE \
MINIGAMECORE_API void FGameStartedSignature_DelegateWrapper(const FMulticastScriptDelegate& GameStartedSignature);


// ********** End Delegate FGameStartedSignature ***************************************************

// ********** Begin Delegate FGameEndedSignature ***************************************************
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_26_DELEGATE \
MINIGAMECORE_API void FGameEndedSignature_DelegateWrapper(const FMulticastScriptDelegate& GameEndedSignature);


// ********** End Delegate FGameEndedSignature *****************************************************

// ********** Begin Delegate FGameResetSignature ***************************************************
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_27_DELEGATE \
MINIGAMECORE_API void FGameResetSignature_DelegateWrapper(const FMulticastScriptDelegate& GameResetSignature);


// ********** End Delegate FGameResetSignature *****************************************************

// ********** Begin Class AMinigameBase ************************************************************
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execSetupGame); \
	DECLARE_FUNCTION(execPlayMinigameTransitionEffects); \
	DECLARE_FUNCTION(execAddWidgetToMinigameUISplit); \
	DECLARE_FUNCTION(execGetMinigameWidgetRoot); \
	DECLARE_FUNCTION(execGetNumCameraSplits); \
	DECLARE_FUNCTION(execGetCamera); \
	DECLARE_FUNCTION(execAddCamera); \
	DECLARE_FUNCTION(execGetTeamType); \
	DECLARE_FUNCTION(execGetPlayers); \
	DECLARE_FUNCTION(execGetPlayer); \
	DECLARE_FUNCTION(execGetPointCounter); \
	DECLARE_FUNCTION(execIsInProgress); \
	DECLARE_FUNCTION(execIsPractice); \
	DECLARE_FUNCTION(execGetTimeElapsed); \
	DECLARE_FUNCTION(execSetTimeRemaining); \
	DECLARE_FUNCTION(execGetTimeRemaining); \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execGetMinigameNumPlayers); \
	DECLARE_FUNCTION(execCheckReady); \
	DECLARE_FUNCTION(execReadyPlayer);


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_32_CALLBACK_WRAPPERS
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameBase_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinigameBase(); \
	friend struct Z_Construct_UClass_AMinigameBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AMinigameBase, ABashGamemode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinigameCore"), Z_Construct_UClass_AMinigameBase_NoRegister) \
	DECLARE_SERIALIZER(AMinigameBase)


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMinigameBase(AMinigameBase&&) = delete; \
	AMinigameBase(const AMinigameBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinigameBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinigameBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinigameBase) \
	NO_API virtual ~AMinigameBase();


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_29_PROLOG
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_32_CALLBACK_WRAPPERS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_32_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMinigameBase;

// ********** End Class AMinigameBase **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_MinigameBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
