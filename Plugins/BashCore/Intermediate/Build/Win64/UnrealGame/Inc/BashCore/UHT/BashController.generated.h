// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/BashController.h"

#ifdef BASHCORE_BashController_generated_h
#error "BashController.generated.h already included, missing '#pragma once' in BashController.h"
#endif
#define BASHCORE_BashController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APawn;
class UPlayerData;
class UUIInputComponentBase;

// ********** Begin Interface UBashController ******************************************************
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPlayerPawn); \
	DECLARE_FUNCTION(execGetPlayerData); \
	DECLARE_FUNCTION(execGetUiInputComponent);


BASHCORE_API UClass* Z_Construct_UClass_UBashController_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBashController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBashController(UBashController&&) = delete; \
	UBashController(const UBashController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBashController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBashController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBashController) \
	virtual ~UBashController() = default;


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashController_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBashController(); \
	friend struct Z_Construct_UClass_UBashController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASHCORE_API UClass* Z_Construct_UClass_UBashController_NoRegister(); \
public: \
	DECLARE_CLASS2(UBashController, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BashCore"), Z_Construct_UClass_UBashController_NoRegister) \
	DECLARE_SERIALIZER(UBashController)


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashController_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashController_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashController_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBashController() {} \
public: \
	typedef UBashController UClassType; \
	typedef IBashController ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashController_h_12_PROLOG
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashController_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBashController;

// ********** End Interface UBashController ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
