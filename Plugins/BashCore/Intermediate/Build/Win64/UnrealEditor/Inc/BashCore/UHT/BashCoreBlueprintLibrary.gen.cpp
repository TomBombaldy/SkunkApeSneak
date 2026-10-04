// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BashCoreBlueprintLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBashCoreBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_UBashCoreBlueprintLibrary();
BASHCORE_API UClass* Z_Construct_UClass_UBashCoreBlueprintLibrary_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UPlayerData_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_BashCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBashCoreBlueprintLibrary Function GetPlayerData *************************
struct Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData_Statics
{
	struct BashCoreBlueprintLibrary_eventGetPlayerData_Parms
	{
		const UObject* WorldContextObject;
		int32 PlayerIndex;
		UPlayerData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bash Core" },
		{ "ModuleRelativePath", "Public/BashCoreBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BashCoreBlueprintLibrary_eventGetPlayerData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BashCoreBlueprintLibrary_eventGetPlayerData_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BashCoreBlueprintLibrary_eventGetPlayerData_Parms, ReturnValue), Z_Construct_UClass_UPlayerData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBashCoreBlueprintLibrary, nullptr, "GetPlayerData", Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData_Statics::BashCoreBlueprintLibrary_eventGetPlayerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData_Statics::BashCoreBlueprintLibrary_eventGetPlayerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBashCoreBlueprintLibrary::execGetPlayerData)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayerData**)Z_Param__Result=UBashCoreBlueprintLibrary::GetPlayerData(Z_Param_WorldContextObject,Z_Param_PlayerIndex);
	P_NATIVE_END;
}
// ********** End Class UBashCoreBlueprintLibrary Function GetPlayerData ***************************

// ********** Begin Class UBashCoreBlueprintLibrary ************************************************
void UBashCoreBlueprintLibrary::StaticRegisterNativesUBashCoreBlueprintLibrary()
{
	UClass* Class = UBashCoreBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerData", &UBashCoreBlueprintLibrary::execGetPlayerData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBashCoreBlueprintLibrary;
UClass* UBashCoreBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UBashCoreBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UBashCoreBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BashCoreBlueprintLibrary"),
			Z_Registration_Info_UClass_UBashCoreBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUBashCoreBlueprintLibrary,
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
	return Z_Registration_Info_UClass_UBashCoreBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UBashCoreBlueprintLibrary_NoRegister()
{
	return UBashCoreBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBashCoreBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BashCoreBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/BashCoreBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBashCoreBlueprintLibrary_GetPlayerData, "GetPlayerData" }, // 1413037914
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBashCoreBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBashCoreBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBashCoreBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBashCoreBlueprintLibrary_Statics::ClassParams = {
	&UBashCoreBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBashCoreBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBashCoreBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBashCoreBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UBashCoreBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBashCoreBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UBashCoreBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBashCoreBlueprintLibrary.OuterSingleton;
}
UBashCoreBlueprintLibrary::UBashCoreBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBashCoreBlueprintLibrary);
UBashCoreBlueprintLibrary::~UBashCoreBlueprintLibrary() {}
// ********** End Class UBashCoreBlueprintLibrary **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashCoreBlueprintLibrary_h__Script_BashCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBashCoreBlueprintLibrary, UBashCoreBlueprintLibrary::StaticClass, TEXT("UBashCoreBlueprintLibrary"), &Z_Registration_Info_UClass_UBashCoreBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBashCoreBlueprintLibrary), 324446716U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashCoreBlueprintLibrary_h__Script_BashCore_3979892572(TEXT("/Script/BashCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashCoreBlueprintLibrary_h__Script_BashCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_BashCoreBlueprintLibrary_h__Script_BashCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
