// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/AttachedSkeletalMeshSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttachedSkeletalMeshSystem() {}
// Cross Module References
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AAttachedSkeletalMeshSystem();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AAttachedSkeletalMeshSystem_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseExtSystem();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void AAttachedSkeletalMeshSystem::StaticRegisterNativesAAttachedSkeletalMeshSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAttachedSkeletalMeshSystem);
	UClass* Z_Construct_UClass_AAttachedSkeletalMeshSystem_NoRegister()
	{
		return AAttachedSkeletalMeshSystem::StaticClass();
	}
	struct Z_Construct_UClass_AAttachedSkeletalMeshSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAttachedSkeletalMeshSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseExtSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAttachedSkeletalMeshSystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttachedSkeletalMeshSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/AttachedSkeletalMeshSystem.h" },
		{ "ModuleRelativePath", "Systems/AttachedSkeletalMeshSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAttachedSkeletalMeshSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttachedSkeletalMeshSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAttachedSkeletalMeshSystem_Statics::ClassParams = {
		&AAttachedSkeletalMeshSystem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAttachedSkeletalMeshSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_AAttachedSkeletalMeshSystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAttachedSkeletalMeshSystem()
	{
		if (!Z_Registration_Info_UClass_AAttachedSkeletalMeshSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAttachedSkeletalMeshSystem.OuterSingleton, Z_Construct_UClass_AAttachedSkeletalMeshSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAttachedSkeletalMeshSystem.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<AAttachedSkeletalMeshSystem>()
	{
		return AAttachedSkeletalMeshSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAttachedSkeletalMeshSystem);
	AAttachedSkeletalMeshSystem::~AAttachedSkeletalMeshSystem() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_AttachedSkeletalMeshSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_AttachedSkeletalMeshSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAttachedSkeletalMeshSystem, AAttachedSkeletalMeshSystem::StaticClass, TEXT("AAttachedSkeletalMeshSystem"), &Z_Registration_Info_UClass_AAttachedSkeletalMeshSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAttachedSkeletalMeshSystem), 1494852154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_AttachedSkeletalMeshSystem_h_4211437126(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_AttachedSkeletalMeshSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_AttachedSkeletalMeshSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
