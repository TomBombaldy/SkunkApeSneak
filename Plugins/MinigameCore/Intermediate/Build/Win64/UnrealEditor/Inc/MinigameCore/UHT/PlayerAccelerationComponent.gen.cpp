// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/PlayerAccelerationComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerAccelerationComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MINIGAMECORE_API UClass* Z_Construct_UClass_UPlayerAccelerationComponent();
MINIGAMECORE_API UClass* Z_Construct_UClass_UPlayerAccelerationComponent_NoRegister();
MINIGAMECORE_API UFunction* Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature();
MINIGAMECORE_API UFunction* Z_Construct_UDelegateFunction_MinigameCore_OnMovementTriggeredSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MinigameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnMovementTriggeredSignature *****************************************
struct Z_Construct_UDelegateFunction_MinigameCore_OnMovementTriggeredSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerAccelerationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MinigameCore_OnMovementTriggeredSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MinigameCore, nullptr, "OnMovementTriggeredSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinigameCore_OnMovementTriggeredSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MinigameCore_OnMovementTriggeredSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_MinigameCore_OnMovementTriggeredSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinigameCore_OnMovementTriggeredSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMovementTriggeredSignature_DelegateWrapper(const FScriptDelegate& OnMovementTriggeredSignature)
{
	OnMovementTriggeredSignature.ProcessDelegate<UObject>(NULL);
}
// ********** End Delegate FOnMovementTriggeredSignature *******************************************

// ********** Begin Delegate FEvaluateMovementSignature ********************************************
struct Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature_Statics
{
	struct _Script_MinigameCore_eventEvaluateMovementSignature_Parms
	{
		FVector CoordinateAcceleration;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerAccelerationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CoordinateAcceleration;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature_Statics::NewProp_CoordinateAcceleration = { "CoordinateAcceleration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MinigameCore_eventEvaluateMovementSignature_Parms, CoordinateAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((_Script_MinigameCore_eventEvaluateMovementSignature_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MinigameCore_eventEvaluateMovementSignature_Parms), &Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature_Statics::NewProp_CoordinateAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MinigameCore, nullptr, "EvaluateMovementSignature__DelegateSignature", Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature_Statics::_Script_MinigameCore_eventEvaluateMovementSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature_Statics::_Script_MinigameCore_eventEvaluateMovementSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
bool FEvaluateMovementSignature_DelegateWrapper(const FScriptDelegate& EvaluateMovementSignature, FVector CoordinateAcceleration)
{
	struct _Script_MinigameCore_eventEvaluateMovementSignature_Parms
	{
		FVector CoordinateAcceleration;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_MinigameCore_eventEvaluateMovementSignature_Parms()
			: ReturnValue(false)
		{
		}
	};
	_Script_MinigameCore_eventEvaluateMovementSignature_Parms Parms;
	Parms.CoordinateAcceleration=CoordinateAcceleration;
	EvaluateMovementSignature.ProcessDelegate<UObject>(&Parms);
	return !!Parms.ReturnValue;
}
// ********** End Delegate FEvaluateMovementSignature **********************************************

// ********** Begin Class UPlayerAccelerationComponent Function GetAccelerationInputValue **********
struct Z_Construct_UFunction_UPlayerAccelerationComponent_GetAccelerationInputValue_Statics
{
	struct PlayerAccelerationComponent_eventGetAccelerationInputValue_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Acceleration" },
		{ "ModuleRelativePath", "Public/Player/PlayerAccelerationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAccelerationComponent_GetAccelerationInputValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAccelerationComponent_eventGetAccelerationInputValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAccelerationComponent_GetAccelerationInputValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAccelerationComponent_GetAccelerationInputValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAccelerationComponent_GetAccelerationInputValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAccelerationComponent_GetAccelerationInputValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerAccelerationComponent, nullptr, "GetAccelerationInputValue", Z_Construct_UFunction_UPlayerAccelerationComponent_GetAccelerationInputValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAccelerationComponent_GetAccelerationInputValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAccelerationComponent_GetAccelerationInputValue_Statics::PlayerAccelerationComponent_eventGetAccelerationInputValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAccelerationComponent_GetAccelerationInputValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAccelerationComponent_GetAccelerationInputValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAccelerationComponent_GetAccelerationInputValue_Statics::PlayerAccelerationComponent_eventGetAccelerationInputValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAccelerationComponent_GetAccelerationInputValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAccelerationComponent_GetAccelerationInputValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAccelerationComponent::execGetAccelerationInputValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetAccelerationInputValue();
	P_NATIVE_END;
}
// ********** End Class UPlayerAccelerationComponent Function GetAccelerationInputValue ************

// ********** Begin Class UPlayerAccelerationComponent Function GetCoordinateAcceleration **********
struct Z_Construct_UFunction_UPlayerAccelerationComponent_GetCoordinateAcceleration_Statics
{
	struct PlayerAccelerationComponent_eventGetCoordinateAcceleration_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Acceleration" },
		{ "Comment", "// Returns the coordinate acceleration of the player's flex controller in m/s^2. Coordinate acceleration is not affected by gravity\n// and represents acceleration experienced by the device relative to Earth. Useful for game logic.\n" },
		{ "ModuleRelativePath", "Public/Player/PlayerAccelerationComponent.h" },
		{ "ToolTip", "Returns the coordinate acceleration of the player's flex controller in m/s^2. Coordinate acceleration is not affected by gravity\nand represents acceleration experienced by the device relative to Earth. Useful for game logic." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerAccelerationComponent_GetCoordinateAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAccelerationComponent_eventGetCoordinateAcceleration_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAccelerationComponent_GetCoordinateAcceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAccelerationComponent_GetCoordinateAcceleration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAccelerationComponent_GetCoordinateAcceleration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAccelerationComponent_GetCoordinateAcceleration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerAccelerationComponent, nullptr, "GetCoordinateAcceleration", Z_Construct_UFunction_UPlayerAccelerationComponent_GetCoordinateAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAccelerationComponent_GetCoordinateAcceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAccelerationComponent_GetCoordinateAcceleration_Statics::PlayerAccelerationComponent_eventGetCoordinateAcceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAccelerationComponent_GetCoordinateAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAccelerationComponent_GetCoordinateAcceleration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAccelerationComponent_GetCoordinateAcceleration_Statics::PlayerAccelerationComponent_eventGetCoordinateAcceleration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAccelerationComponent_GetCoordinateAcceleration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAccelerationComponent_GetCoordinateAcceleration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAccelerationComponent::execGetCoordinateAcceleration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCoordinateAcceleration();
	P_NATIVE_END;
}
// ********** End Class UPlayerAccelerationComponent Function GetCoordinateAcceleration ************

// ********** Begin Class UPlayerAccelerationComponent Function ListenForMovement ******************
struct Z_Construct_UFunction_UPlayerAccelerationComponent_ListenForMovement_Statics
{
	struct PlayerAccelerationComponent_eventListenForMovement_Parms
	{
		FScriptDelegate EvaluateMovement;
		FScriptDelegate OnMovementTriggered;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Acceleration" },
		{ "ModuleRelativePath", "Public/Player/PlayerAccelerationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_EvaluateMovement;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMovementTriggered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayerAccelerationComponent_ListenForMovement_Statics::NewProp_EvaluateMovement = { "EvaluateMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAccelerationComponent_eventListenForMovement_Parms, EvaluateMovement), Z_Construct_UDelegateFunction_MinigameCore_EvaluateMovementSignature__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3928707927
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayerAccelerationComponent_ListenForMovement_Statics::NewProp_OnMovementTriggered = { "OnMovementTriggered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAccelerationComponent_eventListenForMovement_Parms, OnMovementTriggered), Z_Construct_UDelegateFunction_MinigameCore_OnMovementTriggeredSignature__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 52389966
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAccelerationComponent_ListenForMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAccelerationComponent_ListenForMovement_Statics::NewProp_EvaluateMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAccelerationComponent_ListenForMovement_Statics::NewProp_OnMovementTriggered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAccelerationComponent_ListenForMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAccelerationComponent_ListenForMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerAccelerationComponent, nullptr, "ListenForMovement", Z_Construct_UFunction_UPlayerAccelerationComponent_ListenForMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAccelerationComponent_ListenForMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAccelerationComponent_ListenForMovement_Statics::PlayerAccelerationComponent_eventListenForMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAccelerationComponent_ListenForMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAccelerationComponent_ListenForMovement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAccelerationComponent_ListenForMovement_Statics::PlayerAccelerationComponent_eventListenForMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAccelerationComponent_ListenForMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAccelerationComponent_ListenForMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAccelerationComponent::execListenForMovement)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_EvaluateMovement);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnMovementTriggered);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ListenForMovement(FEvaluateMovementSignature(Z_Param_EvaluateMovement),FOnMovementTriggeredSignature(Z_Param_OnMovementTriggered));
	P_NATIVE_END;
}
// ********** End Class UPlayerAccelerationComponent Function ListenForMovement ********************

// ********** Begin Class UPlayerAccelerationComponent *********************************************
void UPlayerAccelerationComponent::StaticRegisterNativesUPlayerAccelerationComponent()
{
	UClass* Class = UPlayerAccelerationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAccelerationInputValue", &UPlayerAccelerationComponent::execGetAccelerationInputValue },
		{ "GetCoordinateAcceleration", &UPlayerAccelerationComponent::execGetCoordinateAcceleration },
		{ "ListenForMovement", &UPlayerAccelerationComponent::execListenForMovement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerAccelerationComponent;
UClass* UPlayerAccelerationComponent::GetPrivateStaticClass()
{
	using TClass = UPlayerAccelerationComponent;
	if (!Z_Registration_Info_UClass_UPlayerAccelerationComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerAccelerationComponent"),
			Z_Registration_Info_UClass_UPlayerAccelerationComponent.InnerSingleton,
			StaticRegisterNativesUPlayerAccelerationComponent,
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
	return Z_Registration_Info_UClass_UPlayerAccelerationComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerAccelerationComponent_NoRegister()
{
	return UPlayerAccelerationComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerAccelerationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/PlayerAccelerationComponent.h" },
		{ "ModuleRelativePath", "Public/Player/PlayerAccelerationComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAccelerationComponent_GetAccelerationInputValue, "GetAccelerationInputValue" }, // 2050872361
		{ &Z_Construct_UFunction_UPlayerAccelerationComponent_GetCoordinateAcceleration, "GetCoordinateAcceleration" }, // 1955412207
		{ &Z_Construct_UFunction_UPlayerAccelerationComponent_ListenForMovement, "ListenForMovement" }, // 2687595345
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAccelerationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerAccelerationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MinigameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAccelerationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAccelerationComponent_Statics::ClassParams = {
	&UPlayerAccelerationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAccelerationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAccelerationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerAccelerationComponent()
{
	if (!Z_Registration_Info_UClass_UPlayerAccelerationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAccelerationComponent.OuterSingleton, Z_Construct_UClass_UPlayerAccelerationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerAccelerationComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAccelerationComponent);
UPlayerAccelerationComponent::~UPlayerAccelerationComponent() {}
// ********** End Class UPlayerAccelerationComponent ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h__Script_MinigameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAccelerationComponent, UPlayerAccelerationComponent::StaticClass, TEXT("UPlayerAccelerationComponent"), &Z_Registration_Info_UClass_UPlayerAccelerationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAccelerationComponent), 4231231062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h__Script_MinigameCore_3622475767(TEXT("/Script/MinigameCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h__Script_MinigameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_Plugins_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Player_PlayerAccelerationComponent_h__Script_MinigameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
