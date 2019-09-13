// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DuckHunt/PlayerHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHUD() {}
// Cross Module References
	DUCKHUNT_API UClass* Z_Construct_UClass_APlayerHUD_NoRegister();
	DUCKHUNT_API UClass* Z_Construct_UClass_APlayerHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_DuckHunt();
// End Cross Module References
	void APlayerHUD::StaticRegisterNativesAPlayerHUD()
	{
	}
	UClass* Z_Construct_UClass_APlayerHUD_NoRegister()
	{
		return APlayerHUD::StaticClass();
	}
	struct Z_Construct_UClass_APlayerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_DuckHunt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "PlayerHUD.h" },
		{ "ModuleRelativePath", "PlayerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerHUD_Statics::ClassParams = {
		&APlayerHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlayerHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerHUD, 4012710711);
	template<> DUCKHUNT_API UClass* StaticClass<APlayerHUD>()
	{
		return APlayerHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerHUD(Z_Construct_UClass_APlayerHUD, &APlayerHUD::StaticClass, TEXT("/Script/DuckHunt"), TEXT("APlayerHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
