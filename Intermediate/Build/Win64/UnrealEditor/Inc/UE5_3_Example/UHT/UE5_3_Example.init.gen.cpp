// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_3_Example_init() {}
	UE5_3_EXAMPLE_API UFunction* Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature();
	UE5_3_EXAMPLE_API UFunction* Z_Construct_UDelegateFunction_UE5_3_Example_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UE5_3_Example;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UE5_3_Example()
	{
		if (!Z_Registration_Info_UPackage__Script_UE5_3_Example.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UE5_3_Example_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UE5_3_Example",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x01D97353,
				0xFBD3499F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UE5_3_Example.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UE5_3_Example.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UE5_3_Example(Z_Construct_UPackage__Script_UE5_3_Example, TEXT("/Script/UE5_3_Example"), Z_Registration_Info_UPackage__Script_UE5_3_Example, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x01D97353, 0xFBD3499F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
