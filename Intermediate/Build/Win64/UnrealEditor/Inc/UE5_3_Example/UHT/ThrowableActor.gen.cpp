// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/Weapon/ThrowableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowableActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseInteractableActor();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AThrowableActor();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AThrowableActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
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
			{ "AttachToCharacter", &AThrowableActor::execAttachToCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "ModuleRelativePath", "Actors/Weapon/ThrowableActor.h" },
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThrowableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseInteractableActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AThrowableActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThrowableActor_AttachToCharacter, "AttachToCharacter" }, // 3069457897
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Weapon/ThrowableActor.h" },
		{ "ModuleRelativePath", "Actors/Weapon/ThrowableActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThrowableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowableActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThrowableActor_Statics::ClassParams = {
		&AThrowableActor::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AThrowableActor_Statics::Class_MetaDataParams)
	};
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
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_ThrowableActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_ThrowableActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThrowableActor, AThrowableActor::StaticClass, TEXT("AThrowableActor"), &Z_Registration_Info_UClass_AThrowableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThrowableActor), 1312727784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_ThrowableActor_h_645795025(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_ThrowableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_ThrowableActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
