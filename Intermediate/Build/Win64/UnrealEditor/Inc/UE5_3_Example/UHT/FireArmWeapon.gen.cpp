// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/Weapon/FireArmWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireArmWeapon() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseInteractableActor();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AFireArmWeapon();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AFireArmWeapon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	DEFINE_FUNCTION(AFireArmWeapon::execAttachToCharacter)
	{
		P_GET_OBJECT(ACharacter,Z_Param_TargetCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachToCharacter(Z_Param_TargetCharacter);
		P_NATIVE_END;
	}
	void AFireArmWeapon::StaticRegisterNativesAFireArmWeapon()
	{
		UClass* Class = AFireArmWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachToCharacter", &AFireArmWeapon::execAttachToCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFireArmWeapon_AttachToCharacter_Statics
	{
		struct FireArmWeapon_eventAttachToCharacter_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFireArmWeapon_AttachToCharacter_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FireArmWeapon_eventAttachToCharacter_Parms, TargetCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFireArmWeapon_AttachToCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireArmWeapon_AttachToCharacter_Statics::NewProp_TargetCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFireArmWeapon_AttachToCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Throw" },
		{ "ModuleRelativePath", "Actors/Weapon/FireArmWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFireArmWeapon_AttachToCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFireArmWeapon, nullptr, "AttachToCharacter", nullptr, nullptr, Z_Construct_UFunction_AFireArmWeapon_AttachToCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFireArmWeapon_AttachToCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFireArmWeapon_AttachToCharacter_Statics::FireArmWeapon_eventAttachToCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFireArmWeapon_AttachToCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFireArmWeapon_AttachToCharacter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFireArmWeapon_AttachToCharacter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFireArmWeapon_AttachToCharacter_Statics::FireArmWeapon_eventAttachToCharacter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFireArmWeapon_AttachToCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFireArmWeapon_AttachToCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFireArmWeapon);
	UClass* Z_Construct_UClass_AFireArmWeapon_NoRegister()
	{
		return AFireArmWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AFireArmWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFireArmWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseInteractableActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFireArmWeapon_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFireArmWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFireArmWeapon_AttachToCharacter, "AttachToCharacter" }, // 825870705
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFireArmWeapon_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireArmWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Weapon/FireArmWeapon.h" },
		{ "ModuleRelativePath", "Actors/Weapon/FireArmWeapon.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireArmWeapon_Statics::NewProp_WeaponSkeletalMesh_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Weapon/FireArmWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireArmWeapon_Statics::NewProp_WeaponSkeletalMesh = { "WeaponSkeletalMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFireArmWeapon, WeaponSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireArmWeapon_Statics::NewProp_WeaponSkeletalMesh_MetaData), Z_Construct_UClass_AFireArmWeapon_Statics::NewProp_WeaponSkeletalMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFireArmWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireArmWeapon_Statics::NewProp_WeaponSkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFireArmWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFireArmWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFireArmWeapon_Statics::ClassParams = {
		&AFireArmWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFireArmWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFireArmWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireArmWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AFireArmWeapon_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFireArmWeapon_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFireArmWeapon()
	{
		if (!Z_Registration_Info_UClass_AFireArmWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFireArmWeapon.OuterSingleton, Z_Construct_UClass_AFireArmWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFireArmWeapon.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<AFireArmWeapon>()
	{
		return AFireArmWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFireArmWeapon);
	AFireArmWeapon::~AFireArmWeapon() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_FireArmWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_FireArmWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFireArmWeapon, AFireArmWeapon::StaticClass, TEXT("AFireArmWeapon"), &Z_Registration_Info_UClass_AFireArmWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFireArmWeapon), 1804713706U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_FireArmWeapon_h_2484546689(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_FireArmWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_FireArmWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
