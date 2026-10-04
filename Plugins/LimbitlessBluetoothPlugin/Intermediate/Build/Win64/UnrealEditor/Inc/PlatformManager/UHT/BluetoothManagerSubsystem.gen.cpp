// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BluetoothManagerSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBluetoothManagerSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_ALimbitlessPlayerController_NoRegister();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_UFlexController_NoRegister();
LIMBITLESSBLUETOOTHPLUGIN_API UEnum* Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor();
PLATFORMMANAGER_API UClass* Z_Construct_UClass_UBluetoothManagerSubsystem();
PLATFORMMANAGER_API UClass* Z_Construct_UClass_UBluetoothManagerSubsystem_NoRegister();
PLATFORMMANAGER_API UClass* Z_Construct_UClass_ULimbitlessBluetoothManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_PlatformManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBluetoothManagerSubsystem Function AssignControllerToPlayer *************
struct Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics
{
	struct BluetoothManagerSubsystem_eventAssignControllerToPlayer_Parms
	{
		ALimbitlessPlayerController* player;
		UFlexController* device;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Assignment" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_device;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BluetoothManagerSubsystem_eventAssignControllerToPlayer_Parms, player), Z_Construct_UClass_ALimbitlessPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BluetoothManagerSubsystem_eventAssignControllerToPlayer_Parms, device), Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::NewProp_player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::NewProp_device,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBluetoothManagerSubsystem, nullptr, "AssignControllerToPlayer", Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::BluetoothManagerSubsystem_eventAssignControllerToPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::BluetoothManagerSubsystem_eventAssignControllerToPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBluetoothManagerSubsystem::execAssignControllerToPlayer)
{
	P_GET_OBJECT(ALimbitlessPlayerController,Z_Param_player);
	P_GET_OBJECT(UFlexController,Z_Param_device);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssignControllerToPlayer(Z_Param_player,Z_Param_device);
	P_NATIVE_END;
}
// ********** End Class UBluetoothManagerSubsystem Function AssignControllerToPlayer ***************

// ********** Begin Class UBluetoothManagerSubsystem Function GetColors ****************************
struct Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics
{
	struct BluetoothManagerSubsystem_eventGetColors_Parms
	{
		TArray<EFlexColor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "// Gets all the colors that can be assigned to devices\n" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
		{ "ToolTip", "Gets all the colors that can be assigned to devices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor, METADATA_PARAMS(0, nullptr) }; // 2899337883
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BluetoothManagerSubsystem_eventGetColors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2899337883
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBluetoothManagerSubsystem, nullptr, "GetColors", Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::BluetoothManagerSubsystem_eventGetColors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::BluetoothManagerSubsystem_eventGetColors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBluetoothManagerSubsystem::execGetColors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<EFlexColor>*)Z_Param__Result=P_THIS->GetColors();
	P_NATIVE_END;
}
// ********** End Class UBluetoothManagerSubsystem Function GetColors ******************************

// ********** Begin Class UBluetoothManagerSubsystem Function StartScan ****************************
struct Z_Construct_UFunction_UBluetoothManagerSubsystem_StartScan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scanning" },
		{ "Comment", "// Starts a bluetooth scan\n" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
		{ "ToolTip", "Starts a bluetooth scan" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBluetoothManagerSubsystem_StartScan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBluetoothManagerSubsystem, nullptr, "StartScan", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBluetoothManagerSubsystem_StartScan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBluetoothManagerSubsystem_StartScan_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBluetoothManagerSubsystem_StartScan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBluetoothManagerSubsystem_StartScan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBluetoothManagerSubsystem::execStartScan)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartScan();
	P_NATIVE_END;
}
// ********** End Class UBluetoothManagerSubsystem Function StartScan ******************************

// ********** Begin Class UBluetoothManagerSubsystem Function StopScan *****************************
struct Z_Construct_UFunction_UBluetoothManagerSubsystem_StopScan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scanning" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBluetoothManagerSubsystem_StopScan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBluetoothManagerSubsystem, nullptr, "StopScan", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBluetoothManagerSubsystem_StopScan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBluetoothManagerSubsystem_StopScan_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBluetoothManagerSubsystem_StopScan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBluetoothManagerSubsystem_StopScan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBluetoothManagerSubsystem::execStopScan)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopScan();
	P_NATIVE_END;
}
// ********** End Class UBluetoothManagerSubsystem Function StopScan *******************************

// ********** Begin Class UBluetoothManagerSubsystem ***********************************************
void UBluetoothManagerSubsystem::StaticRegisterNativesUBluetoothManagerSubsystem()
{
	UClass* Class = UBluetoothManagerSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssignControllerToPlayer", &UBluetoothManagerSubsystem::execAssignControllerToPlayer },
		{ "GetColors", &UBluetoothManagerSubsystem::execGetColors },
		{ "StartScan", &UBluetoothManagerSubsystem::execStartScan },
		{ "StopScan", &UBluetoothManagerSubsystem::execStopScan },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBluetoothManagerSubsystem;
UClass* UBluetoothManagerSubsystem::GetPrivateStaticClass()
{
	using TClass = UBluetoothManagerSubsystem;
	if (!Z_Registration_Info_UClass_UBluetoothManagerSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BluetoothManagerSubsystem"),
			Z_Registration_Info_UClass_UBluetoothManagerSubsystem.InnerSingleton,
			StaticRegisterNativesUBluetoothManagerSubsystem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UBluetoothManagerSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UBluetoothManagerSubsystem_NoRegister()
{
	return UBluetoothManagerSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBluetoothManagerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BluetoothManagerSubsystem.h" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnpairedFlexDevices_MetaData[] = {
		{ "Category", "Connected Controllers" },
		{ "Comment", "// Information about connected devices\n" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
		{ "ToolTip", "Information about connected devices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PairedFlexDevices_MetaData[] = {
		{ "Category", "Connected Controllers" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedControllers_MetaData[] = {
		{ "Category", "Connected Controllers" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceColors_MetaData[] = {
		{ "BlueprintGetter", "GetColors" },
		{ "Category", "Assignment" },
		{ "Comment", "// Colors automatically assigned to flex devices in order of connection. \n// First color is reserved for unassigned players and isn't assigned to flex devices\n" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
		{ "ToolTip", "Colors automatically assigned to flex devices in order of connection.\nFirst color is reserved for unassigned players and isn't assigned to flex devices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BLEManager_MetaData[] = {
		{ "Comment", "// --------------------\n" },
		{ "ModuleRelativePath", "Public/BluetoothManagerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnpairedFlexDevices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnpairedFlexDevices;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PairedFlexDevices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PairedFlexDevices;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectedControllers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectedControllers;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceColors_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeviceColors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BLEManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBluetoothManagerSubsystem_AssignControllerToPlayer, "AssignControllerToPlayer" }, // 1127558346
		{ &Z_Construct_UFunction_UBluetoothManagerSubsystem_GetColors, "GetColors" }, // 2863922660
		{ &Z_Construct_UFunction_UBluetoothManagerSubsystem_StartScan, "StartScan" }, // 40946758
		{ &Z_Construct_UFunction_UBluetoothManagerSubsystem_StopScan, "StopScan" }, // 1155092844
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBluetoothManagerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_UnpairedFlexDevices_Inner = { "UnpairedFlexDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_UnpairedFlexDevices = { "UnpairedFlexDevices", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBluetoothManagerSubsystem, UnpairedFlexDevices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnpairedFlexDevices_MetaData), NewProp_UnpairedFlexDevices_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_PairedFlexDevices_Inner = { "PairedFlexDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_PairedFlexDevices = { "PairedFlexDevices", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBluetoothManagerSubsystem, PairedFlexDevices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PairedFlexDevices_MetaData), NewProp_PairedFlexDevices_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_ConnectedControllers_Inner = { "ConnectedControllers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFlexController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_ConnectedControllers = { "ConnectedControllers", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBluetoothManagerSubsystem, ConnectedControllers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectedControllers_MetaData), NewProp_ConnectedControllers_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_DeviceColors_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_DeviceColors_Inner = { "DeviceColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_LimbitlessBluetoothPlugin_EFlexColor, METADATA_PARAMS(0, nullptr) }; // 2899337883
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_DeviceColors = { "DeviceColors", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBluetoothManagerSubsystem, DeviceColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceColors_MetaData), NewProp_DeviceColors_MetaData) }; // 2899337883
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_BLEManager = { "BLEManager", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBluetoothManagerSubsystem, BLEManager), Z_Construct_UClass_ULimbitlessBluetoothManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BLEManager_MetaData), NewProp_BLEManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_UnpairedFlexDevices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_UnpairedFlexDevices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_PairedFlexDevices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_PairedFlexDevices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_ConnectedControllers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_ConnectedControllers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_DeviceColors_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_DeviceColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_DeviceColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::NewProp_BLEManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_PlatformManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::ClassParams = {
	&UBluetoothManagerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBluetoothManagerSubsystem()
{
	if (!Z_Registration_Info_UClass_UBluetoothManagerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBluetoothManagerSubsystem.OuterSingleton, Z_Construct_UClass_UBluetoothManagerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBluetoothManagerSubsystem.OuterSingleton;
}
UBluetoothManagerSubsystem::UBluetoothManagerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBluetoothManagerSubsystem);
UBluetoothManagerSubsystem::~UBluetoothManagerSubsystem() {}
// ********** End Class UBluetoothManagerSubsystem *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_BluetoothManagerSubsystem_h__Script_PlatformManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBluetoothManagerSubsystem, UBluetoothManagerSubsystem::StaticClass, TEXT("UBluetoothManagerSubsystem"), &Z_Registration_Info_UClass_UBluetoothManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBluetoothManagerSubsystem), 3479636915U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_BluetoothManagerSubsystem_h__Script_PlatformManager_53987915(TEXT("/Script/PlatformManager"),
	Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_BluetoothManagerSubsystem_h__Script_PlatformManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Conta_Github_BashPackagedPlugins_LimbitlessBluetoothPlugin_HostProject_Plugins_LimbitlessBluetoothPlugin_Source_PlatformManager_Public_BluetoothManagerSubsystem_h__Script_PlatformManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
