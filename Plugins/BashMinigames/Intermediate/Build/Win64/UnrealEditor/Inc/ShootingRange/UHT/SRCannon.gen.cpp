// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SRCannon.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSRCannon() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameCapture_NoRegister();
MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigamePlayer();
MINIGAMECORE_API UClass* Z_Construct_UClass_UPlayerRotationComponent_NoRegister();
SHOOTINGRANGE_API UClass* Z_Construct_UClass_ASRCannon();
SHOOTINGRANGE_API UClass* Z_Construct_UClass_ASRCannon_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShootingRange();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASRCannon Function CanFire ***********************************************
struct Z_Construct_UFunction_ASRCannon_CanFire_Statics
{
	struct SRCannon_eventCanFire_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASRCannon_CanFire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SRCannon_eventCanFire_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASRCannon_CanFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SRCannon_eventCanFire_Parms), &Z_Construct_UFunction_ASRCannon_CanFire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASRCannon_CanFire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASRCannon_CanFire_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_CanFire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASRCannon_CanFire_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASRCannon, nullptr, "CanFire", Z_Construct_UFunction_ASRCannon_CanFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_CanFire_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASRCannon_CanFire_Statics::SRCannon_eventCanFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_CanFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASRCannon_CanFire_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASRCannon_CanFire_Statics::SRCannon_eventCanFire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASRCannon_CanFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASRCannon_CanFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASRCannon::execCanFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanFire();
	P_NATIVE_END;
}
// ********** End Class ASRCannon Function CanFire *************************************************

// ********** Begin Class ASRCannon Function Fire **************************************************
struct Z_Construct_UFunction_ASRCannon_Fire_Statics
{
	struct SRCannon_eventFire_Parms
	{
		int32 Layer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASRCannon_Fire_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SRCannon_eventFire_Parms, Layer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASRCannon_Fire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASRCannon_Fire_Statics::NewProp_Layer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_Fire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASRCannon_Fire_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASRCannon, nullptr, "Fire", Z_Construct_UFunction_ASRCannon_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_Fire_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASRCannon_Fire_Statics::SRCannon_eventFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASRCannon_Fire_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASRCannon_Fire_Statics::SRCannon_eventFire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASRCannon_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASRCannon_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASRCannon::execFire)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Layer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire(Z_Param_Layer);
	P_NATIVE_END;
}
// ********** End Class ASRCannon Function Fire ****************************************************

// ********** Begin Class ASRCannon Function GetCannonTargetRotation *******************************
struct Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics
{
	struct SRCannon_eventGetCannonTargetRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SRCannon_eventGetCannonTargetRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASRCannon, nullptr, "GetCannonTargetRotation", Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::SRCannon_eventGetCannonTargetRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::SRCannon_eventGetCannonTargetRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASRCannon::execGetCannonTargetRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetCannonTargetRotation();
	P_NATIVE_END;
}
// ********** End Class ASRCannon Function GetCannonTargetRotation *********************************

// ********** Begin Class ASRCannon Function GetDepthLayers ****************************************
struct SRCannon_eventGetDepthLayers_Parms
{
	TArray<AActor*> ReturnValue;
};
static FName NAME_ASRCannon_GetDepthLayers = FName(TEXT("GetDepthLayers"));
TArray<AActor*> ASRCannon::GetDepthLayers() const
{
	SRCannon_eventGetDepthLayers_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_ASRCannon_GetDepthLayers);
		const_cast<ASRCannon*>(this)->ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SRCannon_eventGetDepthLayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASRCannon, nullptr, "GetDepthLayers", Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::PropPointers), sizeof(SRCannon_eventGetDepthLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SRCannon_eventGetDepthLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASRCannon_GetDepthLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ASRCannon Function GetDepthLayers ******************************************

// ********** Begin Class ASRCannon Function ShootProjectile ***************************************
struct SRCannon_eventShootProjectile_Parms
{
	FVector Velocity;
};
static FName NAME_ASRCannon_ShootProjectile = FName(TEXT("ShootProjectile"));
void ASRCannon::ShootProjectile(FVector const& Velocity)
{
	SRCannon_eventShootProjectile_Parms Parms;
	Parms.Velocity=Velocity;
	UFunction* Func = FindFunctionChecked(NAME_ASRCannon_ShootProjectile);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SRCannon_eventShootProjectile_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::NewProp_Velocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASRCannon, nullptr, "ShootProjectile", Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::PropPointers), sizeof(SRCannon_eventShootProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SRCannon_eventShootProjectile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASRCannon_ShootProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ASRCannon Function ShootProjectile *****************************************

// ********** Begin Class ASRCannon ****************************************************************
void ASRCannon::StaticRegisterNativesASRCannon()
{
	UClass* Class = ASRCannon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanFire", &ASRCannon::execCanFire },
		{ "Fire", &ASRCannon::execFire },
		{ "GetCannonTargetRotation", &ASRCannon::execGetCannonTargetRotation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASRCannon;
UClass* ASRCannon::GetPrivateStaticClass()
{
	using TClass = ASRCannon;
	if (!Z_Registration_Info_UClass_ASRCannon.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SRCannon"),
			Z_Registration_Info_UClass_ASRCannon.InnerSingleton,
			StaticRegisterNativesASRCannon,
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
	return Z_Registration_Info_UClass_ASRCannon.InnerSingleton;
}
UClass* Z_Construct_UClass_ASRCannon_NoRegister()
{
	return ASRCannon::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASRCannon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SRCannon.h" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "SRCannon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarrelRoot_MetaData[] = {
		{ "Category", "SRCannon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseRoot_MetaData[] = {
		{ "Category", "SRCannon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpawn_MetaData[] = {
		{ "Category", "SRCannon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSkeletalMesh_MetaData[] = {
		{ "Category", "SRCannon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationComponent_MetaData[] = {
		{ "Category", "SRCannon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCooldown_MetaData[] = {
		{ "Category", "SRCannon" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpeed_MetaData[] = {
		{ "Category", "SRCannon" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinigameCamera_MetaData[] = {
		{ "Category", "SRCannon" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BarrelRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseSkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinigameCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASRCannon_CanFire, "CanFire" }, // 2780232525
		{ &Z_Construct_UFunction_ASRCannon_Fire, "Fire" }, // 3904469053
		{ &Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation, "GetCannonTargetRotation" }, // 3106937778
		{ &Z_Construct_UFunction_ASRCannon_GetDepthLayers, "GetDepthLayers" }, // 3312318771
		{ &Z_Construct_UFunction_ASRCannon_ShootProjectile, "ShootProjectile" }, // 19016104
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASRCannon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRCannon_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0124080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASRCannon, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRCannon_Statics::NewProp_BarrelRoot = { "BarrelRoot", nullptr, (EPropertyFlags)0x0124080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASRCannon, BarrelRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarrelRoot_MetaData), NewProp_BarrelRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRCannon_Statics::NewProp_BaseRoot = { "BaseRoot", nullptr, (EPropertyFlags)0x0124080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASRCannon, BaseRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseRoot_MetaData), NewProp_BaseRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRCannon_Statics::NewProp_BulletSpawn = { "BulletSpawn", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASRCannon, BulletSpawn), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletSpawn_MetaData), NewProp_BulletSpawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRCannon_Statics::NewProp_BaseSkeletalMesh = { "BaseSkeletalMesh", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASRCannon, BaseSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSkeletalMesh_MetaData), NewProp_BaseSkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRCannon_Statics::NewProp_RotationComponent = { "RotationComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASRCannon, RotationComponent), Z_Construct_UClass_UPlayerRotationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationComponent_MetaData), NewProp_RotationComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASRCannon_Statics::NewProp_AttackCooldown = { "AttackCooldown", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASRCannon, AttackCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCooldown_MetaData), NewProp_AttackCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASRCannon_Statics::NewProp_BulletSpeed = { "BulletSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASRCannon, BulletSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletSpeed_MetaData), NewProp_BulletSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRCannon_Statics::NewProp_MinigameCamera = { "MinigameCamera", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASRCannon, MinigameCamera), Z_Construct_UClass_AMinigameCapture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinigameCamera_MetaData), NewProp_MinigameCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASRCannon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRCannon_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRCannon_Statics::NewProp_BarrelRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRCannon_Statics::NewProp_BaseRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRCannon_Statics::NewProp_BulletSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRCannon_Statics::NewProp_BaseSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRCannon_Statics::NewProp_RotationComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRCannon_Statics::NewProp_AttackCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRCannon_Statics::NewProp_BulletSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRCannon_Statics::NewProp_MinigameCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASRCannon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASRCannon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMinigamePlayer,
	(UObject* (*)())Z_Construct_UPackage__Script_ShootingRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASRCannon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASRCannon_Statics::ClassParams = {
	&ASRCannon::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASRCannon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASRCannon_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASRCannon_Statics::Class_MetaDataParams), Z_Construct_UClass_ASRCannon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASRCannon()
{
	if (!Z_Registration_Info_UClass_ASRCannon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASRCannon.OuterSingleton, Z_Construct_UClass_ASRCannon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASRCannon.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASRCannon);
ASRCannon::~ASRCannon() {}
// ********** End Class ASRCannon ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashMinigames_Source_ShootingRange_Public_SRCannon_h__Script_ShootingRange_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASRCannon, ASRCannon::StaticClass, TEXT("ASRCannon"), &Z_Registration_Info_UClass_ASRCannon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASRCannon), 3789940492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashMinigames_Source_ShootingRange_Public_SRCannon_h__Script_ShootingRange_3474029235(TEXT("/Script/ShootingRange"),
	Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashMinigames_Source_ShootingRange_Public_SRCannon_h__Script_ShootingRange_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nortm_OneDrive_Documents_Github_Limbitless_UnrealParty_Plugins_BashMinigames_Source_ShootingRange_Public_SRCannon_h__Script_ShootingRange_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
