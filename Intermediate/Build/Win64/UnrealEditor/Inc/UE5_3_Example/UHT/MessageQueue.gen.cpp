// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SystemQueue/MessageQueue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMessageQueue() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UBaseMessage();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UBaseMessage_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UHealthPercentMessage();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UHealthPercentMessage_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UMessageQueue();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UMessageQueue_NoRegister();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UThrowableChangedMessage();
	UE5_3_EXAMPLE_API UClass* Z_Construct_UClass_UThrowableChangedMessage_NoRegister();
	UE5_3_EXAMPLE_API UEnum* Z_Construct_UEnum_UE5_3_Example_EMessageType();
	UE5_3_EXAMPLE_API UFunction* Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UE5_3_Example();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMessageType;
	static UEnum* EMessageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMessageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMessageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE5_3_Example_EMessageType, (UObject*)Z_Construct_UPackage__Script_UE5_3_Example(), TEXT("EMessageType"));
		}
		return Z_Registration_Info_UEnum_EMessageType.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UEnum* StaticEnum<EMessageType>()
	{
		return EMessageType_StaticEnum();
	}
	struct Z_Construct_UEnum_UE5_3_Example_EMessageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UE5_3_Example_EMessageType_Statics::Enumerators[] = {
		{ "EMessageType::HealthPercentage", (int64)EMessageType::HealthPercentage },
		{ "EMessageType::ThrowableChanged", (int64)EMessageType::ThrowableChanged },
		{ "EMessageType::MAX", (int64)EMessageType::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UE5_3_Example_EMessageType_Statics::Enum_MetaDataParams[] = {
		{ "HealthPercentage.Name", "EMessageType::HealthPercentage" },
		{ "MAX.Name", "EMessageType::MAX" },
		{ "ModuleRelativePath", "SystemQueue/MessageQueue.h" },
		{ "ThrowableChanged.Name", "EMessageType::ThrowableChanged" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE5_3_Example_EMessageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UE5_3_Example,
		nullptr,
		"EMessageType",
		"EMessageType",
		Z_Construct_UEnum_UE5_3_Example_EMessageType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UE5_3_Example_EMessageType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE5_3_Example_EMessageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE5_3_Example_EMessageType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UE5_3_Example_EMessageType()
	{
		if (!Z_Registration_Info_UEnum_EMessageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMessageType.InnerSingleton, Z_Construct_UEnum_UE5_3_Example_EMessageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMessageType.InnerSingleton;
	}
	void UBaseMessage::StaticRegisterNativesUBaseMessage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseMessage);
	UClass* Z_Construct_UClass_UBaseMessage_NoRegister()
	{
		return UBaseMessage::StaticClass();
	}
	struct Z_Construct_UClass_UBaseMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OwnerId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMessage_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseMessage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SystemQueue/MessageQueue.h" },
		{ "ModuleRelativePath", "SystemQueue/MessageQueue.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseMessage_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseMessage_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "SystemQueue/MessageQueue.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseMessage_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseMessage, Type), Z_Construct_UEnum_UE5_3_Example_EMessageType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMessage_Statics::NewProp_Type_MetaData), Z_Construct_UClass_UBaseMessage_Statics::NewProp_Type_MetaData) }; // 3627212106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseMessage_Statics::NewProp_OwnerId_MetaData[] = {
		{ "ModuleRelativePath", "SystemQueue/MessageQueue.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseMessage_Statics::NewProp_OwnerId = { "OwnerId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseMessage, OwnerId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMessage_Statics::NewProp_OwnerId_MetaData), Z_Construct_UClass_UBaseMessage_Statics::NewProp_OwnerId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMessage_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMessage_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMessage_Statics::NewProp_OwnerId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseMessage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseMessage_Statics::ClassParams = {
		&UBaseMessage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseMessage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMessage_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMessage_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseMessage_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMessage_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBaseMessage()
	{
		if (!Z_Registration_Info_UClass_UBaseMessage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseMessage.OuterSingleton, Z_Construct_UClass_UBaseMessage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseMessage.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UBaseMessage>()
	{
		return UBaseMessage::StaticClass();
	}
	UBaseMessage::UBaseMessage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseMessage);
	UBaseMessage::~UBaseMessage() {}
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
		{ "IncludePath", "SystemQueue/MessageQueue.h" },
		{ "ModuleRelativePath", "SystemQueue/MessageQueue.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthPercentMessage_Statics::NewProp_HealthPercent_MetaData[] = {
		{ "ModuleRelativePath", "SystemQueue/MessageQueue.h" },
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
	void UThrowableChangedMessage::StaticRegisterNativesUThrowableChangedMessage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThrowableChangedMessage);
	UClass* Z_Construct_UClass_UThrowableChangedMessage_NoRegister()
	{
		return UThrowableChangedMessage::StaticClass();
	}
	struct Z_Construct_UClass_UThrowableChangedMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GrenadeCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThrowableChangedMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMessage,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableChangedMessage_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableChangedMessage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SystemQueue/MessageQueue.h" },
		{ "ModuleRelativePath", "SystemQueue/MessageQueue.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowableChangedMessage_Statics::NewProp_GrenadeCount_MetaData[] = {
		{ "ModuleRelativePath", "SystemQueue/MessageQueue.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UThrowableChangedMessage_Statics::NewProp_GrenadeCount = { "GrenadeCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThrowableChangedMessage, GrenadeCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableChangedMessage_Statics::NewProp_GrenadeCount_MetaData), Z_Construct_UClass_UThrowableChangedMessage_Statics::NewProp_GrenadeCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThrowableChangedMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrowableChangedMessage_Statics::NewProp_GrenadeCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThrowableChangedMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThrowableChangedMessage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UThrowableChangedMessage_Statics::ClassParams = {
		&UThrowableChangedMessage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UThrowableChangedMessage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableChangedMessage_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableChangedMessage_Statics::Class_MetaDataParams), Z_Construct_UClass_UThrowableChangedMessage_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableChangedMessage_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UThrowableChangedMessage()
	{
		if (!Z_Registration_Info_UClass_UThrowableChangedMessage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThrowableChangedMessage.OuterSingleton, Z_Construct_UClass_UThrowableChangedMessage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UThrowableChangedMessage.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UThrowableChangedMessage>()
	{
		return UThrowableChangedMessage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThrowableChangedMessage);
	UThrowableChangedMessage::~UThrowableChangedMessage() {}
	struct Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature_Statics
	{
		struct _Script_UE5_3_Example_eventOnMessageProcess_Parms
		{
			UBaseMessage* Msg;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Msg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UE5_3_Example_eventOnMessageProcess_Parms, Msg), Z_Construct_UClass_UBaseMessage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature_Statics::NewProp_Msg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SystemQueue/MessageQueue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UE5_3_Example, nullptr, "OnMessageProcess__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature_Statics::_Script_UE5_3_Example_eventOnMessageProcess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature_Statics::_Script_UE5_3_Example_eventOnMessageProcess_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMessageProcess_DelegateWrapper(const FMulticastScriptDelegate& OnMessageProcess, UBaseMessage* Msg)
{
	struct _Script_UE5_3_Example_eventOnMessageProcess_Parms
	{
		UBaseMessage* Msg;
	};
	_Script_UE5_3_Example_eventOnMessageProcess_Parms Parms;
	Parms.Msg=Msg;
	OnMessageProcess.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UMessageQueue::StaticRegisterNativesUMessageQueue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMessageQueue);
	UClass* Z_Construct_UClass_UMessageQueue_NoRegister()
	{
		return UMessageQueue::StaticClass();
	}
	struct Z_Construct_UClass_UMessageQueue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageProcess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageProcess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMessageQueue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_3_Example,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMessageQueue_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageQueue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SystemQueue/MessageQueue.h" },
		{ "ModuleRelativePath", "SystemQueue/MessageQueue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageQueue_Statics::NewProp_OnMessageProcess_MetaData[] = {
		{ "ModuleRelativePath", "SystemQueue/MessageQueue.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMessageQueue_Statics::NewProp_OnMessageProcess = { "OnMessageProcess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMessageQueue, OnMessageProcess), Z_Construct_UDelegateFunction_UE5_3_Example_OnMessageProcess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMessageQueue_Statics::NewProp_OnMessageProcess_MetaData), Z_Construct_UClass_UMessageQueue_Statics::NewProp_OnMessageProcess_MetaData) }; // 2807171988
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMessageQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageQueue_Statics::NewProp_OnMessageProcess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMessageQueue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMessageQueue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMessageQueue_Statics::ClassParams = {
		&UMessageQueue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMessageQueue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMessageQueue_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMessageQueue_Statics::Class_MetaDataParams), Z_Construct_UClass_UMessageQueue_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMessageQueue_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMessageQueue()
	{
		if (!Z_Registration_Info_UClass_UMessageQueue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMessageQueue.OuterSingleton, Z_Construct_UClass_UMessageQueue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMessageQueue.OuterSingleton;
	}
	template<> UE5_3_EXAMPLE_API UClass* StaticClass<UMessageQueue>()
	{
		return UMessageQueue::StaticClass();
	}
	UMessageQueue::UMessageQueue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMessageQueue);
	UMessageQueue::~UMessageQueue() {}
	struct Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_SystemQueue_MessageQueue_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_SystemQueue_MessageQueue_h_Statics::EnumInfo[] = {
		{ EMessageType_StaticEnum, TEXT("EMessageType"), &Z_Registration_Info_UEnum_EMessageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3627212106U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_SystemQueue_MessageQueue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseMessage, UBaseMessage::StaticClass, TEXT("UBaseMessage"), &Z_Registration_Info_UClass_UBaseMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseMessage), 3454760794U) },
		{ Z_Construct_UClass_UHealthPercentMessage, UHealthPercentMessage::StaticClass, TEXT("UHealthPercentMessage"), &Z_Registration_Info_UClass_UHealthPercentMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthPercentMessage), 3634487123U) },
		{ Z_Construct_UClass_UThrowableChangedMessage, UThrowableChangedMessage::StaticClass, TEXT("UThrowableChangedMessage"), &Z_Registration_Info_UClass_UThrowableChangedMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThrowableChangedMessage), 1885177965U) },
		{ Z_Construct_UClass_UMessageQueue, UMessageQueue::StaticClass, TEXT("UMessageQueue"), &Z_Registration_Info_UClass_UMessageQueue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMessageQueue), 2939267111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_SystemQueue_MessageQueue_h_34678066(TEXT("/Script/UE5_3_Example"),
		Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_SystemQueue_MessageQueue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_SystemQueue_MessageQueue_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_SystemQueue_MessageQueue_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_proj_UE5_3_Example_Source_UE5_3_Example_SystemQueue_MessageQueue_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
