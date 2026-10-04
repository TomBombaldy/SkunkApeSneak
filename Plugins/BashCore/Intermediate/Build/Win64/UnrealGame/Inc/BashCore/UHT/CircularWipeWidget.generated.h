// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/CircularWipeWidget.h"

#ifdef BASHCORE_CircularWipeWidget_generated_h
#error "CircularWipeWidget.generated.h already included, missing '#pragma once' in CircularWipeWidget.h"
#endif
#define BASHCORE_CircularWipeWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FCircleWipeParams;

// ********** Begin Delegate FOnWipeFilledSignature ************************************************
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_13_DELEGATE \
BASHCORE_API void FOnWipeFilledSignature_DelegateWrapper(const FScriptDelegate& OnWipeFilledSignature);


// ********** End Delegate FOnWipeFilledSignature **************************************************

// ********** Begin ScriptStruct FCircleWipeParams *************************************************
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCircleWipeParams_Statics; \
	BASHCORE_API static class UScriptStruct* StaticStruct();


struct FCircleWipeParams;
// ********** End ScriptStruct FCircleWipeParams ***************************************************

// ********** Begin Class UCircularWipeWidget ******************************************************
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCallDelegate); \
	DECLARE_FUNCTION(execPlayFullWipe); \
	DECLARE_FUNCTION(execFadeFromBlack); \
	DECLARE_FUNCTION(execStartWipe);


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_CALLBACK_WRAPPERS
BASHCORE_API UClass* Z_Construct_UClass_UCircularWipeWidget_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCircularWipeWidget(); \
	friend struct Z_Construct_UClass_UCircularWipeWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASHCORE_API UClass* Z_Construct_UClass_UCircularWipeWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UCircularWipeWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BashCore"), Z_Construct_UClass_UCircularWipeWidget_NoRegister) \
	DECLARE_SERIALIZER(UCircularWipeWidget)


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCircularWipeWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCircularWipeWidget(UCircularWipeWidget&&) = delete; \
	UCircularWipeWidget(const UCircularWipeWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCircularWipeWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCircularWipeWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCircularWipeWidget) \
	NO_API virtual ~UCircularWipeWidget();


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_28_PROLOG
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_CALLBACK_WRAPPERS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCircularWipeWidget;

// ********** End Class UCircularWipeWidget ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_CircularWipeWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
