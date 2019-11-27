// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef KEUZEDEEL_KeuzedeelProjectile_generated_h
#error "KeuzedeelProjectile.generated.h already included, missing '#pragma once' in KeuzedeelProjectile.h"
#endif
#define KEUZEDEEL_KeuzedeelProjectile_generated_h

#define Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKeuzedeelProjectile(); \
	friend struct Z_Construct_UClass_AKeuzedeelProjectile_Statics; \
public: \
	DECLARE_CLASS(AKeuzedeelProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Keuzedeel"), NO_API) \
	DECLARE_SERIALIZER(AKeuzedeelProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAKeuzedeelProjectile(); \
	friend struct Z_Construct_UClass_AKeuzedeelProjectile_Statics; \
public: \
	DECLARE_CLASS(AKeuzedeelProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Keuzedeel"), NO_API) \
	DECLARE_SERIALIZER(AKeuzedeelProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKeuzedeelProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKeuzedeelProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeuzedeelProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeuzedeelProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKeuzedeelProjectile(AKeuzedeelProjectile&&); \
	NO_API AKeuzedeelProjectile(const AKeuzedeelProjectile&); \
public:


#define Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKeuzedeelProjectile(AKeuzedeelProjectile&&); \
	NO_API AKeuzedeelProjectile(const AKeuzedeelProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeuzedeelProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeuzedeelProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKeuzedeelProjectile)


#define Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AKeuzedeelProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AKeuzedeelProjectile, ProjectileMovement); }


#define Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h_9_PROLOG
#define Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h_12_RPC_WRAPPERS \
	Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h_12_INCLASS \
	Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KEUZEDEEL_API UClass* StaticClass<class AKeuzedeelProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Keuzedeel_Source_Keuzedeel_KeuzedeelProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
