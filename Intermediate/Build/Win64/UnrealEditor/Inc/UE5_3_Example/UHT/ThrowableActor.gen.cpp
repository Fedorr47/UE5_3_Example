// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/Weapon/ThrowableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowableActor() {}
// Cross Module References
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseInteractableActor();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AThrowableActor();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AThrowableActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void AThrowableActor::StaticRegisterNativesAThrowableActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThrowableActor);
	UClass* Z_Construct_UClass_AThrowableActor_NoRegister()
	{
		return AThrowableActor::StaticClass();
	}
	struct Z_Construct_UClass_AThrowableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThrowableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseInteractableActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Weapon/ThrowableActor.h" },
		{ "ModuleRelativePath", "Actors/Weapon/ThrowableActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThrowableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowableActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThrowableActor_Statics::ClassParams = {
		&AThrowableActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AThrowableActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AThrowableActor()
	{
		if (!Z_Registration_Info_UClass_AThrowableActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThrowableActor.OuterSingleton, Z_Construct_UClass_AThrowableActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThrowableActor.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<AThrowableActor>()
	{
		return AThrowableActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowableActor);
	AThrowableActor::~AThrowableActor() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_ThrowableActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_ThrowableActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThrowableActor, AThrowableActor::StaticClass, TEXT("AThrowableActor"), &Z_Registration_Info_UClass_AThrowableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThrowableActor), 1557336934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_ThrowableActor_h_2592012218(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_ThrowableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_Weapon_ThrowableActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
