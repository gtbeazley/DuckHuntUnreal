// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUCKHUNT_PlayerHUD_generated_h
#error "PlayerHUD.generated.h already included, missing '#pragma once' in PlayerHUD.h"
#endif
#define DUCKHUNT_PlayerHUD_generated_h

#define DuckHunt_Source_DuckHunt_PlayerHUD_h_15_RPC_WRAPPERS
#define DuckHunt_Source_DuckHunt_PlayerHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define DuckHunt_Source_DuckHunt_PlayerHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerHUD(); \
	friend struct Z_Construct_UClass_APlayerHUD_Statics; \
public: \
	DECLARE_CLASS(APlayerHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DuckHunt"), NO_API) \
	DECLARE_SERIALIZER(APlayerHUD)


#define DuckHunt_Source_DuckHunt_PlayerHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerHUD(); \
	friend struct Z_Construct_UClass_APlayerHUD_Statics; \
public: \
	DECLARE_CLASS(APlayerHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DuckHunt"), NO_API) \
	DECLARE_SERIALIZER(APlayerHUD)


#define DuckHunt_Source_DuckHunt_PlayerHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerHUD(APlayerHUD&&); \
	NO_API APlayerHUD(const APlayerHUD&); \
public:


#define DuckHunt_Source_DuckHunt_PlayerHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerHUD(APlayerHUD&&); \
	NO_API APlayerHUD(const APlayerHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerHUD)


#define DuckHunt_Source_DuckHunt_PlayerHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define DuckHunt_Source_DuckHunt_PlayerHUD_h_12_PROLOG
#define DuckHunt_Source_DuckHunt_PlayerHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DuckHunt_Source_DuckHunt_PlayerHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	DuckHunt_Source_DuckHunt_PlayerHUD_h_15_RPC_WRAPPERS \
	DuckHunt_Source_DuckHunt_PlayerHUD_h_15_INCLASS \
	DuckHunt_Source_DuckHunt_PlayerHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DuckHunt_Source_DuckHunt_PlayerHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DuckHunt_Source_DuckHunt_PlayerHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	DuckHunt_Source_DuckHunt_PlayerHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DuckHunt_Source_DuckHunt_PlayerHUD_h_15_INCLASS_NO_PURE_DECLS \
	DuckHunt_Source_DuckHunt_PlayerHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DuckHunt_Source_DuckHunt_PlayerHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
