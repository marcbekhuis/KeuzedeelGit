// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Keuzedeel/CubeSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeSpawner() {}
// Cross Module References
	KEUZEDEEL_API UClass* Z_Construct_UClass_ACubeSpawner_NoRegister();
	KEUZEDEEL_API UClass* Z_Construct_UClass_ACubeSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Keuzedeel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	KEUZEDEEL_API UClass* Z_Construct_UClass_AMyCube_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ACubeSpawner::StaticRegisterNativesACubeSpawner()
	{
	}
	UClass* Z_Construct_UClass_ACubeSpawner_NoRegister()
	{
		return ACubeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ACubeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_toSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_toSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_amountToPlace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_amountToPlace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Keuzedeel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CubeSpawner.h" },
		{ "ModuleRelativePath", "CubeSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeSpawner_Statics::NewProp_toSpawn_MetaData[] = {
		{ "Category", "Object" },
		{ "ModuleRelativePath", "CubeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACubeSpawner_Statics::NewProp_toSpawn = { "toSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACubeSpawner, toSpawn), Z_Construct_UClass_AMyCube_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACubeSpawner_Statics::NewProp_toSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACubeSpawner_Statics::NewProp_toSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeSpawner_Statics::NewProp_spacing_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "CubeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACubeSpawner_Statics::NewProp_spacing = { "spacing", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACubeSpawner, spacing), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACubeSpawner_Statics::NewProp_spacing_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACubeSpawner_Statics::NewProp_spacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeSpawner_Statics::NewProp_amountToPlace_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "CubeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACubeSpawner_Statics::NewProp_amountToPlace = { "amountToPlace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACubeSpawner, amountToPlace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACubeSpawner_Statics::NewProp_amountToPlace_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACubeSpawner_Statics::NewProp_amountToPlace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACubeSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeSpawner_Statics::NewProp_toSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeSpawner_Statics::NewProp_spacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeSpawner_Statics::NewProp_amountToPlace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubeSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACubeSpawner_Statics::ClassParams = {
		&ACubeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACubeSpawner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ACubeSpawner_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACubeSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACubeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACubeSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACubeSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACubeSpawner, 1285242504);
	template<> KEUZEDEEL_API UClass* StaticClass<ACubeSpawner>()
	{
		return ACubeSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACubeSpawner(Z_Construct_UClass_ACubeSpawner, &ACubeSpawner::StaticClass, TEXT("/Script/Keuzedeel"), TEXT("ACubeSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubeSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
