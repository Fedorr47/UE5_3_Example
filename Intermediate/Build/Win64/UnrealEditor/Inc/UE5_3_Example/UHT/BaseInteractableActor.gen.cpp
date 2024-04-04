// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/BaseInteractableActor.h"
#include "Components/EntityComponent.h"
#include "SystemQueue/EntityManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseInteractableActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseInteractableActor();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseInteractableActor_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AUE5_3_ExampleGameMode_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityComponent_NoRegister();
	UE5_3_EXAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FEntity();
	UE5_3_EXAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FEntityComponentWrapper();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	DEFINE_FUNCTION(ABaseInteractableActor::execGetThrowableMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=P_THIS->GetThrowableMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseInteractableActor::execHeal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InHealAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Heal(Z_Param_InHealAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseInteractableActor::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDamageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_InDamageAmount);
		P_NATIVE_END;
	}
	void ABaseInteractableActor::StaticRegisterNativesABaseInteractableActor()
	{
		UClass* Class = ABaseInteractableActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetThrowableMesh", &ABaseInteractableActor::execGetThrowableMesh },
			{ "Heal", &ABaseInteractableActor::execHeal },
			{ "TakeDamage", &ABaseInteractableActor::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseInteractableActor_GetThrowableMesh_Statics
	{
		struct BaseInteractableActor_eventGetThrowableMesh_Parms
		{
			UStaticMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseInteractableActor_GetThrowableMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInteractableActor_eventGetThrowableMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseInteractableActor_GetThrowableMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseInteractableActor_GetThrowableMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseInteractableActor_GetThrowableMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/BaseInteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseInteractableActor_GetThrowableMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseInteractableActor, nullptr, "GetThrowableMesh", nullptr, nullptr, Z_Construct_UFunction_ABaseInteractableActor_GetThrowableMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseInteractableActor_GetThrowableMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseInteractableActor_GetThrowableMesh_Statics::BaseInteractableActor_eventGetThrowableMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseInteractableActor_GetThrowableMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseInteractableActor_GetThrowableMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseInteractableActor_GetThrowableMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseInteractableActor_GetThrowableMesh_Statics::BaseInteractableActor_eventGetThrowableMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseInteractableActor_GetThrowableMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseInteractableActor_GetThrowableMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseInteractableActor_Heal_Statics
	{
		struct BaseInteractableActor_eventHeal_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseInteractableActor_Heal_Statics::NewProp_InHealAmount = { "InHealAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInteractableActor_eventHeal_Parms, InHealAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseInteractableActor_Heal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseInteractableActor_Heal_Statics::NewProp_InHealAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseInteractableActor_Heal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/BaseInteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseInteractableActor_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseInteractableActor, nullptr, "Heal", nullptr, nullptr, Z_Construct_UFunction_ABaseInteractableActor_Heal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseInteractableActor_Heal_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseInteractableActor_Heal_Statics::BaseInteractableActor_eventHeal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseInteractableActor_Heal_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseInteractableActor_Heal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseInteractableActor_Heal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseInteractableActor_Heal_Statics::BaseInteractableActor_eventHeal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseInteractableActor_Heal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseInteractableActor_Heal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseInteractableActor_TakeDamage_Statics
	{
		struct BaseInteractableActor_eventTakeDamage_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseInteractableActor_TakeDamage_Statics::NewProp_InDamageAmount = { "InDamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInteractableActor_eventTakeDamage_Parms, InDamageAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseInteractableActor_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseInteractableActor_TakeDamage_Statics::NewProp_InDamageAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseInteractableActor_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/BaseInteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseInteractableActor_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseInteractableActor, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_ABaseInteractableActor_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseInteractableActor_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseInteractableActor_TakeDamage_Statics::BaseInteractableActor_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseInteractableActor_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseInteractableActor_TakeDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseInteractableActor_TakeDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseInteractableActor_TakeDamage_Statics::BaseInteractableActor_eventTakeDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseInteractableActor_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseInteractableActor_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseInteractableActor);
	UClass* Z_Construct_UClass_ABaseInteractableActor_NoRegister()
	{
		return ABaseInteractableActor::StaticClass();
	}
	struct Z_Construct_UClass_ABaseInteractableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mOwnerId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_mOwnerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorEntity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorEntity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mGameMode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CreatedComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StatMeshComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachedComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachedComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseInteractableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseInteractableActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseInteractableActor_GetThrowableMesh, "GetThrowableMesh" }, // 2841986495
		{ &Z_Construct_UFunction_ABaseInteractableActor_Heal, "Heal" }, // 1421189946
		{ &Z_Construct_UFunction_ABaseInteractableActor_TakeDamage, "TakeDamage" }, // 2634086711
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseInteractableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/BaseInteractableActor.h" },
		{ "ModuleRelativePath", "Actors/BaseInteractableActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mOwnerId_MetaData[] = {
		{ "Category", "BaseInteractableActor" },
		{ "ModuleRelativePath", "Actors/BaseInteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mOwnerId = { "mOwnerId", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractableActor, mOwnerId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mOwnerId_MetaData), Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mOwnerId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_ActorEntity_MetaData[] = {
		{ "ModuleRelativePath", "Actors/BaseInteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_ActorEntity = { "ActorEntity", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractableActor, ActorEntity), Z_Construct_UScriptStruct_FEntity, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_ActorEntity_MetaData), Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_ActorEntity_MetaData) }; // 904214179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mWorld_MetaData[] = {
		{ "ModuleRelativePath", "Actors/BaseInteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mWorld = { "mWorld", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractableActor, mWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mWorld_MetaData), Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mWorld_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mGameMode_MetaData[] = {
		{ "ModuleRelativePath", "Actors/BaseInteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mGameMode = { "mGameMode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractableActor, mGameMode), Z_Construct_UClass_AUE5_3_ExampleGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mGameMode_MetaData), Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mGameMode_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CreatedComponents_Inner = { "CreatedComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEntityComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CreatedComponents_MetaData[] = {
		{ "ModuleRelativePath", "Actors/BaseInteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CreatedComponents = { "CreatedComponents", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractableActor, CreatedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CreatedComponents_MetaData), Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CreatedComponents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_StatMeshComp_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/BaseInteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_StatMeshComp = { "StatMeshComp", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractableActor, StatMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_StatMeshComp_MetaData), Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_StatMeshComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_AttachedComponents_Inner = { "AttachedComponents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEntityComponentWrapper, METADATA_PARAMS(0, nullptr) }; // 4286559399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_AttachedComponents_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, Category = Components)\n" },
#endif
		{ "ModuleRelativePath", "Actors/BaseInteractableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, Category = Components)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_AttachedComponents = { "AttachedComponents", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractableActor, AttachedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_AttachedComponents_MetaData), Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_AttachedComponents_MetaData) }; // 4286559399
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseInteractableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mOwnerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_ActorEntity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CreatedComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CreatedComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_StatMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_AttachedComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_AttachedComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseInteractableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseInteractableActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseInteractableActor_Statics::ClassParams = {
		&ABaseInteractableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseInteractableActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseInteractableActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABaseInteractableActor()
	{
		if (!Z_Registration_Info_UClass_ABaseInteractableActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseInteractableActor.OuterSingleton, Z_Construct_UClass_ABaseInteractableActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseInteractableActor.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<ABaseInteractableActor>()
	{
		return ABaseInteractableActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseInteractableActor);
	ABaseInteractableActor::~ABaseInteractableActor() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseInteractableActor, ABaseInteractableActor::StaticClass, TEXT("ABaseInteractableActor"), &Z_Registration_Info_UClass_ABaseInteractableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseInteractableActor), 2490544408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_57064878(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_BaseInteractableActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
