// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_3_Example/UE5_3_ExampleGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_3_ExampleGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AUE5_3_ExampleGameMode();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AUE5_3_ExampleGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void AUE5_3_ExampleGameMode::StaticRegisterNativesAUE5_3_ExampleGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5_3_ExampleGameMode);
	UClass* Z_Construct_UClass_AUE5_3_ExampleGameMode_NoRegister()
	{
		return AUE5_3_ExampleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5_3_ExampleGameMode.h" },
		{ "ModuleRelativePath", "UE5_3_ExampleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_3_ExampleGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::ClassParams = {
		&AUE5_3_ExampleGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AUE5_3_ExampleGameMode()
	{
		if (!Z_Registration_Info_UClass_AUE5_3_ExampleGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_3_ExampleGameMode.OuterSingleton, Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5_3_ExampleGameMode.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<AUE5_3_ExampleGameMode>()
	{
		return AUE5_3_ExampleGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_3_ExampleGameMode);
	AUE5_3_ExampleGameMode::~AUE5_3_ExampleGameMode() {}
	struct Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_3_ExampleGameMode, AUE5_3_ExampleGameMode::StaticClass, TEXT("AUE5_3_ExampleGameMode"), &Z_Registration_Info_UClass_AUE5_3_ExampleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_3_ExampleGameMode), 2701845699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleGameMode_h_3954510727(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_UE5_3_ExampleGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
