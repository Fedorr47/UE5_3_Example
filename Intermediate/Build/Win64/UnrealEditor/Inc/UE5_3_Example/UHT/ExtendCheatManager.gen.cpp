// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExtendCheatManager.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExtendCheatManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCheatManager();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UExtendCheatManager();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UExtendCheatManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	DEFINE_FUNCTION(UExtendCheatManager::execSetSlomo)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeDilation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSlomo(Z_Param_InTimeDilation);
		P_NATIVE_END;
	}
	void UExtendCheatManager::StaticRegisterNativesUExtendCheatManager()
	{
		UClass* Class = UExtendCheatManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSlomo", &UExtendCheatManager::execSetSlomo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExtendCheatManager_SetSlomo_Statics
	{
		struct ExtendCheatManager_eventSetSlomo_Parms
		{
			float InTimeDilation;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTimeDilation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExtendCheatManager_SetSlomo_Statics::NewProp_InTimeDilation = { "InTimeDilation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExtendCheatManager_eventSetSlomo_Parms, InTimeDilation), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExtendCheatManager_SetSlomo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExtendCheatManager_SetSlomo_Statics::NewProp_InTimeDilation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExtendCheatManager_SetSlomo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ExtendCheatManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExtendCheatManager_SetSlomo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExtendCheatManager, nullptr, "SetSlomo", nullptr, nullptr, Z_Construct_UFunction_UExtendCheatManager_SetSlomo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendCheatManager_SetSlomo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExtendCheatManager_SetSlomo_Statics::ExtendCheatManager_eventSetSlomo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendCheatManager_SetSlomo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExtendCheatManager_SetSlomo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendCheatManager_SetSlomo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UExtendCheatManager_SetSlomo_Statics::ExtendCheatManager_eventSetSlomo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UExtendCheatManager_SetSlomo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExtendCheatManager_SetSlomo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExtendCheatManager);
	UClass* Z_Construct_UClass_UExtendCheatManager_NoRegister()
	{
		return UExtendCheatManager::StaticClass();
	}
	struct Z_Construct_UClass_UExtendCheatManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExtendCheatManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheatManager,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExtendCheatManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UExtendCheatManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExtendCheatManager_SetSlomo, "SetSlomo" }, // 326661652
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExtendCheatManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtendCheatManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ExtendCheatManager.h" },
		{ "ModuleRelativePath", "ExtendCheatManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExtendCheatManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExtendCheatManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExtendCheatManager_Statics::ClassParams = {
		&UExtendCheatManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExtendCheatManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UExtendCheatManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UExtendCheatManager()
	{
		if (!Z_Registration_Info_UClass_UExtendCheatManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExtendCheatManager.OuterSingleton, Z_Construct_UClass_UExtendCheatManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExtendCheatManager.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UExtendCheatManager>()
	{
		return UExtendCheatManager::StaticClass();
	}
	UExtendCheatManager::UExtendCheatManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExtendCheatManager);
	UExtendCheatManager::~UExtendCheatManager() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_ExtendCheatManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_ExtendCheatManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExtendCheatManager, UExtendCheatManager::StaticClass, TEXT("UExtendCheatManager"), &Z_Registration_Info_UClass_UExtendCheatManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExtendCheatManager), 1790255435U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_ExtendCheatManager_h_102092817(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_ExtendCheatManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_ExtendCheatManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
