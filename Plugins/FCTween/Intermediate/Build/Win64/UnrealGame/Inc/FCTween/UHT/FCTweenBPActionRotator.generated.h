// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/FCTweenBPActionRotator.h"

#ifdef FCTWEEN_FCTweenBPActionRotator_generated_h
#error "FCTweenBPActionRotator.generated.h already included, missing '#pragma once' in FCTweenBPActionRotator.h"
#endif
#define FCTWEEN_FCTweenBPActionRotator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCurveFloat;
class UFCTweenBPActionRotator;
enum class EFCEase : uint8;

// ********** Begin Delegate FTweenUpdateRotatorOutputPin ******************************************
#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_9_DELEGATE \
FCTWEEN_API void FTweenUpdateRotatorOutputPin_DelegateWrapper(const FMulticastScriptDelegate& TweenUpdateRotatorOutputPin, FRotator Value);


// ********** End Delegate FTweenUpdateRotatorOutputPin ********************************************

// ********** Begin Class UFCTweenBPActionRotator **************************************************
#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTweenRotatorCustomCurve); \
	DECLARE_FUNCTION(execTweenRotator);


FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBPActionRotator_NoRegister();

#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFCTweenBPActionRotator(); \
	friend struct Z_Construct_UClass_UFCTweenBPActionRotator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBPActionRotator_NoRegister(); \
public: \
	DECLARE_CLASS2(UFCTweenBPActionRotator, UFCTweenBPAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FCTween"), Z_Construct_UClass_UFCTweenBPActionRotator_NoRegister) \
	DECLARE_SERIALIZER(UFCTweenBPActionRotator)


#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFCTweenBPActionRotator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFCTweenBPActionRotator(UFCTweenBPActionRotator&&) = delete; \
	UFCTweenBPActionRotator(const UFCTweenBPActionRotator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCTweenBPActionRotator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCTweenBPActionRotator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFCTweenBPActionRotator) \
	NO_API virtual ~UFCTweenBPActionRotator();


#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_11_PROLOG
#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFCTweenBPActionRotator;

// ********** End Class UFCTweenBPActionRotator ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionRotator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
