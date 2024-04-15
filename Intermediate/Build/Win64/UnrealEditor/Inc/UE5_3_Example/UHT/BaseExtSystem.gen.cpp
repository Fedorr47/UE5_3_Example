// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/BaseExtSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseExtSystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseExtSystem();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseExtSystem_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void ABaseExtSystem::StaticRegisterNativesABaseExtSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseExtSystem);
	UClass* Z_Construct_UClass_ABaseExtSystem_NoRegister()
	{
		return ABaseExtSystem::StaticClass();
	}
	struct Z_Construct_UClass_ABaseExtSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mEntityManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mEntityManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mGameMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseExtSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseExtSystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseExtSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/BaseExtSystem.h" },
		{ "ModuleRelativePath", "Systems/BaseExtSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mEntityManager_MetaData[] = {
		{ "ModuleRelativePath", "Systems/BaseExtSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mEntityManager = { "mEntityManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseExtSystem, mEntityManager), Z_Construct_UClass_UEntityManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mEntityManager_MetaData), Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mEntityManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mGameMode_MetaData[] = {
		{ "ModuleRelativePath", "Systems/BaseExtSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mGameMode = { "mGameMode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseExtSystem, mGameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mGameMode_MetaData), Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mGameMode_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseExtSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mEntityManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseExtSystem_Statics::NewProp_mGameMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseExtSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseExtSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseExtSystem_Statics::ClassParams = {
		&ABaseExtSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseExtSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseExtSystem_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseExtSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseExtSystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseExtSystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABaseExtSystem()
	{
		if (!Z_Registration_Info_UClass_ABaseExtSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseExtSystem.OuterSingleton, Z_Construct_UClass_ABaseExtSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseExtSystem.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<ABaseExtSystem>()
	{
		return ABaseExtSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseExtSystem);
	ABaseExtSystem::~ABaseExtSystem() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseExtSystem, ABaseExtSystem::StaticClass, TEXT("ABaseExtSystem"), &Z_Registration_Info_UClass_ABaseExtSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseExtSystem), 2177600384U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_3061954808(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_BaseExtSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
