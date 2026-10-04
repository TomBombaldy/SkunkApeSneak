// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Player/UIInputComponent.h"

#ifdef BASHCORE_UIInputComponent_generated_h
#error "UIInputComponent.generated.h already included, missing '#pragma once' in UIInputComponent.h"
#endif
#define BASHCORE_UIInputComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUIInputComponent ********************************************************
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBackButtonPressed); \
	DECLARE_FUNCTION(execStartButtonPressed); \
	DECLARE_FUNCTION(execOnRightCompleted); \
	DECLARE_FUNCTION(execOnLeftCompleted); \
	DECLARE_FUNCTION(execOnDownCompleted); \
	DECLARE_FUNCTION(execOnUpCompleted); \
	DECLARE_FUNCTION(execOnRightHeld); \
	DECLARE_FUNCTION(execOnLeftHeld); \
	DECLARE_FUNCTION(execOnDownHeld); \
	DECLARE_FUNCTION(execOnUpHeld); \
	DECLARE_FUNCTION(execNavigateRight); \
	DECLARE_FUNCTION(execNavigateLeft); \
	DECLARE_FUNCTION(execNavigateDown); \
	DECLARE_FUNCTION(execNavigateUp);


BASHCORE_API UClass* Z_Construct_UClass_UUIInputComponent_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIInputComponent(); \
	friend struct Z_Construct_UClass_UUIInputComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASHCORE_API UClass* Z_Construct_UClass_UUIInputComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIInputComponent, UUIInputComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BashCore"), Z_Construct_UClass_UUIInputComponent_NoRegister) \
	DECLARE_SERIALIZER(UUIInputComponent)


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIInputComponent(UUIInputComponent&&) = delete; \
	UUIInputComponent(const UUIInputComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIInputComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIInputComponent) \
	NO_API virtual ~UUIInputComponent();


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_18_PROLOG
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIInputComponent;

// ********** End Class UUIInputComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
