// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_3_Example/HealthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthComponent() {}
// Cross Module References
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UBaseComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UBaseMessage();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UBaseMessage_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UHealthComponent();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UHealthMessage();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UHealthMessage_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UHealthPercentMessage();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UHealthPercentMessage_NoRegister();
	UE5_3_EXAMPLE_API UEnum* Z_Construct_UEnum_UE5_3_Example_UHealthMessageType();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_UHealthMessageType;
	static UEnum* UHealthMessageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_UHealthMessageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_UHealthMessageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE5_3_Example_UHealthMessageType, (UObject*)Z_Construct_UPackage__Script_UE5_3_Example(), TEXT("UHealthMessageType"));
		}
		return Z_Registration_Info_UEnum_UHealthMessageType.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UEnum* StaticEnum<UHealthMessageType>()
	{
		return UHealthMessageType_StaticEnum();
	}
	struct Z_Construct_UEnum_UE5_3_Example_UHealthMessageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UE5_3_Example_UHealthMessageType_Statics::Enumerators[] = {
		{ "UHealthMessageType::Damage", (int64)UHealthMessageType::Damage },
		{ "UHealthMessageType::Heal", (int64)UHealthMessageType::Heal },
		{ "UHealthMessageType::MAX", (int64)UHealthMessageType::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UE5_3_Example_UHealthMessageType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Damage.Name", "UHealthMessageType::Damage" },
		{ "Heal.Name", "UHealthMessageType::Heal" },
		{ "MAX.Name", "UHealthMessageType::MAX" },
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE5_3_Example_UHealthMessageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UE5_3_Example,
		nullptr,
		"UHealthMessageType",
		"UHealthMessageType",
		Z_Construct_UEnum_UE5_3_Example_UHealthMessageType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UE5_3_Example_UHealthMessageType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE5_3_Example_UHealthMessageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE5_3_Example_UHealthMessageType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UE5_3_Example_UHealthMessageType()
	{
		if (!Z_Registration_Info_UEnum_UHealthMessageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UHealthMessageType.InnerSingleton, Z_Construct_UEnum_UE5_3_Example_UHealthMessageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_UHealthMessageType.InnerSingleton;
	}
	void UHealthMessage::StaticRegisterNativesUHealthMessage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthMessage);
	UClass* Z_Construct_UClass_UHealthMessage_NoRegister()
	{
		return UHealthMessage::StaticClass();
	}
	struct Z_Construct_UClass_UHealthMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HealthType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HealthType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMessage,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthMessage_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthMessage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HealthComponent.h" },
		{ "ModuleRelativePath", "HealthComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthMessage_Statics::NewProp_Amount_MetaData[] = {
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthMessage_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthMessage, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthMessage_Statics::NewProp_Amount_MetaData), Z_Construct_UClass_UHealthMessage_Statics::NewProp_Amount_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHealthMessage_Statics::NewProp_HealthType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthMessage_Statics::NewProp_HealthType_MetaData[] = {
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHealthMessage_Statics::NewProp_HealthType = { "HealthType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthMessage, HealthType), Z_Construct_UEnum_UE5_3_Example_UHealthMessageType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthMessage_Statics::NewProp_HealthType_MetaData), Z_Construct_UClass_UHealthMessage_Statics::NewProp_HealthType_MetaData) }; // 3653730639
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthMessage_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthMessage_Statics::NewProp_HealthType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthMessage_Statics::NewProp_HealthType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthMessage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthMessage_Statics::ClassParams = {
		&UHealthMessage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHealthMessage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealthMessage_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthMessage_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthMessage_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthMessage_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHealthMessage()
	{
		if (!Z_Registration_Info_UClass_UHealthMessage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthMessage.OuterSingleton, Z_Construct_UClass_UHealthMessage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHealthMessage.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UHealthMessage>()
	{
		return UHealthMessage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthMessage);
	UHealthMessage::~UHealthMessage() {}
	void UHealthPercentMessage::StaticRegisterNativesUHealthPercentMessage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthPercentMessage);
	UClass* Z_Construct_UClass_UHealthPercentMessage_NoRegister()
	{
		return UHealthPercentMessage::StaticClass();
	}
	struct Z_Construct_UClass_UHealthPercentMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthPercentMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMessage,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthPercentMessage_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthPercentMessage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HealthComponent.h" },
		{ "ModuleRelativePath", "HealthComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthPercentMessage_Statics::NewProp_HealthPercent_MetaData[] = {
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthPercentMessage_Statics::NewProp_HealthPercent = { "HealthPercent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthPercentMessage, HealthPercent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthPercentMessage_Statics::NewProp_HealthPercent_MetaData), Z_Construct_UClass_UHealthPercentMessage_Statics::NewProp_HealthPercent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthPercentMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthPercentMessage_Statics::NewProp_HealthPercent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthPercentMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthPercentMessage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthPercentMessage_Statics::ClassParams = {
		&UHealthPercentMessage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHealthPercentMessage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealthPercentMessage_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthPercentMessage_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthPercentMessage_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthPercentMessage_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHealthPercentMessage()
	{
		if (!Z_Registration_Info_UClass_UHealthPercentMessage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthPercentMessage.OuterSingleton, Z_Construct_UClass_UHealthPercentMessage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHealthPercentMessage.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UHealthPercentMessage>()
	{
		return UHealthPercentMessage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthPercentMessage);
	UHealthPercentMessage::~UHealthPercentMessage() {}
	DEFINE_FUNCTION(UHealthComponent::execTakeMsg)
	{
		P_GET_OBJECT(UBaseMessage,Z_Param_InMsg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeMsg(Z_Param_InMsg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execSnedPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SnedPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execHeal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InHealAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Heal(Z_Param_InHealAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealthComponent::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDamageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_InDamageAmount);
		P_NATIVE_END;
	}
	void UHealthComponent::StaticRegisterNativesUHealthComponent()
	{
		UClass* Class = UHealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Heal", &UHealthComponent::execHeal },
			{ "SnedPercent", &UHealthComponent::execSnedPercent },
			{ "TakeDamage", &UHealthComponent::execTakeDamage },
			{ "TakeMsg", &UHealthComponent::execTakeMsg },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHealthComponent_Heal_Statics
	{
		struct HealthComponent_eventHeal_Parms
		{
			float InHealAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InHealAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_Heal_Statics::NewProp_InHealAmount = { "InHealAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventHeal_Parms, InHealAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_Heal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_Heal_Statics::NewProp_InHealAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_Heal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "Heal", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_Heal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_Heal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_Heal_Statics::HealthComponent_eventHeal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_Heal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_Heal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_Heal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_Heal_Statics::HealthComponent_eventHeal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHealthComponent_Heal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_Heal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_SnedPercent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_SnedPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_SnedPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "SnedPercent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SnedPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_SnedPercent_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UHealthComponent_SnedPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_SnedPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics
	{
		struct HealthComponent_eventTakeDamage_Parms
		{
			float InDamageAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDamageAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_InDamageAmount = { "InDamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventTakeDamage_Parms, InDamageAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_InDamageAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::HealthComponent_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::HealthComponent_eventTakeDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHealthComponent_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthComponent_TakeMsg_Statics
	{
		struct HealthComponent_eventTakeMsg_Parms
		{
			UBaseMessage* InMsg;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMsg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_TakeMsg_Statics::NewProp_InMsg = { "InMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventTakeMsg_Parms, InMsg), Z_Construct_UClass_UBaseMessage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_TakeMsg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_TakeMsg_Statics::NewProp_InMsg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthComponent_TakeMsg_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_TakeMsg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "TakeMsg", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_TakeMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_TakeMsg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_TakeMsg_Statics::HealthComponent_eventTakeMsg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_TakeMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_TakeMsg_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_TakeMsg_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_TakeMsg_Statics::HealthComponent_eventTakeMsg_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHealthComponent_TakeMsg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_TakeMsg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthComponent);
	UClass* Z_Construct_UClass_UHealthComponent_NoRegister()
	{
		return UHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UHealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthComponent_Heal, "Heal" }, // 3158337347
		{ &Z_Construct_UFunction_UHealthComponent_SnedPercent, "SnedPercent" }, // 2704800748
		{ &Z_Construct_UFunction_UHealthComponent_TakeDamage, "TakeDamage" }, // 1787437033
		{ &Z_Construct_UFunction_UHealthComponent_TakeMsg, "TakeMsg" }, // 4041306423
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HealthComponent.h" },
		{ "ModuleRelativePath", "HealthComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_Health_MetaData[] = {
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_Health_MetaData), Z_Construct_UClass_UHealthComponent_Statics::NewProp_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthComponent_Statics::ClassParams = {
		&UHealthComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHealthComponent()
	{
		if (!Z_Registration_Info_UClass_UHealthComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthComponent.OuterSingleton, Z_Construct_UClass_UHealthComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHealthComponent.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UHealthComponent>()
	{
		return UHealthComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthComponent);
	UHealthComponent::~UHealthComponent() {}
	struct Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_HealthComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_HealthComponent_h_Statics::EnumInfo[] = {
		{ UHealthMessageType_StaticEnum, TEXT("UHealthMessageType"), &Z_Registration_Info_UEnum_UHealthMessageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3653730639U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_HealthComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHealthMessage, UHealthMessage::StaticClass, TEXT("UHealthMessage"), &Z_Registration_Info_UClass_UHealthMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthMessage), 3043192640U) },
		{ Z_Construct_UClass_UHealthPercentMessage, UHealthPercentMessage::StaticClass, TEXT("UHealthPercentMessage"), &Z_Registration_Info_UClass_UHealthPercentMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthPercentMessage), 1210250644U) },
		{ Z_Construct_UClass_UHealthComponent, UHealthComponent::StaticClass, TEXT("UHealthComponent"), &Z_Registration_Info_UClass_UHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthComponent), 1605053025U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_HealthComponent_h_2710282449(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_HealthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_HealthComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_HealthComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_3_Example_Source_UE5_3_Example_HealthComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
