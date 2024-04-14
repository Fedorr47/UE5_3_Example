// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mods/MenuGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AMenuGameMode();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AMenuGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void AMenuGameMode::StaticRegisterNativesAMenuGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMenuGameMode);
	UClass* Z_Construct_UClass_AMenuGameMode_NoRegister()
	{
		return AMenuGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMenuGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMenuGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMenuGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMenuGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Mods/MenuGameMode.h" },
		{ "ModuleRelativePath", "Mods/MenuGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMenuGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMenuGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMenuGameMode_Statics::ClassParams = {
		&AMenuGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMenuGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMenuGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMenuGameMode()
	{
		if (!Z_Registration_Info_UClass_AMenuGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMenuGameMode.OuterSingleton, Z_Construct_UClass_AMenuGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMenuGameMode.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<AMenuGameMode>()
	{
		return AMenuGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMenuGameMode);
	AMenuGameMode::~AMenuGameMode() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Mods_MenuGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Mods_MenuGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMenuGameMode, AMenuGameMode::StaticClass, TEXT("AMenuGameMode"), &Z_Registration_Info_UClass_AMenuGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMenuGameMode), 1647737657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Mods_MenuGameMode_h_4106319958(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Mods_MenuGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Mods_MenuGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
