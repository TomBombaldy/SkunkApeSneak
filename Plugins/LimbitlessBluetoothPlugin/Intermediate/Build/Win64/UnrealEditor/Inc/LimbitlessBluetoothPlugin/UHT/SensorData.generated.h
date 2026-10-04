// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SensorData.h"

#ifdef LIMBITLESSBLUETOOTHPLUGIN_SensorData_generated_h
#error "SensorData.generated.h already included, missing '#pragma once' in SensorData.h"
#endif
#define LIMBITLESSBLUETOOTHPLUGIN_SensorData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSensorData *******************************************************
#define FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_SensorData_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSensorData_Statics; \
	LIMBITLESSBLUETOOTHPLUGIN_API static class UScriptStruct* StaticStruct();


struct FSensorData;
// ********** End ScriptStruct FSensorData *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_SensorData_h

// ********** Begin Enum EFlexColor ****************************************************************
#define FOREACH_ENUM_EFLEXCOLOR(op) \
	op(EFlexColor::EFC_None) \
	op(EFlexColor::EFC_Blue) \
	op(EFlexColor::EFC_Green) \
	op(EFlexColor::EFC_Cyan) \
	op(EFlexColor::EFC_Red) \
	op(EFlexColor::EFC_Magenta) \
	op(EFlexColor::EFC_Yellow) \
	op(EFlexColor::EFC_White) 

enum class EFlexColor : uint8;
template<> struct TIsUEnumClass<EFlexColor> { enum { Value = true }; };
template<> LIMBITLESSBLUETOOTHPLUGIN_API UEnum* StaticEnum<EFlexColor>();
// ********** End Enum EFlexColor ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
