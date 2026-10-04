// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/FlexCalibrationMenu.h"

#ifdef BASHCORE_FlexCalibrationMenu_generated_h
#error "FlexCalibrationMenu.generated.h already included, missing '#pragma once' in FlexCalibrationMenu.h"
#endif
#define BASHCORE_FlexCalibrationMenu_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UFlexController;

// ********** Begin Class UFlexCalibrationMenu *****************************************************
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_FlexCalibrationMenu_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTrackedRestThreshold); \
	DECLARE_FUNCTION(execGetRecentFlexData); \
	DECLARE_FUNCTION(execGetTrackedController); \
	DECLARE_FUNCTION(execSetTrackedController);


BASHCORE_API UClass* Z_Construct_UClass_UFlexCalibrationMenu_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_FlexCalibrationMenu_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlexCalibrationMenu(); \
	friend struct Z_Construct_UClass_UFlexCalibrationMenu_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASHCORE_API UClass* Z_Construct_UClass_UFlexCalibrationMenu_NoRegister(); \
public: \
	DECLARE_CLASS2(UFlexCalibrationMenu, UMenu, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BashCore"), Z_Construct_UClass_UFlexCalibrationMenu_NoRegister) \
	DECLARE_SERIALIZER(UFlexCalibrationMenu)


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_FlexCalibrationMenu_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlexCalibrationMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFlexCalibrationMenu(UFlexCalibrationMenu&&) = delete; \
	UFlexCalibrationMenu(const UFlexCalibrationMenu&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlexCalibrationMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlexCalibrationMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlexCalibrationMenu) \
	NO_API virtual ~UFlexCalibrationMenu();


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_FlexCalibrationMenu_h_15_PROLOG
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_FlexCalibrationMenu_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_FlexCalibrationMenu_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_FlexCalibrationMenu_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_FlexCalibrationMenu_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFlexCalibrationMenu;

// ********** End Class UFlexCalibrationMenu *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_FlexCalibrationMenu_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
