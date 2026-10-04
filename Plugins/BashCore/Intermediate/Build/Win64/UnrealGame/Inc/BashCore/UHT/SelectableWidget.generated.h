// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/SelectableWidget.h"

#ifdef BASHCORE_SelectableWidget_generated_h
#error "SelectableWidget.generated.h already included, missing '#pragma once' in SelectableWidget.h"
#endif
#define BASHCORE_SelectableWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface USelectableWidget ****************************************************
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnSelected_Implementation() {}; \
	DECLARE_FUNCTION(execOnSelected);


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_CALLBACK_WRAPPERS
BASHCORE_API UClass* Z_Construct_UClass_USelectableWidget_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BASHCORE_API USelectableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USelectableWidget(USelectableWidget&&) = delete; \
	USelectableWidget(const USelectableWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BASHCORE_API, USelectableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectableWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectableWidget) \
	virtual ~USelectableWidget() = default;


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSelectableWidget(); \
	friend struct Z_Construct_UClass_USelectableWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASHCORE_API UClass* Z_Construct_UClass_USelectableWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(USelectableWidget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BashCore"), Z_Construct_UClass_USelectableWidget_NoRegister) \
	DECLARE_SERIALIZER(USelectableWidget)


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISelectableWidget() {} \
public: \
	typedef USelectableWidget UClassType; \
	typedef ISelectableWidget ThisClass; \
	static void Execute_OnSelected(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_10_PROLOG
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_CALLBACK_WRAPPERS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USelectableWidget;

// ********** End Interface USelectableWidget ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Widgets_SelectableWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
