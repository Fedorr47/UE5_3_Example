// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MessageQueue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMessageBase;
#ifdef UE5_3_EXAMPLE_MessageQueue_generated_h
#error "MessageQueue.generated.h already included, missing '#pragma once' in MessageQueue.h"
#endif
#define UE5_3_EXAMPLE_MessageQueue_generated_h

#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_15_SPARSE_DATA
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_15_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMessageBase(); \
	friend struct Z_Construct_UClass_UMessageBase_Statics; \
public: \
	DECLARE_CLASS(UMessageBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE5_3_Example"), NO_API) \
	DECLARE_SERIALIZER(UMessageBase)


#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMessageBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMessageBase(UMessageBase&&); \
	NO_API UMessageBase(const UMessageBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMessageBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMessageBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMessageBase) \
	NO_API virtual ~UMessageBase();


#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_12_PROLOG
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_15_SPARSE_DATA \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_15_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_3_EXAMPLE_API UClass* StaticClass<class UMessageBase>();

#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_22_DELEGATE \
UE5_3_EXAMPLE_API void FOnMessageProcess_DelegateWrapper(const FMulticastScriptDelegate& OnMessageProcess, UMessageBase* Msg);


#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_27_SPARSE_DATA
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_27_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMessageQueue(); \
	friend struct Z_Construct_UClass_UMessageQueue_Statics; \
public: \
	DECLARE_CLASS(UMessageQueue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE5_3_Example"), NO_API) \
	DECLARE_SERIALIZER(UMessageQueue)


#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMessageQueue(UMessageQueue&&); \
	NO_API UMessageQueue(const UMessageQueue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMessageQueue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMessageQueue); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMessageQueue) \
	NO_API virtual ~UMessageQueue();


#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_24_PROLOG
#define FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_27_SPARSE_DATA \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_27_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_27_INCLASS_NO_PURE_DECLS \
	FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_3_EXAMPLE_API UClass* StaticClass<class UMessageQueue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_3_Example_Source_UE5_3_Example_MessageQueue_h


#define FOREACH_ENUM_UMESSAGETYPE(op) \
	op(UMessageType::HealthType) 

enum class UMessageType : uint8;
template<> struct TIsUEnumClass<UMessageType> { enum { Value = true }; };
template<> UE5_3_EXAMPLE_API UEnum* StaticEnum<UMessageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
