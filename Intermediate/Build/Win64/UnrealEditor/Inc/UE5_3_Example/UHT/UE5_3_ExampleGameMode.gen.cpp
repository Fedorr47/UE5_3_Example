// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mods/UE5_3_ExampleGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_3_ExampleGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AUE5_3_ExampleGameMode();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AUE5_3_ExampleGameMode_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UMessageQueue_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneralMessageQueue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneralMessageQueue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
		{ "IncludePath", "Mods/UE5_3_ExampleGameMode.h" },
		{ "ModuleRelativePath", "Mods/UE5_3_ExampleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::NewProp_GeneralMessageQueue_MetaData[] = {
		{ "ModuleRelativePath", "Mods/UE5_3_ExampleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::NewProp_GeneralMessageQueue = { "GeneralMessageQueue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE5_3_ExampleGameMode, GeneralMessageQueue), Z_Construct_UClass_UMessageQueue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::NewProp_GeneralMessageQueue_MetaData), Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::NewProp_GeneralMessageQueue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::NewProp_GeneralMessageQueue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_3_ExampleGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::ClassParams = {
		&AUE5_3_ExampleGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_3_ExampleGameMode_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Mods_UE5_3_ExampleGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Mods_UE5_3_ExampleGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_3_ExampleGameMode, AUE5_3_ExampleGameMode::StaticClass, TEXT("AUE5_3_ExampleGameMode"), &Z_Registration_Info_UClass_AUE5_3_ExampleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_3_ExampleGameMode), 4012924567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Mods_UE5_3_ExampleGameMode_h_2976701854(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Mods_UE5_3_ExampleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Mods_UE5_3_ExampleGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
