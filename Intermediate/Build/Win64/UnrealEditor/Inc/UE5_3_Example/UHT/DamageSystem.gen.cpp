// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/DamageSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageSystem() {}
// Cross Module References
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseExtSystem();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ADamageSystem();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ADamageSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void ADamageSystem::StaticRegisterNativesADamageSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADamageSystem);
	UClass* Z_Construct_UClass_ADamageSystem_NoRegister()
	{
		return ADamageSystem::StaticClass();
	}
	struct Z_Construct_UClass_ADamageSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADamageSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseExtSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADamageSystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/DamageSystem.h" },
		{ "ModuleRelativePath", "Systems/DamageSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADamageSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADamageSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADamageSystem_Statics::ClassParams = {
		&ADamageSystem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADamageSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ADamageSystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADamageSystem()
	{
		if (!Z_Registration_Info_UClass_ADamageSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADamageSystem.OuterSingleton, Z_Construct_UClass_ADamageSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADamageSystem.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<ADamageSystem>()
	{
		return ADamageSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADamageSystem);
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_DamageSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_DamageSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADamageSystem, ADamageSystem::StaticClass, TEXT("ADamageSystem"), &Z_Registration_Info_UClass_ADamageSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADamageSystem), 3103959977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_DamageSystem_h_334849384(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_DamageSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_DamageSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
