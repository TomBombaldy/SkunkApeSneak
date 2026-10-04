// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Menu.h"

#ifdef BASHCORE_Menu_generated_h
#error "Menu.generated.h already included, missing '#pragma once' in Menu.h"
#endif
#define BASHCORE_Menu_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UUserWidget;

// ********** Begin Class UMenu ********************************************************************
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_Menu_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAllowsHoldNavigation); \
	DECLARE_FUNCTION(execGetDefaultSelectedWidget);


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_Menu_h_16_CALLBACK_WRAPPERS
BASHCORE_API UClass* Z_Construct_UClass_UMenu_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_Menu_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenu(); \
	friend struct Z_Construct_UClass_UMenu_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASHCORE_API UClass* Z_Construct_UClass_UMenu_NoRegister(); \
public: \
	DECLARE_CLASS2(UMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BashCore"), Z_Construct_UClass_UMenu_NoRegister) \
	DECLARE_SERIALIZER(UMenu)


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_Menu_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMenu(UMenu&&) = delete; \
	UMenu(const UMenu&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenu) \
	NO_API virtual ~UMenu();


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_Menu_h_13_PROLOG
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_Menu_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_Menu_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_Menu_h_16_CALLBACK_WRAPPERS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_Menu_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_Menu_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMenu;

// ********** End Class UMenu **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_Menu_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
