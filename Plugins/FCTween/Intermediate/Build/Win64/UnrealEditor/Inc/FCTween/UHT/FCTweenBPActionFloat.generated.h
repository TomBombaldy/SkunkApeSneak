// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/FCTweenBPActionFloat.h"

#ifdef FCTWEEN_FCTweenBPActionFloat_generated_h
#error "FCTweenBPActionFloat.generated.h already included, missing '#pragma once' in FCTweenBPActionFloat.h"
#endif
#define FCTWEEN_FCTweenBPActionFloat_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCurveFloat;
class UFCTweenBPActionFloat;
enum class EFCEase : uint8;

// ********** Begin Delegate FTweenUpdateFloatOutputPin ********************************************
#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionFloat_h_9_DELEGATE \
FCTWEEN_API void FTweenUpdateFloatOutputPin_DelegateWrapper(const FMulticastScriptDelegate& TweenUpdateFloatOutputPin, float Value);


// ********** End Delegate FTweenUpdateFloatOutputPin **********************************************

// ********** Begin Class UFCTweenBPActionFloat ****************************************************
#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionFloat_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTweenFloatCustomCurve); \
	DECLARE_FUNCTION(execTweenFloat);


FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBPActionFloat_NoRegister();

#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionFloat_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFCTweenBPActionFloat(); \
	friend struct Z_Construct_UClass_UFCTweenBPActionFloat_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBPActionFloat_NoRegister(); \
public: \
	DECLARE_CLASS2(UFCTweenBPActionFloat, UFCTweenBPAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FCTween"), Z_Construct_UClass_UFCTweenBPActionFloat_NoRegister) \
	DECLARE_SERIALIZER(UFCTweenBPActionFloat)


#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionFloat_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFCTweenBPActionFloat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFCTweenBPActionFloat(UFCTweenBPActionFloat&&) = delete; \
	UFCTweenBPActionFloat(const UFCTweenBPActionFloat&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCTweenBPActionFloat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCTweenBPActionFloat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFCTweenBPActionFloat) \
	NO_API virtual ~UFCTweenBPActionFloat();


#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionFloat_h_11_PROLOG
#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionFloat_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionFloat_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionFloat_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionFloat_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFCTweenBPActionFloat;

// ********** End Class UFCTweenBPActionFloat ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionFloat_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
