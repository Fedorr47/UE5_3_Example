// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_3_Example/BaseInteractableActor.h"
#include "UE5_3_Example/BaseComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseInteractableActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseInteractableActor();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseInteractableActor_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AUE5_3_ExampleGameMode_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UBaseComponent_NoRegister();
	UE5_3_EXAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseComponentWrapper();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void ABaseInteractableActor::StaticRegisterNativesABaseInteractableActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseInteractableActor);
	UClass* Z_Construct_UClass_ABaseInteractableActor_NoRegister()
	{
		return ABaseInteractableActor::StaticClass();
	}
	struct Z_Construct_UClass_ABaseInteractableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mOwnerId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_mOwnerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mGameMode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CreatedComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StatMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachedComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachedComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseInteractableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseInteractableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseInteractableActor.h" },
		{ "ModuleRelativePath", "BaseInteractableActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mOwnerId_MetaData[] = {
		{ "Category", "BaseInteractableActor" },
		{ "ModuleRelativePath", "BaseInteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mOwnerId = { "mOwnerId", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractableActor, mOwnerId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mOwnerId_MetaData), Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mOwnerId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mWorld_MetaData[] = {
		{ "ModuleRelativePath", "BaseInteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mWorld = { "mWorld", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractableActor, mWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mWorld_MetaData), Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mWorld_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mGameMode_MetaData[] = {
		{ "ModuleRelativePath", "BaseInteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mGameMode = { "mGameMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractableActor, mGameMode), Z_Construct_UClass_AUE5_3_ExampleGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mGameMode_MetaData), Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mGameMode_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CreatedComponents_Inner = { "CreatedComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBaseComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CreatedComponents_MetaData[] = {
		{ "ModuleRelativePath", "BaseInteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CreatedComponents = { "CreatedComponents", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractableActor, CreatedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CreatedComponents_MetaData), Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CreatedComponents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CameraManager_MetaData[] = {
		{ "ModuleRelativePath", "BaseInteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CameraManager = { "CameraManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractableActor, CameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CameraManager_MetaData), Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CameraManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_StatMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseInteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_StatMesh = { "StatMesh", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractableActor, StatMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_StatMesh_MetaData), Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_StatMesh_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_AttachedComponents_Inner = { "AttachedComponents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseComponentWrapper, METADATA_PARAMS(0, nullptr) }; // 2961476770
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_AttachedComponents_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, Category = Components)\n" },
#endif
		{ "ModuleRelativePath", "BaseInteractableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, Category = Components)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_AttachedComponents = { "AttachedComponents", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractableActor, AttachedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_AttachedComponents_MetaData), Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_AttachedComponents_MetaData) }; // 2961476770
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseInteractableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mOwnerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_mGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CreatedComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CreatedComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_CameraManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_StatMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_AttachedComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractableActor_Statics::NewProp_AttachedComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseInteractableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseInteractableActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseInteractableActor_Statics::ClassParams = {
		&ABaseInteractableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseInteractableActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseInteractableActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractableActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABaseInteractableActor()
	{
		if (!Z_Registration_Info_UClass_ABaseInteractableActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseInteractableActor.OuterSingleton, Z_Construct_UClass_ABaseInteractableActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseInteractableActor.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<ABaseInteractableActor>()
	{
		return ABaseInteractableActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseInteractableActor);
	ABaseInteractableActor::~ABaseInteractableActor() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_BaseInteractableActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_BaseInteractableActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseInteractableActor, ABaseInteractableActor::StaticClass, TEXT("ABaseInteractableActor"), &Z_Registration_Info_UClass_ABaseInteractableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseInteractableActor), 2548501641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_BaseInteractableActor_h_1670860899(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_BaseInteractableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_BaseInteractableActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
