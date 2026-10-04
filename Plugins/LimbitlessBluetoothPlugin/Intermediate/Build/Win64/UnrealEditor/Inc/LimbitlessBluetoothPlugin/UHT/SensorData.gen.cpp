// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SensorData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSensorData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
LIMBITLESSBLUETOOTHPLUGIN_API UEnum* Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor();
LIMBITLESSBLUETOOTHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSensorData();
UPackage* Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EFlexColor ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlexColor;
static UEnum* EFlexColor_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFlexColor.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFlexColor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor, (UObject*)Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin(), TEXT("EFlexColor"));
	}
	return Z_Registration_Info_UEnum_EFlexColor.OuterSingleton;
}
template<> LIMBITLESSBLUETOOTHPLUGIN_API UEnum* StaticEnum<EFlexColor>()
{
	return EFlexColor_StaticEnum();
}
struct Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Sensor Data" },
		{ "EFC_Blue.Name", "EFlexColor::EFC_Blue" },
		{ "EFC_Cyan.Name", "EFlexColor::EFC_Cyan" },
		{ "EFC_Green.Name", "EFlexColor::EFC_Green" },
		{ "EFC_Magenta.Name", "EFlexColor::EFC_Magenta" },
		{ "EFC_None.Comment", "// Flex controller takes in color data like binary in base 10\n// Each color is created by either presence or absence of each RGB component\n" },
		{ "EFC_None.Name", "EFlexColor::EFC_None" },
		{ "EFC_None.ToolTip", "Flex controller takes in color data like binary in base 10\nEach color is created by either presence or absence of each RGB component" },
		{ "EFC_Red.Name", "EFlexColor::EFC_Red" },
		{ "EFC_White.Name", "EFlexColor::EFC_White" },
		{ "EFC_Yellow.Name", "EFlexColor::EFC_Yellow" },
		{ "ModuleRelativePath", "Public/SensorData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFlexColor::EFC_None", (int64)EFlexColor::EFC_None },
		{ "EFlexColor::EFC_Blue", (int64)EFlexColor::EFC_Blue },
		{ "EFlexColor::EFC_Green", (int64)EFlexColor::EFC_Green },
		{ "EFlexColor::EFC_Cyan", (int64)EFlexColor::EFC_Cyan },
		{ "EFlexColor::EFC_Red", (int64)EFlexColor::EFC_Red },
		{ "EFlexColor::EFC_Magenta", (int64)EFlexColor::EFC_Magenta },
		{ "EFlexColor::EFC_Yellow", (int64)EFlexColor::EFC_Yellow },
		{ "EFlexColor::EFC_White", (int64)EFlexColor::EFC_White },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin,
	nullptr,
	"EFlexColor",
	"EFlexColor",
	Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor()
{
	if (!Z_Registration_Info_UEnum_EFlexColor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlexColor.InnerSingleton, Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFlexColor.InnerSingleton;
}
// ********** End Enum EFlexColor ******************************************************************

// ********** Begin ScriptStruct FSensorData *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSensorData;
class UScriptStruct* FSensorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSensorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSensorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSensorData, (UObject*)Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin(), TEXT("SensorData"));
	}
	return Z_Registration_Info_UScriptStruct_FSensorData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSensorData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SensorData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EMGReading_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/SensorData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/SensorData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProperAcceleration_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/SensorData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/SensorData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Battery_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/SensorData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Sensor Data" },
		{ "ModuleRelativePath", "Public/SensorData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EMGReading;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProperAcceleration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Scale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Battery;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Color_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSensorData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_EMGReading = { "EMGReading", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSensorData, EMGReading), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EMGReading_MetaData), NewProp_EMGReading_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSensorData, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_ProperAcceleration = { "ProperAcceleration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSensorData, ProperAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProperAcceleration_MetaData), NewProp_ProperAcceleration_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSensorData, Scale), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Battery = { "Battery", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSensorData, Battery), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Battery_MetaData), NewProp_Battery_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Color_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSensorData, Color), Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) }; // 2899337883
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSensorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_EMGReading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_ProperAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Battery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Color_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorData_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSensorData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LimbitlessBluetoothPlugin,
	nullptr,
	&NewStructOps,
	"SensorData",
	Z_Construct_UScriptStruct_FSensorData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorData_Statics::PropPointers),
	sizeof(FSensorData),
	alignof(FSensorData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSensorData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSensorData()
{
	if (!Z_Registration_Info_UScriptStruct_FSensorData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSensorData.InnerSingleton, Z_Construct_UScriptStruct_FSensorData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSensorData.InnerSingleton;
}
// ********** End ScriptStruct FSensorData *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_SensorData_h__Script_LimbitlessBluetoothPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFlexColor_StaticEnum, TEXT("EFlexColor"), &Z_Registration_Info_UEnum_EFlexColor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2899337883U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSensorData::StaticStruct, Z_Construct_UScriptStruct_FSensorData_Statics::NewStructOps, TEXT("SensorData"), &Z_Registration_Info_UScriptStruct_FSensorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSensorData), 3977798340U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_SensorData_h__Script_LimbitlessBluetoothPlugin_164140555(TEXT("/Script/LimbitlessBluetoothPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_SensorData_h__Script_LimbitlessBluetoothPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_SensorData_h__Script_LimbitlessBluetoothPlugin_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_SensorData_h__Script_LimbitlessBluetoothPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_LimbitlessBluetoothPlugin_Public_SensorData_h__Script_LimbitlessBluetoothPlugin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
