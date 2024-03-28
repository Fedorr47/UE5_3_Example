// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/UE5_3_ExampleCharacter.h"
#include "Components/EntityComponent.h"
#include "SystemQueue/EntityManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_3_ExampleCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AUE5_3_ExampleCharacter();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AUE5_3_ExampleCharacter_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AUE5_3_ExampleGameMode_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityComponent_NoRegister();
	UE5_3_EXAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FEntity();
	UE5_3_EXAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FEntityComponentWrapper();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	DEFINE_FUNCTION(AUE5_3_ExampleCharacter::execHeal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InHealAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Heal(Z_Param_InHealAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUE5_3_ExampleCharacter::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDamageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_InDamageAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUE5_3_ExampleCharacter::execGetHasRifle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasRifle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUE5_3_ExampleCharacter::execSetHasRifle)
	{
		P_GET_UBOOL(Z_Param_bNewHasRifle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasRifle(Z_Param_bNewHasRifle);
		P_NATIVE_END;
	}
	void AUE5_3_ExampleCharacter::StaticRegisterNativesAUE5_3_ExampleCharacter()
	{
		UClass* Class = AUE5_3_ExampleCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHasRifle", &AUE5_3_ExampleCharacter::execGetHasRifle },
			{ "Heal", &AUE5_3_ExampleCharacter::execHeal },
			{ "SetHasRifle", &AUE5_3_ExampleCharacter::execSetHasRifle },
			{ "TakeDamage", &AUE5_3_ExampleCharacter::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUE5_3_ExampleCharacter_GetHasRifle_Statics
	{
		struct UE5_3_ExampleCharacter_eventGetHasRifle_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUE5_3_ExampleCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UE5_3_ExampleCharacter_eventGetHasRifle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUE5_3_ExampleCharacter_GetHasRifle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UE5_3_ExampleCharacter_eventGetHasRifle_Parms), &Z_Construct_UFunction_AUE5_3_ExampleCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUE5_3_ExampleCharacter_GetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE5_3_ExampleCharacter_GetHasRifle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE5_3_ExampleCharacter_GetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getter for the bool */" },
#endif
		{ "ModuleRelativePath", "Actors/UE5_3_ExampleCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for the bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUE5_3_ExampleCharacter_GetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUE5_3_ExampleCharacter, nullptr, "GetHasRifle", nullptr, nullptr, Z_Construct_UFunction_AUE5_3_ExampleCharacter_GetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUE5_3_ExampleCharacter_GetHasRifle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUE5_3_ExampleCharacter_GetHasRifle_Statics::UE5_3_ExampleCharacter_eventGetHasRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUE5_3_ExampleCharacter_GetHasRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUE5_3_ExampleCharacter_GetHasRifle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUE5_3_ExampleCharacter_GetHasRifle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AUE5_3_ExampleCharacter_GetHasRifle_Statics::UE5_3_ExampleCharacter_eventGetHasRifle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AUE5_3_ExampleCharacter_GetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUE5_3_ExampleCharacter_GetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUE5_3_ExampleCharacter_Heal_Statics
	{
		struct UE5_3_ExampleCharacter_eventHeal_Parms
		{
			float InHealAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InHealAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUE5_3_ExampleCharacter_Heal_Statics::NewProp_InHealAmount = { "InHealAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE5_3_ExampleCharacter_eventHeal_Parms, InHealAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUE5_3_ExampleCharacter_Heal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE5_3_ExampleCharacter_Heal_Statics::NewProp_InHealAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE5_3_ExampleCharacter_Heal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Actors/UE5_3_ExampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUE5_3_ExampleCharacter_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUE5_3_ExampleCharacter, nullptr, "Heal", nullptr, nullptr, Z_Construct_UFunction_AUE5_3_ExampleCharacter_Heal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUE5_3_ExampleCharacter_Heal_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUE5_3_ExampleCharacter_Heal_Statics::UE5_3_ExampleCharacter_eventHeal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUE5_3_ExampleCharacter_Heal_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUE5_3_ExampleCharacter_Heal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUE5_3_ExampleCharacter_Heal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AUE5_3_ExampleCharacter_Heal_Statics::UE5_3_ExampleCharacter_eventHeal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AUE5_3_ExampleCharacter_Heal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUE5_3_ExampleCharacter_Heal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUE5_3_ExampleCharacter_SetHasRifle_Statics
	{
		struct UE5_3_ExampleCharacter_eventSetHasRifle_Parms
		{
			bool bNewHasRifle;
		};
		static void NewProp_bNewHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUE5_3_ExampleCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit(void* Obj)
	{
		((UE5_3_ExampleCharacter_eventSetHasRifle_Parms*)Obj)->bNewHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUE5_3_ExampleCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle = { "bNewHasRifle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UE5_3_ExampleCharacter_eventSetHasRifle_Parms), &Z_Construct_UFunction_AUE5_3_ExampleCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUE5_3_ExampleCharacter_SetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE5_3_ExampleCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE5_3_ExampleCharacter_SetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Setter to set the bool */" },
#endif
		{ "ModuleRelativePath", "Actors/UE5_3_ExampleCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setter to set the bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUE5_3_ExampleCharacter_SetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUE5_3_ExampleCharacter, nullptr, "SetHasRifle", nullptr, nullptr, Z_Construct_UFunction_AUE5_3_ExampleCharacter_SetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUE5_3_ExampleCharacter_SetHasRifle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUE5_3_ExampleCharacter_SetHasRifle_Statics::UE5_3_ExampleCharacter_eventSetHasRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUE5_3_ExampleCharacter_SetHasRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUE5_3_ExampleCharacter_SetHasRifle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUE5_3_ExampleCharacter_SetHasRifle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AUE5_3_ExampleCharacter_SetHasRifle_Statics::UE5_3_ExampleCharacter_eventSetHasRifle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AUE5_3_ExampleCharacter_SetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUE5_3_ExampleCharacter_SetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUE5_3_ExampleCharacter_TakeDamage_Statics
	{
		struct UE5_3_ExampleCharacter_eventTakeDamage_Parms
		{
			float InDamageAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDamageAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUE5_3_ExampleCharacter_TakeDamage_Statics::NewProp_InDamageAmount = { "InDamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE5_3_ExampleCharacter_eventTakeDamage_Parms, InDamageAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUE5_3_ExampleCharacter_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUE5_3_ExampleCharacter_TakeDamage_Statics::NewProp_InDamageAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE5_3_ExampleCharacter_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Actors/UE5_3_ExampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUE5_3_ExampleCharacter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUE5_3_ExampleCharacter, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_AUE5_3_ExampleCharacter_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUE5_3_ExampleCharacter_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUE5_3_ExampleCharacter_TakeDamage_Statics::UE5_3_ExampleCharacter_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUE5_3_ExampleCharacter_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUE5_3_ExampleCharacter_TakeDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUE5_3_ExampleCharacter_TakeDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AUE5_3_ExampleCharacter_TakeDamage_Statics::UE5_3_ExampleCharacter_eventTakeDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AUE5_3_ExampleCharacter_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUE5_3_ExampleCharacter_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5_3_ExampleCharacter);
	UClass* Z_Construct_UClass_AUE5_3_ExampleCharacter_NoRegister()
	{
		return AUE5_3_ExampleCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CreatedComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mGameMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachedComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachedComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mOwnerId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_mOwnerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorEntity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorEntity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRifle_MetaData[];
#endif
		static void NewProp_bHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUE5_3_ExampleCharacter_GetHasRifle, "GetHasRifle" }, // 2458915685
		{ &Z_Construct_UFunction_AUE5_3_ExampleCharacter_Heal, "Heal" }, // 1543212712
		{ &Z_Construct_UFunction_AUE5_3_ExampleCharacter_SetHasRifle, "SetHasRifle" }, // 3150205889
		{ &Z_Construct_UFunction_AUE5_3_ExampleCharacter_TakeDamage, "TakeDamage" }, // 3338259057
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/UE5_3_ExampleCharacter.h" },
		{ "ModuleRelativePath", "Actors/UE5_3_ExampleCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/UE5_3_ExampleCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE5_3_ExampleCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_Mesh1P_MetaData), Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_Mesh1P_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/UE5_3_ExampleCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE5_3_ExampleCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData), Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Actors/UE5_3_ExampleCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE5_3_ExampleCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Actors/UE5_3_ExampleCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE5_3_ExampleCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Actors/UE5_3_ExampleCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE5_3_ExampleCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_MoveAction_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_CreatedComponents_Inner = { "CreatedComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEntityComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_CreatedComponents_MetaData[] = {
		{ "ModuleRelativePath", "Actors/UE5_3_ExampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_CreatedComponents = { "CreatedComponents", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE5_3_ExampleCharacter, CreatedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_CreatedComponents_MetaData), Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_CreatedComponents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_mWorld_MetaData[] = {
		{ "ModuleRelativePath", "Actors/UE5_3_ExampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_mWorld = { "mWorld", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE5_3_ExampleCharacter, mWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_mWorld_MetaData), Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_mWorld_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_mGameMode_MetaData[] = {
		{ "ModuleRelativePath", "Actors/UE5_3_ExampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_mGameMode = { "mGameMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE5_3_ExampleCharacter, mGameMode), Z_Construct_UClass_AUE5_3_ExampleGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_mGameMode_MetaData), Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_mGameMode_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_AttachedComponents_Inner = { "AttachedComponents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEntityComponentWrapper, METADATA_PARAMS(0, nullptr) }; // 4286559399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_AttachedComponents_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Actors/UE5_3_ExampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_AttachedComponents = { "AttachedComponents", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE5_3_ExampleCharacter, AttachedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_AttachedComponents_MetaData), Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_AttachedComponents_MetaData) }; // 4286559399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_mOwnerId_MetaData[] = {
		{ "ModuleRelativePath", "Actors/UE5_3_ExampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_mOwnerId = { "mOwnerId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE5_3_ExampleCharacter, mOwnerId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_mOwnerId_MetaData), Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_mOwnerId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_ActorEntity_MetaData[] = {
		{ "ModuleRelativePath", "Actors/UE5_3_ExampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_ActorEntity = { "ActorEntity", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE5_3_ExampleCharacter, ActorEntity), Z_Construct_UScriptStruct_FEntity, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_ActorEntity_MetaData), Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_ActorEntity_MetaData) }; // 904214179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Actors/UE5_3_ExampleCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE5_3_ExampleCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_bHasRifle_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bool for AnimBP to switch to another animation set */" },
#endif
		{ "ModuleRelativePath", "Actors/UE5_3_ExampleCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bool for AnimBP to switch to another animation set" },
#endif
	};
#endif
	void Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_bHasRifle_SetBit(void* Obj)
	{
		((AUE5_3_ExampleCharacter*)Obj)->bHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_bHasRifle = { "bHasRifle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AUE5_3_ExampleCharacter), &Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_bHasRifle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_bHasRifle_MetaData), Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_bHasRifle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_CreatedComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_CreatedComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_mWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_mGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_AttachedComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_AttachedComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_mOwnerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_ActorEntity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::NewProp_bHasRifle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_3_ExampleCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::ClassParams = {
		&AUE5_3_ExampleCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AUE5_3_ExampleCharacter()
	{
		if (!Z_Registration_Info_UClass_AUE5_3_ExampleCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_3_ExampleCharacter.OuterSingleton, Z_Construct_UClass_AUE5_3_ExampleCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5_3_ExampleCharacter.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<AUE5_3_ExampleCharacter>()
	{
		return AUE5_3_ExampleCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_3_ExampleCharacter);
	AUE5_3_ExampleCharacter::~AUE5_3_ExampleCharacter() {}
	struct Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_UE5_3_ExampleCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_UE5_3_ExampleCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_3_ExampleCharacter, AUE5_3_ExampleCharacter::StaticClass, TEXT("AUE5_3_ExampleCharacter"), &Z_Registration_Info_UClass_AUE5_3_ExampleCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_3_ExampleCharacter), 1956662249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_UE5_3_ExampleCharacter_h_3558181529(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_UE5_3_ExampleCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_UE5_3_ExampleCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
