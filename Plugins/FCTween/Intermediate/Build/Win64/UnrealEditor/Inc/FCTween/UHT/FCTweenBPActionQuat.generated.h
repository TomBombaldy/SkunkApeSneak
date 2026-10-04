// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/FCTweenBPActionQuat.h"

#ifdef FCTWEEN_FCTweenBPActionQuat_generated_h
#error "FCTweenBPActionQuat.generated.h already included, missing '#pragma once' in FCTweenBPActionQuat.h"
#endif
#define FCTWEEN_FCTweenBPActionQuat_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCurveFloat;
class UFCTweenBPActionQuat;
enum class EFCEase : uint8;

// ********** Begin Delegate FTweenUpdateQuatOutputPin *********************************************
#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_9_DELEGATE \
FCTWEEN_API void FTweenUpdateQuatOutputPin_DelegateWrapper(const FMulticastScriptDelegate& TweenUpdateQuatOutputPin, FQuat Value);


// ********** End Delegate FTweenUpdateQuatOutputPin ***********************************************

// ********** Begin Class UFCTweenBPActionQuat *****************************************************
#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTweenQuatFromRotatorCustomCurve); \
	DECLARE_FUNCTION(execTweenQuatCustomCurve); \
	DECLARE_FUNCTION(execTweenQuatFromRotator); \
	DECLARE_FUNCTION(execTweenQuat);


FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBPActionQuat_NoRegister();

#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFCTweenBPActionQuat(); \
	friend struct Z_Construct_UClass_UFCTweenBPActionQuat_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBPActionQuat_NoRegister(); \
public: \
	DECLARE_CLASS2(UFCTweenBPActionQuat, UFCTweenBPAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FCTween"), Z_Construct_UClass_UFCTweenBPActionQuat_NoRegister) \
	DECLARE_SERIALIZER(UFCTweenBPActionQuat)


#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFCTweenBPActionQuat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFCTweenBPActionQuat(UFCTweenBPActionQuat&&) = delete; \
	UFCTweenBPActionQuat(const UFCTweenBPActionQuat&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCTweenBPActionQuat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCTweenBPActionQuat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFCTweenBPActionQuat) \
	NO_API virtual ~UFCTweenBPActionQuat();


#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_11_PROLOG
#define FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFCTweenBPActionQuat;

// ********** End Class UFCTweenBPActionQuat *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionQuat_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
