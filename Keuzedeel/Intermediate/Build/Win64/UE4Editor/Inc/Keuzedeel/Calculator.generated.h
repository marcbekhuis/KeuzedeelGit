// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KEUZEDEEL_Calculator_generated_h
#error "Calculator.generated.h already included, missing '#pragma once' in Calculator.h"
#endif
#define KEUZEDEEL_Calculator_generated_h

#define Keuzedeel_Source_Keuzedeel_Calculator_h_21_RPC_WRAPPERS
#define Keuzedeel_Source_Keuzedeel_Calculator_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Keuzedeel_Source_Keuzedeel_Calculator_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACalculator(); \
	friend struct Z_Construct_UClass_ACalculator_Statics; \
public: \
	DECLARE_CLASS(ACalculator, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Keuzedeel"), NO_API) \
	DECLARE_SERIALIZER(ACalculator)


#define Keuzedeel_Source_Keuzedeel_Calculator_h_21_INCLASS \
private: \
	static void StaticRegisterNativesACalculator(); \
	friend struct Z_Construct_UClass_ACalculator_Statics; \
public: \
	DECLARE_CLASS(ACalculator, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Keuzedeel"), NO_API) \
	DECLARE_SERIALIZER(ACalculator)


#define Keuzedeel_Source_Keuzedeel_Calculator_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACalculator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACalculator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACalculator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACalculator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACalculator(ACalculator&&); \
	NO_API ACalculator(const ACalculator&); \
public:


#define Keuzedeel_Source_Keuzedeel_Calculator_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACalculator(ACalculator&&); \
	NO_API ACalculator(const ACalculator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACalculator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACalculator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACalculator)


#define Keuzedeel_Source_Keuzedeel_Calculator_h_21_PRIVATE_PROPERTY_OFFSET
#define Keuzedeel_Source_Keuzedeel_Calculator_h_18_PROLOG
#define Keuzedeel_Source_Keuzedeel_Calculator_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Keuzedeel_Source_Keuzedeel_Calculator_h_21_PRIVATE_PROPERTY_OFFSET \
	Keuzedeel_Source_Keuzedeel_Calculator_h_21_RPC_WRAPPERS \
	Keuzedeel_Source_Keuzedeel_Calculator_h_21_INCLASS \
	Keuzedeel_Source_Keuzedeel_Calculator_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Keuzedeel_Source_Keuzedeel_Calculator_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Keuzedeel_Source_Keuzedeel_Calculator_h_21_PRIVATE_PROPERTY_OFFSET \
	Keuzedeel_Source_Keuzedeel_Calculator_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Keuzedeel_Source_Keuzedeel_Calculator_h_21_INCLASS_NO_PURE_DECLS \
	Keuzedeel_Source_Keuzedeel_Calculator_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KEUZEDEEL_API UClass* StaticClass<class ACalculator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Keuzedeel_Source_Keuzedeel_Calculator_h


#define FOREACH_ENUM_METHODS(op) \
	op(Add) \
	op(Minus) \
	op(Multiply) \
	op(Divide) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
