// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/ThrowableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowableActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseInteractableActor();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ADefaultPlaybleCharacter_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ADefaultProjectile_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AThrowableActor();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AThrowableActor_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UThrowableComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	DEFINE_FUNCTION(AThrowableActor::execGetThrowbaleOwnerCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=P_THIS->GetThrowbaleOwnerCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThrowableActor::execPredictThrow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PredictThrow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThrowableActor::execActiveThrow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActiveThrow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThrowableActor::execAttachToCharacter)
	{
		P_GET_OBJECT(ACharacter,Z_Param_TargetCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachToCharacter(Z_Param_TargetCharacter);
		P_NATIVE_END;
	}
	void AThrowableActor::StaticRegisterNativesAThrowableActor()
	{
		UClass* Class = AThrowableActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActiveThrow", &AThrowableActor::execActiveThrow },
			{ "AttachToCharacter", &AThrowableActor::execAttachToCharacter },
			{ "GetThrowbaleOwnerCharacter", &AThrowableActor::execGetThrowbaleOwnerCharacter },
			{ "PredictThrow", &AThrowableActor::execPredictThrow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AThrowableActor_ActiveThrow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableActor_ActiveThrow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Throw" },
		{ "ModuleRelativePath", "Actors/ThrowableActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableActor_ActiveThrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowableActor, nullptr, "ActiveThrow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableActor_ActiveThrow_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThrowableActor_ActiveThrow_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AThrowableActor_ActiveThrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThrowableActor_ActiveThrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowableActor_AttachToCharacter_Statics
	{
		struct ThrowableActor_eventAttachToCharacter_Parms
		{
			ACharacter* TargetCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThrowableActor_AttachToCharacter_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThrowableActor_eventAttachToCharacter_Parms, TargetCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowableActor_AttachToCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableActor_AttachToCharacter_Statics::NewProp_TargetCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableActor_AttachToCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Throw" },
		{ "ModuleRelativePath", "Actors/ThrowableActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableActor_AttachToCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowableActor, nullptr, "AttachToCharacter", nullptr, nullptr, Z_Construct_UFunction_AThrowableActor_AttachToCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableActor_AttachToCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThrowableActor_AttachToCharacter_Statics::ThrowableActor_eventAttachToCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableActor_AttachToCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThrowableActor_AttachToCharacter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableActor_AttachToCharacter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThrowableActor_AttachToCharacter_Statics::ThrowableActor_eventAttachToCharacter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThrowableActor_AttachToCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThrowableActor_AttachToCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowableActor_GetThrowbaleOwnerCharacter_Statics
	{
		struct ThrowableActor_eventGetThrowbaleOwnerCharacter_Parms
		{
			ACharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThrowableActor_GetThrowbaleOwnerCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThrowableActor_eventGetThrowbaleOwnerCharacter_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowableActor_GetThrowbaleOwnerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableActor_GetThrowbaleOwnerCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableActor_GetThrowbaleOwnerCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/ThrowableActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableActor_GetThrowbaleOwnerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowableActor, nullptr, "GetThrowbaleOwnerCharacter", nullptr, nullptr, Z_Construct_UFunction_AThrowableActor_GetThrowbaleOwnerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableActor_GetThrowbaleOwnerCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThrowableActor_GetThrowbaleOwnerCharacter_Statics::ThrowableActor_eventGetThrowbaleOwnerCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableActor_GetThrowbaleOwnerCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThrowableActor_GetThrowbaleOwnerCharacter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableActor_GetThrowbaleOwnerCharacter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThrowableActor_GetThrowbaleOwnerCharacter_Statics::ThrowableActor_eventGetThrowbaleOwnerCharacter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThrowableActor_GetThrowbaleOwnerCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThrowableActor_GetThrowbaleOwnerCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThrowableActor_PredictThrow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableActor_PredictThrow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Throw" },
		{ "ModuleRelativePath", "Actors/ThrowableActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableActor_PredictThrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowableActor, nullptr, "PredictThrow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableActor_PredictThrow_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThrowableActor_PredictThrow_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AThrowableActor_PredictThrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThrowableActor_PredictThrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThrowableActor);
	UClass* Z_Construct_UClass_AThrowableActor_NoRegister()
	{
		return AThrowableActor::StaticClass();
	}
	struct Z_Construct_UClass_AThrowableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawPredictTrace_MetaData[];
#endif
		static void NewProp_bDrawPredictTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawPredictTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowableComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowableComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowableProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ThrowableProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatPredictThrowMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StatPredictThrowMeshComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThrowableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseInteractableActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AThrowableActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThrowableActor_ActiveThrow, "ActiveThrow" }, // 1453410190
		{ &Z_Construct_UFunction_AThrowableActor_AttachToCharacter, "AttachToCharacter" }, // 2896024690
		{ &Z_Construct_UFunction_AThrowableActor_GetThrowbaleOwnerCharacter, "GetThrowbaleOwnerCharacter" }, // 2244901041
		{ &Z_Construct_UFunction_AThrowableActor_PredictThrow, "PredictThrow" }, // 3845654431
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nUSTRUCT(BlueprintType)\nstruct UE5_3_EXAMPLE_API FPhysicComponentWrapper\n{\n\x09GENERATED_BODY()\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced, meta = (ShowOnlyInnerProperties, BlueprintSearchable = \"true\"))\n\x09UPhysicComponent* Template = nullptr;\n};\n*/" },
#endif
		{ "IncludePath", "Actors/ThrowableActor.h" },
		{ "ModuleRelativePath", "Actors/ThrowableActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct UE5_3_EXAMPLE_API FPhysicComponentWrapper\n{\n       GENERATED_BODY()\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced, meta = (ShowOnlyInnerProperties, BlueprintSearchable = \"true\"))\n       UPhysicComponent* Template = nullptr;\n};" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableActor_Statics::NewProp_bDrawPredictTrace_MetaData[] = {
		{ "ModuleRelativePath", "Actors/ThrowableActor.h" },
	};
#endif
	void Z_Construct_UClass_AThrowableActor_Statics::NewProp_bDrawPredictTrace_SetBit(void* Obj)
	{
		((AThrowableActor*)Obj)->bDrawPredictTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThrowableActor_Statics::NewProp_bDrawPredictTrace = { "bDrawPredictTrace", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AThrowableActor), &Z_Construct_UClass_AThrowableActor_Statics::NewProp_bDrawPredictTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableActor_Statics::NewProp_bDrawPredictTrace_MetaData), Z_Construct_UClass_AThrowableActor_Statics::NewProp_bDrawPredictTrace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableActor_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Actors/ThrowableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableActor_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableActor, OwnerCharacter), Z_Construct_UClass_ADefaultPlaybleCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableActor_Statics::NewProp_OwnerCharacter_MetaData), Z_Construct_UClass_AThrowableActor_Statics::NewProp_OwnerCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowableComp_MetaData[] = {
		{ "ModuleRelativePath", "Actors/ThrowableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowableComp = { "ThrowableComp", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableActor, ThrowableComp), Z_Construct_UClass_UThrowableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowableComp_MetaData), Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowableComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowableProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = \"Components\")\n//FPhysicComponentWrapper TemplatePhysicComponent;\n" },
#endif
		{ "ModuleRelativePath", "Actors/ThrowableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"Components\")\nFPhysicComponentWrapper TemplatePhysicComponent;" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowableProjectileClass = { "ThrowableProjectileClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableActor, ThrowableProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADefaultProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowableProjectileClass_MetaData), Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowableProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Actors/ThrowableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowMappingContext = { "ThrowMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableActor, ThrowMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowMappingContext_MetaData), Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Actors/ThrowableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowAction = { "ThrowAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableActor, ThrowAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowAction_MetaData), Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableActor_Statics::NewProp_StatPredictThrowMeshComp_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ThrowableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableActor_Statics::NewProp_StatPredictThrowMeshComp = { "StatPredictThrowMeshComp", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableActor, StatPredictThrowMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableActor_Statics::NewProp_StatPredictThrowMeshComp_MetaData), Z_Construct_UClass_AThrowableActor_Statics::NewProp_StatPredictThrowMeshComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThrowableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableActor_Statics::NewProp_bDrawPredictTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableActor_Statics::NewProp_OwnerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowableComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowableProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableActor_Statics::NewProp_ThrowAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableActor_Statics::NewProp_StatPredictThrowMeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThrowableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowableActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThrowableActor_Statics::ClassParams = {
		&AThrowableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AThrowableActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AThrowableActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AThrowableActor()
	{
		if (!Z_Registration_Info_UClass_AThrowableActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThrowableActor.OuterSingleton, Z_Construct_UClass_AThrowableActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThrowableActor.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<AThrowableActor>()
	{
		return AThrowableActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowableActor);
	AThrowableActor::~AThrowableActor() {}
	struct Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThrowableActor, AThrowableActor::StaticClass, TEXT("AThrowableActor"), &Z_Registration_Info_UClass_AThrowableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThrowableActor), 319209587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_1437995501(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowableActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
