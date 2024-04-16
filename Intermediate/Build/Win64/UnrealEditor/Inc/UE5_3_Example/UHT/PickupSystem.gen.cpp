// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/PickupSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupSystem() {}
// Cross Module References
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseExtSystem();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_APickupSystem();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_APickupSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void APickupSystem::StaticRegisterNativesAPickupSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickupSystem);
	UClass* Z_Construct_UClass_APickupSystem_NoRegister()
	{
		return APickupSystem::StaticClass();
	}
	struct Z_Construct_UClass_APickupSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseExtSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupSystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/PickupSystem.h" },
		{ "ModuleRelativePath", "Systems/PickupSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupSystem_Statics::ClassParams = {
		&APickupSystem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_APickupSystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APickupSystem()
	{
		if (!Z_Registration_Info_UClass_APickupSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupSystem.OuterSingleton, Z_Construct_UClass_APickupSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickupSystem.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<APickupSystem>()
	{
		return APickupSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupSystem);
	APickupSystem::~APickupSystem() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickupSystem, APickupSystem::StaticClass, TEXT("APickupSystem"), &Z_Registration_Info_UClass_APickupSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupSystem), 1669157476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_253040817(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_PickupSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
