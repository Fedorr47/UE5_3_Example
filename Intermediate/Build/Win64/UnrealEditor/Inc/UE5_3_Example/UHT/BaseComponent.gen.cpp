// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_3_Example/BaseComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AUE5_3_ExampleGameMode_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UBaseComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UBaseComponent_NoRegister();
	UE5_3_EXAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseComponentWrapper();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BaseComponentWrapper;
class UScriptStruct* FBaseComponentWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BaseComponentWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BaseComponentWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseComponentWrapper, (UObject*)Z_Construct_UPackage__Script_UE5_3_Example(), TEXT("BaseComponentWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_BaseComponentWrapper.OuterSingleton;
}
template<> UE5_3_EXAMPLE_API UScriptStruct* StaticStruct<FBaseComponentWrapper>()
{
	return FBaseComponentWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBaseComponentWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Template;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseComponentWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BaseComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseComponentWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseComponentWrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseComponentWrapper_Statics::NewProp_Template_MetaData[] = {
		{ "BlueprintSearchable", "true" },
		{ "Category", "BaseComponentWrapper" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBaseComponentWrapper_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseComponentWrapper, Template), Z_Construct_UClass_UBaseComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseComponentWrapper_Statics::NewProp_Template_MetaData), Z_Construct_UScriptStruct_FBaseComponentWrapper_Statics::NewProp_Template_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseComponentWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseComponentWrapper_Statics::NewProp_Template,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseComponentWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
		nullptr,
		&NewStructOps,
		"BaseComponentWrapper",
		Z_Construct_UScriptStruct_FBaseComponentWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseComponentWrapper_Statics::PropPointers),
		sizeof(FBaseComponentWrapper),
		alignof(FBaseComponentWrapper),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseComponentWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBaseComponentWrapper_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseComponentWrapper_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBaseComponentWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_BaseComponentWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BaseComponentWrapper.InnerSingleton, Z_Construct_UScriptStruct_FBaseComponentWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BaseComponentWrapper.InnerSingleton;
	}
	void UBaseComponent::StaticRegisterNativesUBaseComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseComponent);
	UClass* Z_Construct_UClass_UBaseComponent_NoRegister()
	{
		return UBaseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBaseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mGameMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mOwnerId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_mOwnerId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseComponent.h" },
		{ "ModuleRelativePath", "BaseComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseComponent_Statics::NewProp_mWorld_MetaData[] = {
		{ "ModuleRelativePath", "BaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseComponent_Statics::NewProp_mWorld = { "mWorld", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseComponent, mWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseComponent_Statics::NewProp_mWorld_MetaData), Z_Construct_UClass_UBaseComponent_Statics::NewProp_mWorld_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseComponent_Statics::NewProp_mGameMode_MetaData[] = {
		{ "ModuleRelativePath", "BaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseComponent_Statics::NewProp_mGameMode = { "mGameMode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseComponent, mGameMode), Z_Construct_UClass_AUE5_3_ExampleGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseComponent_Statics::NewProp_mGameMode_MetaData), Z_Construct_UClass_UBaseComponent_Statics::NewProp_mGameMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseComponent_Statics::NewProp_mOwnerId_MetaData[] = {
		{ "ModuleRelativePath", "BaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UBaseComponent_Statics::NewProp_mOwnerId = { "mOwnerId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseComponent, mOwnerId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseComponent_Statics::NewProp_mOwnerId_MetaData), Z_Construct_UClass_UBaseComponent_Statics::NewProp_mOwnerId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseComponent_Statics::NewProp_mWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseComponent_Statics::NewProp_mGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseComponent_Statics::NewProp_mOwnerId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseComponent_Statics::ClassParams = {
		&UBaseComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseComponent_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBaseComponent()
	{
		if (!Z_Registration_Info_UClass_UBaseComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseComponent.OuterSingleton, Z_Construct_UClass_UBaseComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseComponent.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UBaseComponent>()
	{
		return UBaseComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseComponent);
	UBaseComponent::~UBaseComponent() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_BaseComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_BaseComponent_h_Statics::ScriptStructInfo[] = {
		{ FBaseComponentWrapper::StaticStruct, Z_Construct_UScriptStruct_FBaseComponentWrapper_Statics::NewStructOps, TEXT("BaseComponentWrapper"), &Z_Registration_Info_UScriptStruct_BaseComponentWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseComponentWrapper), 2961476770U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_BaseComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseComponent, UBaseComponent::StaticClass, TEXT("UBaseComponent"), &Z_Registration_Info_UClass_UBaseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseComponent), 1890631779U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_BaseComponent_h_4251676144(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_BaseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_BaseComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_BaseComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_BaseComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
