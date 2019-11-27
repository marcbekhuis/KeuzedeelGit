// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Keuzedeel/KeuzedeelHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeuzedeelHUD() {}
// Cross Module References
	KEUZEDEEL_API UClass* Z_Construct_UClass_AKeuzedeelHUD_NoRegister();
	KEUZEDEEL_API UClass* Z_Construct_UClass_AKeuzedeelHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Keuzedeel();
// End Cross Module References
	void AKeuzedeelHUD::StaticRegisterNativesAKeuzedeelHUD()
	{
	}
	UClass* Z_Construct_UClass_AKeuzedeelHUD_NoRegister()
	{
		return AKeuzedeelHUD::StaticClass();
	}
	struct Z_Construct_UClass_AKeuzedeelHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKeuzedeelHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Keuzedeel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeuzedeelHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "KeuzedeelHUD.h" },
		{ "ModuleRelativePath", "KeuzedeelHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKeuzedeelHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeuzedeelHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKeuzedeelHUD_Statics::ClassParams = {
		&AKeuzedeelHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AKeuzedeelHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AKeuzedeelHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKeuzedeelHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKeuzedeelHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKeuzedeelHUD, 501298472);
	template<> KEUZEDEEL_API UClass* StaticClass<AKeuzedeelHUD>()
	{
		return AKeuzedeelHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKeuzedeelHUD(Z_Construct_UClass_AKeuzedeelHUD, &AKeuzedeelHUD::StaticClass, TEXT("/Script/Keuzedeel"), TEXT("AKeuzedeelHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKeuzedeelHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
