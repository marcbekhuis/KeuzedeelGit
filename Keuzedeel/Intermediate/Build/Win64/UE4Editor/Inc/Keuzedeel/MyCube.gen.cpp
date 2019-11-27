// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Keuzedeel/MyCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCube() {}
// Cross Module References
	KEUZEDEEL_API UClass* Z_Construct_UClass_AMyCube_NoRegister();
	KEUZEDEEL_API UClass* Z_Construct_UClass_AMyCube();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Keuzedeel();
// End Cross Module References
	void AMyCube::StaticRegisterNativesAMyCube()
	{
	}
	UClass* Z_Construct_UClass_AMyCube_NoRegister()
	{
		return AMyCube::StaticClass();
	}
	struct Z_Construct_UClass_AMyCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Keuzedeel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCube_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MyCube.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MyCube.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCube_Statics::ClassParams = {
		&AMyCube::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyCube_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCube, 2385857931);
	template<> KEUZEDEEL_API UClass* StaticClass<AMyCube>()
	{
		return AMyCube::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCube(Z_Construct_UClass_AMyCube, &AMyCube::StaticClass, TEXT("/Script/Keuzedeel"), TEXT("AMyCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
