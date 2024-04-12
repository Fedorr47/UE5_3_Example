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
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseInteractableActor();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AFireArmWeapon();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AFireArmWeapon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void AFireArmWeapon::StaticRegisterNativesAFireArmWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFireArmWeapon);
	UClass* Z_Construct_UClass_AFireArmWeapon_NoRegister()
	{
		return AFireArmWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AFireArmWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFireArmWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseInteractableActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFireArmWeapon_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireArmWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Weapon/FireArmWeapon.h" },
		{ "ModuleRelativePath", "Actors/Weapon/FireArmWeapon.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFireArmWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFireArmWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFireArmWeapon_Statics::ClassParams = {
		&AFireArmWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireArmWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AFireArmWeapon_Statics::Class_MetaDataParams)
	};
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
	struct Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_FireArmWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_FireArmWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFireArmWeapon, AFireArmWeapon::StaticClass, TEXT("AFireArmWeapon"), &Z_Registration_Info_UClass_AFireArmWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFireArmWeapon), 359620000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_FireArmWeapon_h_2096392100(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_FireArmWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_FireArmWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
