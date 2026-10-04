// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/BasePointCounter.h"

#ifdef MINIGAMECORE_BasePointCounter_generated_h
#error "BasePointCounter.generated.h already included, missing '#pragma once' in BasePointCounter.h"
#endif
#define MINIGAMECORE_BasePointCounter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FMinigameStanding;

// ********** Begin Delegate FPointsChanged ********************************************************
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Components_BasePointCounter_h_11_DELEGATE \
MINIGAMECORE_API void FPointsChanged_DelegateWrapper(const FMulticastScriptDelegate& PointsChanged, int32 Team, int32 Amount);


// ********** End Delegate FPointsChanged **********************************************************

// ********** Begin Class UBasePointCounter ********************************************************
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Components_BasePointCounter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetupTeamAssignment_Implementation(int32 NumTeams, TArray<int32> const& TeamAssignments); \
	virtual void InitializePointCounter_Implementation(int32 NumTeams, TArray<int32> const& TeamAssignment); \
	virtual TArray<FMinigameStanding> GetStandings_Implementation() const; \
	virtual int32 GetPointsByPlayer_Implementation(int32 Player) const; \
	virtual int32 GetPoints_Implementation(int32 Team) const; \
	virtual void SetPoints_Implementation(int32 Team, int32 Amount); \
	virtual void AddPoints_Implementation(int32 Team, int32 Amount); \
	DECLARE_FUNCTION(execGetIsInitialized); \
	DECLARE_FUNCTION(execSetupTeamAssignment); \
	DECLARE_FUNCTION(execInitializePointCounter); \
	DECLARE_FUNCTION(execGetStandings); \
	DECLARE_FUNCTION(execGetPointsByPlayer); \
	DECLARE_FUNCTION(execGetPoints); \
	DECLARE_FUNCTION(execSetPoints); \
	DECLARE_FUNCTION(execAddPoints);


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Components_BasePointCounter_h_16_CALLBACK_WRAPPERS
MINIGAMECORE_API UClass* Z_Construct_UClass_UBasePointCounter_NoRegister();

#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Components_BasePointCounter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasePointCounter(); \
	friend struct Z_Construct_UClass_UBasePointCounter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MINIGAMECORE_API UClass* Z_Construct_UClass_UBasePointCounter_NoRegister(); \
public: \
	DECLARE_CLASS2(UBasePointCounter, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinigameCore"), Z_Construct_UClass_UBasePointCounter_NoRegister) \
	DECLARE_SERIALIZER(UBasePointCounter)


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Components_BasePointCounter_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBasePointCounter(UBasePointCounter&&) = delete; \
	UBasePointCounter(const UBasePointCounter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasePointCounter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasePointCounter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBasePointCounter) \
	NO_API virtual ~UBasePointCounter();


#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Components_BasePointCounter_h_13_PROLOG
#define FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Components_BasePointCounter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Components_BasePointCounter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Components_BasePointCounter_h_16_CALLBACK_WRAPPERS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Components_BasePointCounter_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Components_BasePointCounter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBasePointCounter;

// ********** End Class UBasePointCounter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Components_BasePointCounter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
