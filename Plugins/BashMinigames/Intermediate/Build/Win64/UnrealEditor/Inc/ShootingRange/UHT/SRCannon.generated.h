// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SRCannon.h"

#ifdef SHOOTINGRANGE_SRCannon_generated_h
#error "SRCannon.generated.h already included, missing '#pragma once' in SRCannon.h"
#endif
#define SHOOTINGRANGE_SRCannon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class ASRCannon ****************************************************************
#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashMinigames_Source_ShootingRange_Public_SRCannon_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execGetCannonTargetRotation);


#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashMinigames_Source_ShootingRange_Public_SRCannon_h_18_CALLBACK_WRAPPERS
SHOOTINGRANGE_API UClass* Z_Construct_UClass_ASRCannon_NoRegister();

#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashMinigames_Source_ShootingRange_Public_SRCannon_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASRCannon(); \
	friend struct Z_Construct_UClass_ASRCannon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHOOTINGRANGE_API UClass* Z_Construct_UClass_ASRCannon_NoRegister(); \
public: \
	DECLARE_CLASS2(ASRCannon, AMinigamePlayer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingRange"), Z_Construct_UClass_ASRCannon_NoRegister) \
	DECLARE_SERIALIZER(ASRCannon)


#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashMinigames_Source_ShootingRange_Public_SRCannon_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASRCannon(ASRCannon&&) = delete; \
	ASRCannon(const ASRCannon&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASRCannon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASRCannon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASRCannon) \
	NO_API virtual ~ASRCannon();


#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashMinigames_Source_ShootingRange_Public_SRCannon_h_15_PROLOG
#define FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashMinigames_Source_ShootingRange_Public_SRCannon_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashMinigames_Source_ShootingRange_Public_SRCannon_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashMinigames_Source_ShootingRange_Public_SRCannon_h_18_CALLBACK_WRAPPERS \
	FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashMinigames_Source_ShootingRange_Public_SRCannon_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashMinigames_Source_ShootingRange_Public_SRCannon_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASRCannon;

// ********** End Class ASRCannon ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashMinigames_Source_ShootingRange_Public_SRCannon_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
