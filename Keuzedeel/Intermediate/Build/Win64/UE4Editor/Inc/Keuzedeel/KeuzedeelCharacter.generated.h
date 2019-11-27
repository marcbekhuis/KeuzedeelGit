// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KEUZEDEEL_KeuzedeelCharacter_generated_h
#error "KeuzedeelCharacter.generated.h already included, missing '#pragma once' in KeuzedeelCharacter.h"
#endif
#define KEUZEDEEL_KeuzedeelCharacter_generated_h

#define Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h_14_RPC_WRAPPERS
#define Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKeuzedeelCharacter(); \
	friend struct Z_Construct_UClass_AKeuzedeelCharacter_Statics; \
public: \
	DECLARE_CLASS(AKeuzedeelCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Keuzedeel"), NO_API) \
	DECLARE_SERIALIZER(AKeuzedeelCharacter)


#define Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAKeuzedeelCharacter(); \
	friend struct Z_Construct_UClass_AKeuzedeelCharacter_Statics; \
public: \
	DECLARE_CLASS(AKeuzedeelCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Keuzedeel"), NO_API) \
	DECLARE_SERIALIZER(AKeuzedeelCharacter)


#define Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKeuzedeelCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKeuzedeelCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeuzedeelCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeuzedeelCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKeuzedeelCharacter(AKeuzedeelCharacter&&); \
	NO_API AKeuzedeelCharacter(const AKeuzedeelCharacter&); \
public:


#define Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKeuzedeelCharacter(AKeuzedeelCharacter&&); \
	NO_API AKeuzedeelCharacter(const AKeuzedeelCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeuzedeelCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeuzedeelCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKeuzedeelCharacter)


#define Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AKeuzedeelCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AKeuzedeelCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AKeuzedeelCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AKeuzedeelCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AKeuzedeelCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AKeuzedeelCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AKeuzedeelCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AKeuzedeelCharacter, L_MotionController); }


#define Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h_11_PROLOG
#define Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h_14_RPC_WRAPPERS \
	Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h_14_INCLASS \
	Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KEUZEDEEL_API UClass* StaticClass<class AKeuzedeelCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Keuzedeel_Source_Keuzedeel_KeuzedeelCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
