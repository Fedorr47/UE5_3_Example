// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/ThrowableSystem.h"
#include "SystemQueue/EntityManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowableSystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseExtSystem();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AThrowableSystem();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_AThrowableSystem_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UActionsHolder();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UActionsHolder_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityComponent_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UThrowableTypeHolder();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UThrowableTypeHolder_NoRegister();
	UE5_3_EXAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FEntity();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	void UThrowableTypeHolder::StaticRegisterNativesUThrowableTypeHolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThrowableTypeHolder);
	UClass* Z_Construct_UClass_UThrowableTypeHolder_NoRegister()
	{
		return UThrowableTypeHolder::StaticClass();
	}
	struct Z_Construct_UClass_UThrowableTypeHolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThrowableTypeHolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableTypeHolder_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableTypeHolder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/ThrowableSystem.h" },
		{ "ModuleRelativePath", "Systems/ThrowableSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThrowableTypeHolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThrowableTypeHolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UThrowableTypeHolder_Statics::ClassParams = {
		&UThrowableTypeHolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableTypeHolder_Statics::Class_MetaDataParams), Z_Construct_UClass_UThrowableTypeHolder_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UThrowableTypeHolder()
	{
		if (!Z_Registration_Info_UClass_UThrowableTypeHolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThrowableTypeHolder.OuterSingleton, Z_Construct_UClass_UThrowableTypeHolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UThrowableTypeHolder.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UThrowableTypeHolder>()
	{
		return UThrowableTypeHolder::StaticClass();
	}
	UThrowableTypeHolder::UThrowableTypeHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThrowableTypeHolder);
	UThrowableTypeHolder::~UThrowableTypeHolder() {}
	void UActionsHolder::StaticRegisterNativesUActionsHolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionsHolder);
	UClass* Z_Construct_UClass_UActionsHolder_NoRegister()
	{
		return UActionsHolder::StaticClass();
	}
	struct Z_Construct_UClass_UActionsHolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionsHolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionsHolder_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionsHolder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/ThrowableSystem.h" },
		{ "ModuleRelativePath", "Systems/ThrowableSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionsHolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionsHolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionsHolder_Statics::ClassParams = {
		&UActionsHolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionsHolder_Statics::Class_MetaDataParams), Z_Construct_UClass_UActionsHolder_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UActionsHolder()
	{
		if (!Z_Registration_Info_UClass_UActionsHolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActionsHolder.OuterSingleton, Z_Construct_UClass_UActionsHolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActionsHolder.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UActionsHolder>()
	{
		return UActionsHolder::StaticClass();
	}
	UActionsHolder::UActionsHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionsHolder);
	UActionsHolder::~UActionsHolder() {}
	DEFINE_FUNCTION(AThrowableSystem::execComponentWasAdded)
	{
		P_GET_STRUCT_REF(FEntity,Z_Param_Out_Entity);
		P_GET_OBJECT(UEntityComponent,Z_Param_EntityComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComponentWasAdded(Z_Param_Out_Entity,Z_Param_EntityComponent);
		P_NATIVE_END;
	}
	void AThrowableSystem::StaticRegisterNativesAThrowableSystem()
	{
		UClass* Class = AThrowableSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComponentWasAdded", &AThrowableSystem::execComponentWasAdded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics
	{
		struct ThrowableSystem_eventComponentWasAdded_Parms
		{
			FEntity Entity;
			UEntityComponent* EntityComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entity;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EntityComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics::NewProp_Entity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThrowableSystem_eventComponentWasAdded_Parms, Entity), Z_Construct_UScriptStruct_FEntity, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics::NewProp_Entity_MetaData), Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics::NewProp_Entity_MetaData) }; // 904214179
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics::NewProp_EntityComponent = { "EntityComponent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThrowableSystem_eventComponentWasAdded_Parms, EntityComponent), Z_Construct_UClass_UEntityComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics::NewProp_EntityComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Systems/ThrowableSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowableSystem, nullptr, "ComponentWasAdded", nullptr, nullptr, Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics::ThrowableSystem_eventComponentWasAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics::ThrowableSystem_eventComponentWasAdded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThrowableSystem);
	UClass* Z_Construct_UClass_AThrowableSystem_NoRegister()
	{
		return AThrowableSystem::StaticClass();
	}
	struct Z_Construct_UClass_AThrowableSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShouldPredictPath_MetaData[];
#endif
		static void NewProp_ShouldPredictPath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldPredictPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnceThrowPerTime_MetaData[];
#endif
		static void NewProp_OnceThrowPerTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OnceThrowPerTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitForNextTrow_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaitForNextTrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTimeAfterThrow_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTimeAfterThrow;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowableComponents_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThrowableComponents_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowableComponents_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ThrowableComponents;
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
	UObject* (*const Z_Construct_UClass_AThrowableSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseExtSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableSystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AThrowableSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThrowableSystem_ComponentWasAdded, "ComponentWasAdded" }, // 2380137705
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableSystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/ThrowableSystem.h" },
		{ "ModuleRelativePath", "Systems/ThrowableSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableSystem_Statics::NewProp_ShouldPredictPath_MetaData[] = {
		{ "ModuleRelativePath", "Systems/ThrowableSystem.h" },
	};
#endif
	void Z_Construct_UClass_AThrowableSystem_Statics::NewProp_ShouldPredictPath_SetBit(void* Obj)
	{
		((AThrowableSystem*)Obj)->ShouldPredictPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThrowableSystem_Statics::NewProp_ShouldPredictPath = { "ShouldPredictPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AThrowableSystem), &Z_Construct_UClass_AThrowableSystem_Statics::NewProp_ShouldPredictPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableSystem_Statics::NewProp_ShouldPredictPath_MetaData), Z_Construct_UClass_AThrowableSystem_Statics::NewProp_ShouldPredictPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableSystem_Statics::NewProp_OnceThrowPerTime_MetaData[] = {
		{ "ModuleRelativePath", "Systems/ThrowableSystem.h" },
	};
#endif
	void Z_Construct_UClass_AThrowableSystem_Statics::NewProp_OnceThrowPerTime_SetBit(void* Obj)
	{
		((AThrowableSystem*)Obj)->OnceThrowPerTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThrowableSystem_Statics::NewProp_OnceThrowPerTime = { "OnceThrowPerTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AThrowableSystem), &Z_Construct_UClass_AThrowableSystem_Statics::NewProp_OnceThrowPerTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableSystem_Statics::NewProp_OnceThrowPerTime_MetaData), Z_Construct_UClass_AThrowableSystem_Statics::NewProp_OnceThrowPerTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableSystem_Statics::NewProp_WaitForNextTrow_MetaData[] = {
		{ "ModuleRelativePath", "Systems/ThrowableSystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrowableSystem_Statics::NewProp_WaitForNextTrow = { "WaitForNextTrow", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableSystem, WaitForNextTrow), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableSystem_Statics::NewProp_WaitForNextTrow_MetaData), Z_Construct_UClass_AThrowableSystem_Statics::NewProp_WaitForNextTrow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableSystem_Statics::NewProp_CurrentTimeAfterThrow_MetaData[] = {
		{ "ModuleRelativePath", "Systems/ThrowableSystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrowableSystem_Statics::NewProp_CurrentTimeAfterThrow = { "CurrentTimeAfterThrow", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableSystem, CurrentTimeAfterThrow), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableSystem_Statics::NewProp_CurrentTimeAfterThrow_MetaData), Z_Construct_UClass_AThrowableSystem_Statics::NewProp_CurrentTimeAfterThrow_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableSystem_Statics::NewProp_ThrowableComponents_ValueProp = { "ThrowableComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UThrowableTypeHolder_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AThrowableSystem_Statics::NewProp_ThrowableComponents_Key_KeyProp = { "ThrowableComponents_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEntity, METADATA_PARAMS(0, nullptr) }; // 904214179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableSystem_Statics::NewProp_ThrowableComponents_MetaData[] = {
		{ "ModuleRelativePath", "Systems/ThrowableSystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AThrowableSystem_Statics::NewProp_ThrowableComponents = { "ThrowableComponents", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableSystem, ThrowableComponents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableSystem_Statics::NewProp_ThrowableComponents_MetaData), Z_Construct_UClass_AThrowableSystem_Statics::NewProp_ThrowableComponents_MetaData) }; // 904214179
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableSystem_Statics::NewProp_MappingContexts_ValueProp = { "MappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UActionsHolder_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThrowableSystem_Statics::NewProp_MappingContexts_Key_KeyProp = { "MappingContexts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableSystem_Statics::NewProp_MappingContexts_MetaData[] = {
		{ "ModuleRelativePath", "Systems/ThrowableSystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AThrowableSystem_Statics::NewProp_MappingContexts = { "MappingContexts", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableSystem, MappingContexts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableSystem_Statics::NewProp_MappingContexts_MetaData), Z_Construct_UClass_AThrowableSystem_Statics::NewProp_MappingContexts_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThrowableSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableSystem_Statics::NewProp_ShouldPredictPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableSystem_Statics::NewProp_OnceThrowPerTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableSystem_Statics::NewProp_WaitForNextTrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableSystem_Statics::NewProp_CurrentTimeAfterThrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableSystem_Statics::NewProp_ThrowableComponents_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableSystem_Statics::NewProp_ThrowableComponents_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableSystem_Statics::NewProp_ThrowableComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableSystem_Statics::NewProp_MappingContexts_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableSystem_Statics::NewProp_MappingContexts_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableSystem_Statics::NewProp_MappingContexts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThrowableSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowableSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThrowableSystem_Statics::ClassParams = {
		&AThrowableSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AThrowableSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableSystem_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_AThrowableSystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableSystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AThrowableSystem()
	{
		if (!Z_Registration_Info_UClass_AThrowableSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThrowableSystem.OuterSingleton, Z_Construct_UClass_AThrowableSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThrowableSystem.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<AThrowableSystem>()
	{
		return AThrowableSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowableSystem);
	AThrowableSystem::~AThrowableSystem() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_ThrowableSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_ThrowableSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UThrowableTypeHolder, UThrowableTypeHolder::StaticClass, TEXT("UThrowableTypeHolder"), &Z_Registration_Info_UClass_UThrowableTypeHolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThrowableTypeHolder), 1141289229U) },
		{ Z_Construct_UClass_UActionsHolder, UActionsHolder::StaticClass, TEXT("UActionsHolder"), &Z_Registration_Info_UClass_UActionsHolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionsHolder), 598809782U) },
		{ Z_Construct_UClass_AThrowableSystem, AThrowableSystem::StaticClass, TEXT("AThrowableSystem"), &Z_Registration_Info_UClass_AThrowableSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThrowableSystem), 3301330661U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_ThrowableSystem_h_2913887205(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_ThrowableSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_Systems_ThrowableSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
