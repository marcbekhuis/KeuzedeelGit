// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Keuzedeel/KeuzedeelGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeuzedeelGameMode() {}
// Cross Module References
	KEUZEDEEL_API UClass* Z_Construct_UClass_AKeuzedeelGameMode_NoRegister();
	KEUZEDEEL_API UClass* Z_Construct_UClass_AKeuzedeelGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Keuzedeel();
// End Cross Module References
	void AKeuzedeelGameMode::StaticRegisterNativesAKeuzedeelGameMode()
	{
	}
	UClass* Z_Construct_UClass_AKeuzedeelGameMode_NoRegister()
	{
		return AKeuzedeelGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AKeuzedeelGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKeuzedeelGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Keuzedeel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeuzedeelGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "KeuzedeelGameMode.h" },
		{ "ModuleRelativePath", "KeuzedeelGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKeuzedeelGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeuzedeelGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKeuzedeelGameMode_Statics::ClassParams = {
		&AKeuzedeelGameMode::StaticClass,
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
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AKeuzedeelGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AKeuzedeelGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKeuzedeelGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKeuzedeelGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKeuzedeelGameMode, 3742328781);
	template<> KEUZEDEEL_API UClass* StaticClass<AKeuzedeelGameMode>()
	{
		return AKeuzedeelGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKeuzedeelGameMode(Z_Construct_UClass_AKeuzedeelGameMode, &AKeuzedeelGameMode::StaticClass, TEXT("/Script/Keuzedeel"), TEXT("AKeuzedeelGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKeuzedeelGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
