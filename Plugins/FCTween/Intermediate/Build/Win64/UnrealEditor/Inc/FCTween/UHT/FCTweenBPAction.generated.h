// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/FCTweenBPAction.h"

#ifdef FCTWEEN_FCTweenBPAction_generated_h
#error "FCTweenBPAction.generated.h already included, missing '#pragma once' in FCTweenBPAction.h"
#endif
#define FCTWEEN_FCTweenBPAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FTweenEventOutputPin **************************************************
#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h_10_DELEGATE \
FCTWEEN_API void FTweenEventOutputPin_DelegateWrapper(const FMulticastScriptDelegate& TweenEventOutputPin);


// ********** End Delegate FTweenEventOutputPin ****************************************************

// ********** Begin Class UFCTweenBPAction *********************************************************
#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTimeMultiplier); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execRestart); \
	DECLARE_FUNCTION(execUnpause); \
	DECLARE_FUNCTION(execPause);


FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBPAction_NoRegister();

#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFCTweenBPAction(); \
	friend struct Z_Construct_UClass_UFCTweenBPAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBPAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UFCTweenBPAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FCTween"), Z_Construct_UClass_UFCTweenBPAction_NoRegister) \
	DECLARE_SERIALIZER(UFCTweenBPAction)


#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFCTweenBPAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFCTweenBPAction(UFCTweenBPAction&&) = delete; \
	UFCTweenBPAction(const UFCTweenBPAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCTweenBPAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCTweenBPAction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFCTweenBPAction) \
	NO_API virtual ~UFCTweenBPAction();


#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h_12_PROLOG
#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFCTweenBPAction;

// ********** End Class UFCTweenBPAction ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
