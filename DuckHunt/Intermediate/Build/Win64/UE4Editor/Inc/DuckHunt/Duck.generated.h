// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUCKHUNT_Duck_generated_h
#error "Duck.generated.h already included, missing '#pragma once' in Duck.h"
#endif
#define DUCKHUNT_Duck_generated_h

#define DuckHunt_Source_DuckHunt_Duck_h_13_RPC_WRAPPERS
#define DuckHunt_Source_DuckHunt_Duck_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DuckHunt_Source_DuckHunt_Duck_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADuck(); \
	friend struct Z_Construct_UClass_ADuck_Statics; \
public: \
	DECLARE_CLASS(ADuck, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DuckHunt"), NO_API) \
	DECLARE_SERIALIZER(ADuck)


#define DuckHunt_Source_DuckHunt_Duck_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADuck(); \
	friend struct Z_Construct_UClass_ADuck_Statics; \
public: \
	DECLARE_CLASS(ADuck, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DuckHunt"), NO_API) \
	DECLARE_SERIALIZER(ADuck)


#define DuckHunt_Source_DuckHunt_Duck_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADuck(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADuck) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADuck); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADuck); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADuck(ADuck&&); \
	NO_API ADuck(const ADuck&); \
public:


#define DuckHunt_Source_DuckHunt_Duck_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADuck(ADuck&&); \
	NO_API ADuck(const ADuck&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADuck); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADuck); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADuck)


#define DuckHunt_Source_DuckHunt_Duck_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(ADuck, StaticMesh); }


#define DuckHunt_Source_DuckHunt_Duck_h_10_PROLOG
#define DuckHunt_Source_DuckHunt_Duck_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DuckHunt_Source_DuckHunt_Duck_h_13_PRIVATE_PROPERTY_OFFSET \
	DuckHunt_Source_DuckHunt_Duck_h_13_RPC_WRAPPERS \
	DuckHunt_Source_DuckHunt_Duck_h_13_INCLASS \
	DuckHunt_Source_DuckHunt_Duck_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DuckHunt_Source_DuckHunt_Duck_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DuckHunt_Source_DuckHunt_Duck_h_13_PRIVATE_PROPERTY_OFFSET \
	DuckHunt_Source_DuckHunt_Duck_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DuckHunt_Source_DuckHunt_Duck_h_13_INCLASS_NO_PURE_DECLS \
	DuckHunt_Source_DuckHunt_Duck_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUCKHUNT_API UClass* StaticClass<class ADuck>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DuckHunt_Source_DuckHunt_Duck_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
