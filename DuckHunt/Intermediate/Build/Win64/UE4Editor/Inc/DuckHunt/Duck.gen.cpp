// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DuckHunt/Duck.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDuck() {}
// Cross Module References
	DUCKHUNT_API UClass* Z_Construct_UClass_ADuck_NoRegister();
	DUCKHUNT_API UClass* Z_Construct_UClass_ADuck();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DuckHunt();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ADuck::StaticRegisterNativesADuck()
	{
	}
	UClass* Z_Construct_UClass_ADuck_NoRegister()
	{
		return ADuck::StaticClass();
	}
	struct Z_Construct_UClass_ADuck_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADuck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DuckHunt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADuck_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Duck.h" },
		{ "ModuleRelativePath", "Duck.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADuck_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Duck.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADuck_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(ADuck, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADuck_Statics::NewProp_StaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADuck_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADuck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADuck_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADuck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADuck>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADuck_Statics::ClassParams = {
		&ADuck::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ADuck_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ADuck_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ADuck_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADuck_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADuck()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADuck_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADuck, 3144148099);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADuck(Z_Construct_UClass_ADuck, &ADuck::StaticClass, TEXT("/Script/DuckHunt"), TEXT("ADuck"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADuck);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
