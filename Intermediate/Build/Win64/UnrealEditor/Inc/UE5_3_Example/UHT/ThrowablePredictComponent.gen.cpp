// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ThrowablePredictComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowablePredictComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UThrowablePredictComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UThrowablePredictComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void UThrowablePredictComponent::StaticRegisterNativesUThrowablePredictComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThrowablePredictComponent);
	UClass* Z_Construct_UClass_UThrowablePredictComponent_NoRegister()
	{
		return UThrowablePredictComponent::StaticClass();
	}
	struct Z_Construct_UClass_UThrowablePredictComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PathMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplinePredict_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplinePredict;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityOfProjectile_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityOfProjectile;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplinePredictMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplinePredictMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SplinePredictMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThrowablePredictComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEntityComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowablePredictComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowablePredictComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/ThrowablePredictComponent.h" },
		{ "ModuleRelativePath", "Components/ThrowablePredictComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_PathMesh_MetaData[] = {
		{ "Category", "ComponentMesh" },
		{ "ModuleRelativePath", "Components/ThrowablePredictComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_PathMesh = { "PathMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowablePredictComponent, PathMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_PathMesh_MetaData), Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_PathMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_SplinePredict_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/ThrowablePredictComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_SplinePredict = { "SplinePredict", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowablePredictComponent, SplinePredict), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_SplinePredict_MetaData), Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_SplinePredict_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_VelocityOfProjectile_MetaData[] = {
		{ "ModuleRelativePath", "Components/ThrowablePredictComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_VelocityOfProjectile = { "VelocityOfProjectile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowablePredictComponent, VelocityOfProjectile), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_VelocityOfProjectile_MetaData), Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_VelocityOfProjectile_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_SplinePredictMeshes_Inner = { "SplinePredictMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_SplinePredictMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/ThrowablePredictComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_SplinePredictMeshes = { "SplinePredictMeshes", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowablePredictComponent, SplinePredictMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_SplinePredictMeshes_MetaData), Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_SplinePredictMeshes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThrowablePredictComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_PathMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_SplinePredict,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_VelocityOfProjectile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_SplinePredictMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowablePredictComponent_Statics::NewProp_SplinePredictMeshes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThrowablePredictComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThrowablePredictComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UThrowablePredictComponent_Statics::ClassParams = {
		&UThrowablePredictComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UThrowablePredictComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UThrowablePredictComponent_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowablePredictComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UThrowablePredictComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowablePredictComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UThrowablePredictComponent()
	{
		if (!Z_Registration_Info_UClass_UThrowablePredictComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThrowablePredictComponent.OuterSingleton, Z_Construct_UClass_UThrowablePredictComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UThrowablePredictComponent.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UThrowablePredictComponent>()
	{
		return UThrowablePredictComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThrowablePredictComponent);
	UThrowablePredictComponent::~UThrowablePredictComponent() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowablePredictComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowablePredictComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UThrowablePredictComponent, UThrowablePredictComponent::StaticClass, TEXT("UThrowablePredictComponent"), &Z_Registration_Info_UClass_UThrowablePredictComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThrowablePredictComponent), 4127280550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowablePredictComponent_h_2281286543(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowablePredictComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowablePredictComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
