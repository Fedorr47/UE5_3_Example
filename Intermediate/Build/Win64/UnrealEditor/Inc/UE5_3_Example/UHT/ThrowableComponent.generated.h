// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ThrowableComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE5_3_EXAMPLE_ThrowableComponent_generated_h
#error "ThrowableComponent.generated.h already included, missing '#pragma once' in ThrowableComponent.h"
#endif
#define UE5_3_EXAMPLE_ThrowableComponent_generated_h

#define FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_27_SPARSE_DATA
#define FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_27_ACCESSORS
#define FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUThrowableComponent(); \
	friend struct Z_Construct_UClass_UThrowableComponent_Statics; \
public: \
	DECLARE_CLASS(UThrowableComponent, UEntityComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE5_3_Example"), NO_API) \
	DECLARE_SERIALIZER(UThrowableComponent)


#define FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UThrowableComponent(UThrowableComponent&&); \
	NO_API UThrowableComponent(const UThrowableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThrowableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThrowableComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThrowableComponent) \
	NO_API virtual ~UThrowableComponent();


#define FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_24_PROLOG
#define FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_27_SPARSE_DATA \
	FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_27_ACCESSORS \
	FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_3_EXAMPLE_API UClass* StaticClass<class UThrowableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_3_Example_Source_UE5_3_Example_Components_ThrowableComponent_h


#define FOREACH_ENUM_ETHROWABLETYPE(op) \
	op(EThrowableType::Grenade) \
	op(EThrowableType::Other) 

enum class EThrowableType : uint8;
template<> struct TIsUEnumClass<EThrowableType> { enum { Value = true }; };
template<> UE5_3_EXAMPLE_API UEnum* StaticEnum<EThrowableType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
