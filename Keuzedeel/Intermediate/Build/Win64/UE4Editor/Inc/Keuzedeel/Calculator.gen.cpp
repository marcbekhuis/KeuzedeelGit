// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Keuzedeel/Calculator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCalculator() {}
// Cross Module References
	KEUZEDEEL_API UEnum* Z_Construct_UEnum_Keuzedeel_Methods();
	UPackage* Z_Construct_UPackage__Script_Keuzedeel();
	KEUZEDEEL_API UClass* Z_Construct_UClass_ACalculator_NoRegister();
	KEUZEDEEL_API UClass* Z_Construct_UClass_ACalculator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* Methods_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Keuzedeel_Methods, Z_Construct_UPackage__Script_Keuzedeel(), TEXT("Methods"));
		}
		return Singleton;
	}
	template<> KEUZEDEEL_API UEnum* StaticEnum<Methods>()
	{
		return Methods_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Methods(Methods_StaticEnum, TEXT("/Script/Keuzedeel"), TEXT("Methods"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Keuzedeel_Methods_Hash() { return 2700201085U; }
	UEnum* Z_Construct_UEnum_Keuzedeel_Methods()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Keuzedeel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Methods"), 0, Get_Z_Construct_UEnum_Keuzedeel_Methods_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Add", (int64)Add },
				{ "Minus", (int64)Minus },
				{ "Multiply", (int64)Multiply },
				{ "Divide", (int64)Divide },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Add.Name", "Add" },
				{ "Divide.Name", "Divide" },
				{ "Minus.Name", "Minus" },
				{ "ModuleRelativePath", "Calculator.h" },
				{ "Multiply.Name", "Multiply" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Keuzedeel,
				nullptr,
				"Methods",
				"Methods",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ACalculator::StaticRegisterNativesACalculator()
	{
	}
	UClass* Z_Construct_UClass_ACalculator_NoRegister()
	{
		return ACalculator::StaticClass();
	}
	struct Z_Construct_UClass_ACalculator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Answer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Answer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_method_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_method;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_number2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_number2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_number1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_number1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACalculator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Keuzedeel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACalculator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Calculator.h" },
		{ "ModuleRelativePath", "Calculator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACalculator_Statics::NewProp_Answer_MetaData[] = {
		{ "Category", "CalculatorOutput" },
		{ "ModuleRelativePath", "Calculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACalculator_Statics::NewProp_Answer = { "Answer", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACalculator, Answer), METADATA_PARAMS(Z_Construct_UClass_ACalculator_Statics::NewProp_Answer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACalculator_Statics::NewProp_Answer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACalculator_Statics::NewProp_method_MetaData[] = {
		{ "Category", "CalculatorInput" },
		{ "ModuleRelativePath", "Calculator.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACalculator_Statics::NewProp_method = { "method", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACalculator, method), Z_Construct_UEnum_Keuzedeel_Methods, METADATA_PARAMS(Z_Construct_UClass_ACalculator_Statics::NewProp_method_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACalculator_Statics::NewProp_method_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACalculator_Statics::NewProp_number2_MetaData[] = {
		{ "Category", "CalculatorInput" },
		{ "ModuleRelativePath", "Calculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACalculator_Statics::NewProp_number2 = { "number2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACalculator, number2), METADATA_PARAMS(Z_Construct_UClass_ACalculator_Statics::NewProp_number2_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACalculator_Statics::NewProp_number2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACalculator_Statics::NewProp_number1_MetaData[] = {
		{ "Category", "CalculatorInput" },
		{ "ModuleRelativePath", "Calculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACalculator_Statics::NewProp_number1 = { "number1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACalculator, number1), METADATA_PARAMS(Z_Construct_UClass_ACalculator_Statics::NewProp_number1_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACalculator_Statics::NewProp_number1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACalculator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACalculator_Statics::NewProp_Answer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACalculator_Statics::NewProp_method,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACalculator_Statics::NewProp_number2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACalculator_Statics::NewProp_number1,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACalculator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACalculator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACalculator_Statics::ClassParams = {
		&ACalculator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACalculator_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ACalculator_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACalculator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACalculator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACalculator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACalculator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACalculator, 1566736427);
	template<> KEUZEDEEL_API UClass* StaticClass<ACalculator>()
	{
		return ACalculator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACalculator(Z_Construct_UClass_ACalculator, &ACalculator::StaticClass, TEXT("/Script/Keuzedeel"), TEXT("ACalculator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACalculator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
