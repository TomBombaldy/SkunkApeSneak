// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Player/AIUIInputComponent.h"

#ifdef BASHCORE_AIUIInputComponent_generated_h
#error "AIUIInputComponent.generated.h already included, missing '#pragma once' in AIUIInputComponent.h"
#endif
#define BASHCORE_AIUIInputComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAIUIInputComponent ******************************************************
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_AIUIInputComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNavigateRight); \
	DECLARE_FUNCTION(execNavigateLeft); \
	DECLARE_FUNCTION(execNavigateDown); \
	DECLARE_FUNCTION(execNavigateUp);


BASHCORE_API UClass* Z_Construct_UClass_UAIUIInputComponent_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_AIUIInputComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIUIInputComponent(); \
	friend struct Z_Construct_UClass_UAIUIInputComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASHCORE_API UClass* Z_Construct_UClass_UAIUIInputComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAIUIInputComponent, UUIInputComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BashCore"), Z_Construct_UClass_UAIUIInputComponent_NoRegister) \
	DECLARE_SERIALIZER(UAIUIInputComponent)


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_AIUIInputComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAIUIInputComponent(UAIUIInputComponent&&) = delete; \
	UAIUIInputComponent(const UAIUIInputComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIUIInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIUIInputComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAIUIInputComponent) \
	NO_API virtual ~UAIUIInputComponent();


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_AIUIInputComponent_h_10_PROLOG
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_AIUIInputComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_AIUIInputComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_AIUIInputComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_AIUIInputComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAIUIInputComponent;

// ********** End Class UAIUIInputComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_AIUIInputComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
