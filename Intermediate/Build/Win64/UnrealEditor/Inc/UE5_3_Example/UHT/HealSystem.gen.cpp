// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/HealSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealSystem() {}
// Cross Module References
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseExtSystem();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AHealSystem();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AHealSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void AHealSystem::StaticRegisterNativesAHealSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHealSystem);
	UClass* Z_Construct_UClass_AHealSystem_NoRegister()
	{
		return AHealSystem::StaticClass();
	}
	struct Z_Construct_UClass_AHealSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseExtSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealSystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/HealSystem.h" },
		{ "ModuleRelativePath", "Systems/HealSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealSystem_Statics::ClassParams = {
		&AHealSystem::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHealSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_AHealSystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AHealSystem()
	{
		if (!Z_Registration_Info_UClass_AHealSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealSystem.OuterSingleton, Z_Construct_UClass_AHealSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHealSystem.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<AHealSystem>()
	{
		return AHealSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealSystem);
	AHealSystem::~AHealSystem() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_HealSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_HealSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHealSystem, AHealSystem::StaticClass, TEXT("AHealSystem"), &Z_Registration_Info_UClass_AHealSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealSystem), 2734188466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_HealSystem_h_964601573(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_HealSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_HealSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
