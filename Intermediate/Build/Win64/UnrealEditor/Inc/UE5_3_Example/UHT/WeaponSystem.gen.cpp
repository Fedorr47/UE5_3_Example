// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/WeaponSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponSystem() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseExtSystem();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AWeaponSystem();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AWeaponSystem_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UActionsHolder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void AWeaponSystem::StaticRegisterNativesAWeaponSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponSystem);
	UClass* Z_Construct_UClass_AWeaponSystem_NoRegister()
	{
		return AWeaponSystem::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContexts_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContexts_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingContexts_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MappingContexts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseExtSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponSystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/WeaponSystem.h" },
		{ "ModuleRelativePath", "Systems/WeaponSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponSystem_Statics::NewProp_MappingContexts_ValueProp = { "MappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UActionsHolder_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponSystem_Statics::NewProp_MappingContexts_Key_KeyProp = { "MappingContexts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponSystem_Statics::NewProp_MappingContexts_MetaData[] = {
		{ "ModuleRelativePath", "Systems/WeaponSystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWeaponSystem_Statics::NewProp_MappingContexts = { "MappingContexts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponSystem, MappingContexts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponSystem_Statics::NewProp_MappingContexts_MetaData), Z_Construct_UClass_AWeaponSystem_Statics::NewProp_MappingContexts_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponSystem_Statics::NewProp_MappingContexts_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponSystem_Statics::NewProp_MappingContexts_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponSystem_Statics::NewProp_MappingContexts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponSystem_Statics::ClassParams = {
		&AWeaponSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeaponSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponSystem_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponSystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponSystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWeaponSystem()
	{
		if (!Z_Registration_Info_UClass_AWeaponSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponSystem.OuterSingleton, Z_Construct_UClass_AWeaponSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeaponSystem.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<AWeaponSystem>()
	{
		return AWeaponSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponSystem);
	AWeaponSystem::~AWeaponSystem() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_WeaponSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_WeaponSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponSystem, AWeaponSystem::StaticClass, TEXT("AWeaponSystem"), &Z_Registration_Info_UClass_AWeaponSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponSystem), 2858881212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_WeaponSystem_h_4239947334(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_WeaponSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_WeaponSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
