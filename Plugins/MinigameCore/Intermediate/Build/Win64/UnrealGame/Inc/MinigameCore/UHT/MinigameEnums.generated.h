// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/MinigameEnums.h"

#ifdef MINIGAMECORE_MinigameEnums_generated_h
#error "MinigameEnums.generated.h already included, missing '#pragma once' in MinigameEnums.h"
#endif
#define MINIGAMECORE_MinigameEnums_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Data_MinigameEnums_h

// ********** Begin Enum EMinigameType *************************************************************
#define FOREACH_ENUM_EMINIGAMETYPE(op) \
	op(EMinigameType::MT_FFA) \
	op(EMinigameType::MT_3v1) \
	op(EMinigameType::MT_2v2) 

enum class EMinigameType : uint8;
template<> struct TIsUEnumClass<EMinigameType> { enum { Value = true }; };
template<> MINIGAMECORE_API UEnum* StaticEnum<EMinigameType>();
// ********** End Enum EMinigameType ***************************************************************

// ********** Begin Enum ESplitBy ******************************************************************
#define FOREACH_ENUM_ESPLITBY(op) \
	op(ESplitBy::PLAYERS) \
	op(ESplitBy::TEAMS) 

enum class ESplitBy : uint8;
template<> struct TIsUEnumClass<ESplitBy> { enum { Value = true }; };
template<> MINIGAMECORE_API UEnum* StaticEnum<ESplitBy>();
// ********** End Enum ESplitBy ********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
