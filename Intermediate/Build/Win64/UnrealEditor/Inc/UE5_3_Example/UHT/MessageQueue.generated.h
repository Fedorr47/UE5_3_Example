// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MessageQueue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseMessage;
#ifdef UE5_3_EXAMPLE_MessageQueue_generated_h
#error "MessageQueue.generated.h already included, missing '#pragma once' in MessageQueue.h"
#endif
#define UE5_3_EXAMPLE_MessageQueue_generated_h

#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_16_SPARSE_DATA
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_16_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseMessage(); \
	friend struct Z_Construct_UClass_UBaseMessage_Statics; \
public: \
	DECLARE_CLASS(UBaseMessage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE5_3_Example"), NO_API) \
	DECLARE_SERIALIZER(UBaseMessage)


#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseMessage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseMessage(UBaseMessage&&); \
	NO_API UBaseMessage(const UBaseMessage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseMessage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseMessage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseMessage) \
	NO_API virtual ~UBaseMessage();


#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_13_PROLOG
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_16_SPARSE_DATA \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_16_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_3_EXAMPLE_API UClass* StaticClass<class UBaseMessage>();

#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_23_DELEGATE \
UE5_3_EXAMPLE_API void FOnMessageProcess_DelegateWrapper(const FMulticastScriptDelegate& OnMessageProcess, UBaseMessage* Msg);


#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_28_SPARSE_DATA
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_28_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMessageQueue(); \
	friend struct Z_Construct_UClass_UMessageQueue_Statics; \
public: \
	DECLARE_CLASS(UMessageQueue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE5_3_Example"), NO_API) \
	DECLARE_SERIALIZER(UMessageQueue)


#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMessageQueue(UMessageQueue&&); \
	NO_API UMessageQueue(const UMessageQueue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMessageQueue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMessageQueue); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMessageQueue) \
	NO_API virtual ~UMessageQueue();


#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_25_PROLOG
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_28_SPARSE_DATA \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_28_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_28_INCLASS_NO_PURE_DECLS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_3_EXAMPLE_API UClass* StaticClass<class UMessageQueue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h


#define FOREACH_ENUM_UMESSAGETYPE(op) \
	op(UMessageType::HealthType) \
	op(UMessageType::HealthPercent) 

enum class UMessageType : uint8;
template<> struct TIsUEnumClass<UMessageType> { enum { Value = true }; };
template<> UE5_3_EXAMPLE_API UEnum* StaticEnum<UMessageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
