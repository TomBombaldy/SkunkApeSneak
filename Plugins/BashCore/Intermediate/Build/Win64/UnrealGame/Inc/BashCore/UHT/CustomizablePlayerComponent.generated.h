// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Player/CustomizablePlayerComponent.h"

#ifdef BASHCORE_CustomizablePlayerComponent_generated_h
#error "CustomizablePlayerComponent.generated.h already included, missing '#pragma once' in CustomizablePlayerComponent.h"
#endif
#define BASHCORE_CustomizablePlayerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UPlayerData;

// ********** Begin Class UCustomizablePlayerComponent *********************************************
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizablePlayerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadCustomizableInstance);


BASHCORE_API UClass* Z_Construct_UClass_UCustomizablePlayerComponent_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizablePlayerComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizablePlayerComponent(); \
	friend struct Z_Construct_UClass_UCustomizablePlayerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASHCORE_API UClass* Z_Construct_UClass_UCustomizablePlayerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizablePlayerComponent, UCustomizableSkeletalComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BashCore"), Z_Construct_UClass_UCustomizablePlayerComponent_NoRegister) \
	DECLARE_SERIALIZER(UCustomizablePlayerComponent)


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizablePlayerComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizablePlayerComponent(UCustomizablePlayerComponent&&) = delete; \
	UCustomizablePlayerComponent(const UCustomizablePlayerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizablePlayerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizablePlayerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizablePlayerComponent) \
	NO_API virtual ~UCustomizablePlayerComponent();


#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizablePlayerComponent_h_15_PROLOG
#define FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizablePlayerComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizablePlayerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizablePlayerComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizablePlayerComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizablePlayerComponent;

// ********** End Class UCustomizablePlayerComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Components_Player_CustomizablePlayerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
