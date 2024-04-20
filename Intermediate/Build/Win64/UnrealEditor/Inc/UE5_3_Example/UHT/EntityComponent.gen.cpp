// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/EntityComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntityComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AUE5_3_ExampleGameMode_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityComponent_NoRegister();
	UE5_3_EXAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FEntityComponentWrapper();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EntityComponentWrapper;
class UScriptStruct* FEntityComponentWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EntityComponentWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EntityComponentWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEntityComponentWrapper, (UObject*)Z_Construct_UPackage__Script_UE5_3_Example(), TEXT("EntityComponentWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_EntityComponentWrapper.OuterSingleton;
}
template<> UE5_3_EXAMPLE_API UScriptStruct* StaticStruct<FEntityComponentWrapper>()
{
	return FEntityComponentWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEntityComponentWrapper_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEntityComponentWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/EntityComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEntityComponentWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEntityComponentWrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEntityComponentWrapper_Statics::NewProp_Template_MetaData[] = {
		{ "BlueprintSearchable", "true" },
		{ "Category", "EntityComponentWrapper" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/EntityComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEntityComponentWrapper_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEntityComponentWrapper, Template), Z_Construct_UClass_UEntityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntityComponentWrapper_Statics::NewProp_Template_MetaData), Z_Construct_UScriptStruct_FEntityComponentWrapper_Statics::NewProp_Template_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEntityComponentWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEntityComponentWrapper_Statics::NewProp_Template,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEntityComponentWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
		nullptr,
		&NewStructOps,
		"EntityComponentWrapper",
		Z_Construct_UScriptStruct_FEntityComponentWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntityComponentWrapper_Statics::PropPointers),
		sizeof(FEntityComponentWrapper),
		alignof(FEntityComponentWrapper),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntityComponentWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEntityComponentWrapper_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntityComponentWrapper_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEntityComponentWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_EntityComponentWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EntityComponentWrapper.InnerSingleton, Z_Construct_UScriptStruct_FEntityComponentWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EntityComponentWrapper.InnerSingleton;
	}
	void UEntityComponent::StaticRegisterNativesUEntityComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntityComponent);
	UClass* Z_Construct_UClass_UEntityComponent_NoRegister()
	{
		return UEntityComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEntityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanBeReOwned_MetaData[];
#endif
		static void NewProp_CanBeReOwned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanBeReOwned;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalOwnerId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalOwnerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAttachedToCharacter_MetaData[];
#endif
		static void NewProp_IsAttachedToCharacter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAttachedToCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mGameMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mOwnerObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mOwnerObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEntityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Components/EntityComponent.h" },
		{ "ModuleRelativePath", "Components/EntityComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityComponent_Statics::NewProp_CanBeReOwned_MetaData[] = {
		{ "Category", "OwnerShip" },
		{ "ModuleRelativePath", "Components/EntityComponent.h" },
	};
#endif
	void Z_Construct_UClass_UEntityComponent_Statics::NewProp_CanBeReOwned_SetBit(void* Obj)
	{
		((UEntityComponent*)Obj)->CanBeReOwned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_CanBeReOwned = { "CanBeReOwned", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEntityComponent), &Z_Construct_UClass_UEntityComponent_Statics::NewProp_CanBeReOwned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::NewProp_CanBeReOwned_MetaData), Z_Construct_UClass_UEntityComponent_Statics::NewProp_CanBeReOwned_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityComponent_Statics::NewProp_OriginalOwnerId_MetaData[] = {
		{ "ModuleRelativePath", "Components/EntityComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_OriginalOwnerId = { "OriginalOwnerId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityComponent, OriginalOwnerId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::NewProp_OriginalOwnerId_MetaData), Z_Construct_UClass_UEntityComponent_Statics::NewProp_OriginalOwnerId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityComponent_Statics::NewProp_IsAttachedToCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Components/EntityComponent.h" },
	};
#endif
	void Z_Construct_UClass_UEntityComponent_Statics::NewProp_IsAttachedToCharacter_SetBit(void* Obj)
	{
		((UEntityComponent*)Obj)->IsAttachedToCharacter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_IsAttachedToCharacter = { "IsAttachedToCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEntityComponent), &Z_Construct_UClass_UEntityComponent_Statics::NewProp_IsAttachedToCharacter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::NewProp_IsAttachedToCharacter_MetaData), Z_Construct_UClass_UEntityComponent_Statics::NewProp_IsAttachedToCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityComponent_Statics::NewProp_mWorld_MetaData[] = {
		{ "ModuleRelativePath", "Components/EntityComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_mWorld = { "mWorld", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityComponent, mWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::NewProp_mWorld_MetaData), Z_Construct_UClass_UEntityComponent_Statics::NewProp_mWorld_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityComponent_Statics::NewProp_mGameMode_MetaData[] = {
		{ "ModuleRelativePath", "Components/EntityComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_mGameMode = { "mGameMode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityComponent, mGameMode), Z_Construct_UClass_AUE5_3_ExampleGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::NewProp_mGameMode_MetaData), Z_Construct_UClass_UEntityComponent_Statics::NewProp_mGameMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntityComponent_Statics::NewProp_mOwnerObject_MetaData[] = {
		{ "ModuleRelativePath", "Components/EntityComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_mOwnerObject = { "mOwnerObject", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityComponent, mOwnerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::NewProp_mOwnerObject_MetaData), Z_Construct_UClass_UEntityComponent_Statics::NewProp_mOwnerObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntityComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_CanBeReOwned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_OriginalOwnerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_IsAttachedToCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_mWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_mGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_mOwnerObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEntityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntityComponent_Statics::ClassParams = {
		&UEntityComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEntityComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEntityComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEntityComponent()
	{
		if (!Z_Registration_Info_UClass_UEntityComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntityComponent.OuterSingleton, Z_Construct_UClass_UEntityComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEntityComponent.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UEntityComponent>()
	{
		return UEntityComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEntityComponent);
	UEntityComponent::~UEntityComponent() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_EntityComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_EntityComponent_h_Statics::ScriptStructInfo[] = {
		{ FEntityComponentWrapper::StaticStruct, Z_Construct_UScriptStruct_FEntityComponentWrapper_Statics::NewStructOps, TEXT("EntityComponentWrapper"), &Z_Registration_Info_UScriptStruct_EntityComponentWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEntityComponentWrapper), 4286559399U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_EntityComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEntityComponent, UEntityComponent::StaticClass, TEXT("UEntityComponent"), &Z_Registration_Info_UClass_UEntityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityComponent), 973262950U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_EntityComponent_h_1603127032(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_EntityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_EntityComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_EntityComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Components_EntityComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
