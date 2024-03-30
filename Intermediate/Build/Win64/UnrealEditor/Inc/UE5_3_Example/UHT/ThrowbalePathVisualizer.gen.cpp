// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/ThrowbalePathVisualizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowbalePathVisualizer() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AThrowbalePathVisualizer();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AThrowbalePathVisualizer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	DEFINE_FUNCTION(AThrowbalePathVisualizer::execVisualizePath)
	{
		P_GET_STRUCT(FVector,Z_Param_StartLocation);
		P_GET_STRUCT(FVector,Z_Param_LaunchVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VisualizePath(Z_Param_StartLocation,Z_Param_LaunchVelocity);
		P_NATIVE_END;
	}
	void AThrowbalePathVisualizer::StaticRegisterNativesAThrowbalePathVisualizer()
	{
		UClass* Class = AThrowbalePathVisualizer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "VisualizePath", &AThrowbalePathVisualizer::execVisualizePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AThrowbalePathVisualizer_VisualizePath_Statics
	{
		struct ThrowbalePathVisualizer_eventVisualizePath_Parms
		{
			FVector StartLocation;
			FVector LaunchVelocity;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AThrowbalePathVisualizer_VisualizePath_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThrowbalePathVisualizer_eventVisualizePath_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AThrowbalePathVisualizer_VisualizePath_Statics::NewProp_LaunchVelocity = { "LaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThrowbalePathVisualizer_eventVisualizePath_Parms, LaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowbalePathVisualizer_VisualizePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowbalePathVisualizer_VisualizePath_Statics::NewProp_StartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowbalePathVisualizer_VisualizePath_Statics::NewProp_LaunchVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowbalePathVisualizer_VisualizePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/ThrowbalePathVisualizer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowbalePathVisualizer_VisualizePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowbalePathVisualizer, nullptr, "VisualizePath", nullptr, nullptr, Z_Construct_UFunction_AThrowbalePathVisualizer_VisualizePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowbalePathVisualizer_VisualizePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThrowbalePathVisualizer_VisualizePath_Statics::ThrowbalePathVisualizer_eventVisualizePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowbalePathVisualizer_VisualizePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThrowbalePathVisualizer_VisualizePath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowbalePathVisualizer_VisualizePath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThrowbalePathVisualizer_VisualizePath_Statics::ThrowbalePathVisualizer_eventVisualizePath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThrowbalePathVisualizer_VisualizePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThrowbalePathVisualizer_VisualizePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThrowbalePathVisualizer);
	UClass* Z_Construct_UClass_AThrowbalePathVisualizer_NoRegister()
	{
		return AThrowbalePathVisualizer::StaticClass();
	}
	struct Z_Construct_UClass_AThrowbalePathVisualizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshForPath_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshForPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThrowbalePathVisualizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowbalePathVisualizer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AThrowbalePathVisualizer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThrowbalePathVisualizer_VisualizePath, "VisualizePath" }, // 18677968
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowbalePathVisualizer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowbalePathVisualizer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/ThrowbalePathVisualizer.h" },
		{ "ModuleRelativePath", "Actors/ThrowbalePathVisualizer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowbalePathVisualizer_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "Category", "ThrowbalePathVisualizer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ThrowbalePathVisualizer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowbalePathVisualizer_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowbalePathVisualizer, SplineComponent), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowbalePathVisualizer_Statics::NewProp_SplineComponent_MetaData), Z_Construct_UClass_AThrowbalePathVisualizer_Statics::NewProp_SplineComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowbalePathVisualizer_Statics::NewProp_MeshForPath_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ThrowbalePathVisualizer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowbalePathVisualizer_Statics::NewProp_MeshForPath = { "MeshForPath", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowbalePathVisualizer, MeshForPath), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowbalePathVisualizer_Statics::NewProp_MeshForPath_MetaData), Z_Construct_UClass_AThrowbalePathVisualizer_Statics::NewProp_MeshForPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThrowbalePathVisualizer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowbalePathVisualizer_Statics::NewProp_SplineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowbalePathVisualizer_Statics::NewProp_MeshForPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThrowbalePathVisualizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowbalePathVisualizer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThrowbalePathVisualizer_Statics::ClassParams = {
		&AThrowbalePathVisualizer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AThrowbalePathVisualizer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AThrowbalePathVisualizer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowbalePathVisualizer_Statics::Class_MetaDataParams), Z_Construct_UClass_AThrowbalePathVisualizer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowbalePathVisualizer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AThrowbalePathVisualizer()
	{
		if (!Z_Registration_Info_UClass_AThrowbalePathVisualizer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThrowbalePathVisualizer.OuterSingleton, Z_Construct_UClass_AThrowbalePathVisualizer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThrowbalePathVisualizer.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<AThrowbalePathVisualizer>()
	{
		return AThrowbalePathVisualizer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowbalePathVisualizer);
	AThrowbalePathVisualizer::~AThrowbalePathVisualizer() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowbalePathVisualizer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowbalePathVisualizer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThrowbalePathVisualizer, AThrowbalePathVisualizer::StaticClass, TEXT("AThrowbalePathVisualizer"), &Z_Registration_Info_UClass_AThrowbalePathVisualizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThrowbalePathVisualizer), 2286069470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowbalePathVisualizer_h_1348552145(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowbalePathVisualizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Actors_ThrowbalePathVisualizer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
