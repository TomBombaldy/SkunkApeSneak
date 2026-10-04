// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Player/UIInputComponentBase.h"

#ifdef BASHCORE_UIInputComponentBase_generated_h
#error "UIInputComponentBase.generated.h already included, missing '#pragma once' in UIInputComponentBase.h"
#endif
#define BASHCORE_UIInputComponentBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IBashController;
class UMenu;
class UUserWidget;
class UWidget;

// ********** Begin Delegate FUIInputSignature *****************************************************
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h_15_DELEGATE \
BASHCORE_API void FUIInputSignature_DelegateWrapper(const FMulticastScriptDelegate& UIInputSignature, const TScriptInterface<IBashController>& FromPlayer);


// ********** End Delegate FUIInputSignature *******************************************************

// ********** Begin Class UMenuStackContext ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_UMenuStackContext_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenuStackContext(); \
	friend struct Z_Construct_UClass_UMenuStackContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASHCORE_API UClass* Z_Construct_UClass_UMenuStackContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UMenuStackContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BashCore"), Z_Construct_UClass_UMenuStackContext_NoRegister) \
	DECLARE_SERIALIZER(UMenuStackContext)


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuStackContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMenuStackContext(UMenuStackContext&&) = delete; \
	UMenuStackContext(const UMenuStackContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuStackContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuStackContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuStackContext) \
	NO_API virtual ~UMenuStackContext();


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h_20_PROLOG
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMenuStackContext;

// ********** End Class UMenuStackContext **********************************************************

// ********** Begin Class UUIInputComponentBase ****************************************************
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSelectOption); \
	DECLARE_FUNCTION(execGetFocusWidget); \
	DECLARE_FUNCTION(execFocusWidget); \
	DECLARE_FUNCTION(execCloseAllMenus); \
	DECLARE_FUNCTION(execCloseMenu); \
	DECLARE_FUNCTION(execOpenMenu);


BASHCORE_API UClass* Z_Construct_UClass_UUIInputComponentBase_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIInputComponentBase(); \
	friend struct Z_Construct_UClass_UUIInputComponentBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASHCORE_API UClass* Z_Construct_UClass_UUIInputComponentBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIInputComponentBase, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/BashCore"), Z_Construct_UClass_UUIInputComponentBase_NoRegister) \
	DECLARE_SERIALIZER(UUIInputComponentBase)


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIInputComponentBase(UUIInputComponentBase&&) = delete; \
	UUIInputComponentBase(const UUIInputComponentBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIInputComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIInputComponentBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UUIInputComponentBase) \
	NO_API virtual ~UUIInputComponentBase();


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h_39_PROLOG
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h_42_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIInputComponentBase;

// ********** End Class UUIInputComponentBase ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_UIInputComponentBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
