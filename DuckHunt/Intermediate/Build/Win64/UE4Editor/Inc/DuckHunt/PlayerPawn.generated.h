// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUCKHUNT_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define DUCKHUNT_PlayerPawn_generated_h

#define DuckHunt_Source_DuckHunt_PlayerPawn_h_12_RPC_WRAPPERS
#define DuckHunt_Source_DuckHunt_PlayerPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DuckHunt_Source_DuckHunt_PlayerPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DuckHunt"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define DuckHunt_Source_DuckHunt_PlayerPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DuckHunt"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define DuckHunt_Source_DuckHunt_PlayerPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public:


#define DuckHunt_Source_DuckHunt_PlayerPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn)


#define DuckHunt_Source_DuckHunt_PlayerPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxCollision() { return STRUCT_OFFSET(APlayerPawn, BoxCollision); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(APlayerPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__ShotMarker() { return STRUCT_OFFSET(APlayerPawn, ShotMarker); }


#define DuckHunt_Source_DuckHunt_PlayerPawn_h_9_PROLOG
#define DuckHunt_Source_DuckHunt_PlayerPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DuckHunt_Source_DuckHunt_PlayerPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	DuckHunt_Source_DuckHunt_PlayerPawn_h_12_RPC_WRAPPERS \
	DuckHunt_Source_DuckHunt_PlayerPawn_h_12_INCLASS \
	DuckHunt_Source_DuckHunt_PlayerPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DuckHunt_Source_DuckHunt_PlayerPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DuckHunt_Source_DuckHunt_PlayerPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	DuckHunt_Source_DuckHunt_PlayerPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DuckHunt_Source_DuckHunt_PlayerPawn_h_12_INCLASS_NO_PURE_DECLS \
	DuckHunt_Source_DuckHunt_PlayerPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUCKHUNT_API UClass* StaticClass<class APlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DuckHunt_Source_DuckHunt_PlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
