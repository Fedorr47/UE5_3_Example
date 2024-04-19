// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ThrowableComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowableComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_ABaseInteractableActor_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UEntityComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UThrowableComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UThrowableComponent_NoRegister();
	UE5_3_EXAMPLE_API UEnum* Z_Construct_UEnum_UE5_3_Example_EThrowableType();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EThrowableType;
	static UEnum* EThrowableType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EThrowableType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EThrowableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE5_3_Example_EThrowableType, (UObject*)Z_Construct_UPackage__Script_UE5_3_Example(), TEXT("EThrowableType"));
		}
		return Z_Registration_Info_UEnum_EThrowableType.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UEnum* StaticEnum<EThrowableType>()
	{
		return EThrowableType_StaticEnum();
	}
	struct Z_Construct_UEnum_UE5_3_Example_EThrowableType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UE5_3_Example_EThrowableType_Statics::Enumerators[] = {
		{ "EThrowableType::Grenade", (int64)EThrowableType::Grenade },
		{ "EThrowableType::Other", (int64)EThrowableType::Other },
		{ "EThrowableType::MAX", (int64)EThrowableType::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UE5_3_Example_EThrowableType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Grenade.Name", "EThrowableType::Grenade" },
		{ "MAX.Name", "EThrowableType::MAX" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
		{ "Other.Name", "EThrowableType::Other" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE5_3_Example_EThrowableType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UE5_3_Example,
		nullptr,
		"EThrowableType",
		"EThrowableType",
		Z_Construct_UEnum_UE5_3_Example_EThrowableType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UE5_3_Example_EThrowableType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE5_3_Example_EThrowableType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE5_3_Example_EThrowableType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UE5_3_Example_EThrowableType()
	{
		if (!Z_Registration_Info_UEnum_EThrowableType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EThrowableType.InnerSingleton, Z_Construct_UEnum_UE5_3_Example_EThrowableType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EThrowableType.InnerSingleton;
	}
	void UThrowableComponent::StaticRegisterNativesUThrowableComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThrowableComponent);
	UClass* Z_Construct_UClass_UThrowableComponent_NoRegister()
	{
		return UThrowableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UThrowableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseBoneLocationFromAnimation_MetaData[];
#endif
		static void NewProp_UseBoneLocationFromAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseBoneLocationFromAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardScalar_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardScalar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrtogonalScalar_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrtogonalScalar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalOwnerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OriginalOwnerClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowThrowPredict_MetaData[];
#endif
		static void NewProp_ShowThrowPredict_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowThrowPredict;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PredictMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleMultiplierForPredictLine_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleMultiplierForPredictLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimPredcitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimPredcitTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThrowableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEntityComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/ThrowableComponent.h" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowVelocity_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowVelocity = { "ThrowVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowableComponent, ThrowVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowVelocity_MetaData), Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::NewProp_UseBoneLocationFromAnimation_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
	};
#endif
	void Z_Construct_UClass_UThrowableComponent_Statics::NewProp_UseBoneLocationFromAnimation_SetBit(void* Obj)
	{
		((UThrowableComponent*)Obj)->UseBoneLocationFromAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_UseBoneLocationFromAnimation = { "UseBoneLocationFromAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UThrowableComponent), &Z_Construct_UClass_UThrowableComponent_Statics::NewProp_UseBoneLocationFromAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::NewProp_UseBoneLocationFromAnimation_MetaData), Z_Construct_UClass_UThrowableComponent_Statics::NewProp_UseBoneLocationFromAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ForwardScalar_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditCondition", "UseBoneLocationFromAnimation == false" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ForwardScalar = { "ForwardScalar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowableComponent, ForwardScalar), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ForwardScalar_MetaData), Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ForwardScalar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::NewProp_OrtogonalScalar_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditCondition", "UseBoneLocationFromAnimation == false" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_OrtogonalScalar = { "OrtogonalScalar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowableComponent, OrtogonalScalar), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::NewProp_OrtogonalScalar_MetaData), Z_Construct_UClass_UThrowableComponent_Statics::NewProp_OrtogonalScalar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditCondition", "UseBoneLocationFromAnimation == true" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowableComponent, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::NewProp_BoneName_MetaData), Z_Construct_UClass_UThrowableComponent_Statics::NewProp_BoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::NewProp_OriginalOwnerClass_MetaData[] = {
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_OriginalOwnerClass = { "OriginalOwnerClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowableComponent, OriginalOwnerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseInteractableActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::NewProp_OriginalOwnerClass_MetaData), Z_Construct_UClass_UThrowableComponent_Statics::NewProp_OriginalOwnerClass_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "ThrowableType" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowableComponent, Type), Z_Construct_UEnum_UE5_3_Example_EThrowableType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::NewProp_Type_MetaData), Z_Construct_UClass_UThrowableComponent_Statics::NewProp_Type_MetaData) }; // 4124928172
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ShowThrowPredict_MetaData[] = {
		{ "Category", "ThrowPredict" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
	};
#endif
	void Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ShowThrowPredict_SetBit(void* Obj)
	{
		((UThrowableComponent*)Obj)->ShowThrowPredict = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ShowThrowPredict = { "ShowThrowPredict", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UThrowableComponent), &Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ShowThrowPredict_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ShowThrowPredict_MetaData), Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ShowThrowPredict_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::NewProp_PredictMesh_MetaData[] = {
		{ "Category", "ThrowPredict" },
		{ "EditCondition", "ShowThrowPredict == true" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_PredictMesh = { "PredictMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowableComponent, PredictMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::NewProp_PredictMesh_MetaData), Z_Construct_UClass_UThrowableComponent_Statics::NewProp_PredictMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::NewProp_AngleMultiplierForPredictLine_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditCondition", "ShowThrowPredict == true" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_AngleMultiplierForPredictLine = { "AngleMultiplierForPredictLine", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowableComponent, AngleMultiplierForPredictLine), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::NewProp_AngleMultiplierForPredictLine_MetaData), Z_Construct_UClass_UThrowableComponent_Statics::NewProp_AngleMultiplierForPredictLine_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::NewProp_SimPredcitTime_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditCondition", "ShowThrowPredict == true" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_SimPredcitTime = { "SimPredcitTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowableComponent, SimPredcitTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::NewProp_SimPredcitTime_MetaData), Z_Construct_UClass_UThrowableComponent_Statics::NewProp_SimPredcitTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowMappingContext = { "ThrowMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowableComponent, ThrowMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowMappingContext_MetaData), Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Components/ThrowableComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowAction = { "ThrowAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowableComponent, ThrowAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowAction_MetaData), Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThrowableComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_UseBoneLocationFromAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ForwardScalar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_OrtogonalScalar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_OriginalOwnerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ShowThrowPredict,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_PredictMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_AngleMultiplierForPredictLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_SimPredcitTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableComponent_Statics::NewProp_ThrowAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThrowableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThrowableComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UThrowableComponent_Statics::ClassParams = {
		&UThrowableComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UThrowableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UThrowableComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UThrowableComponent()
	{
		if (!Z_Registration_Info_UClass_UThrowableComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThrowableComponent.OuterSingleton, Z_Construct_UClass_UThrowableComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UThrowableComponent.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UThrowableComponent>()
	{
		return UThrowableComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThrowableComponent);
	UThrowableComponent::~UThrowableComponent() {}
	struct Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_Statics::EnumInfo[] = {
		{ EThrowableType_StaticEnum, TEXT("EThrowableType"), &Z_Registration_Info_UEnum_EThrowableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4124928172U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UThrowableComponent, UThrowableComponent::StaticClass, TEXT("UThrowableComponent"), &Z_Registration_Info_UClass_UThrowableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThrowableComponent), 2060997594U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_196825868(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
