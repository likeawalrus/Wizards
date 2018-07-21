// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef WIZARDS_WizardsProjectile_generated_h
#error "WizardsProjectile.generated.h already included, missing '#pragma once' in WizardsProjectile.h"
#endif
#define WIZARDS_WizardsProjectile_generated_h

#define Wizards_Source_Wizards_WizardsProjectile_h_13_RPC_WRAPPERS \
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
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Wizards_Source_Wizards_WizardsProjectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
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
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Wizards_Source_Wizards_WizardsProjectile_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWizardsProjectile(); \
	friend WIZARDS_API class UClass* Z_Construct_UClass_AWizardsProjectile(); \
public: \
	DECLARE_CLASS(AWizardsProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Wizards"), NO_API) \
	DECLARE_SERIALIZER(AWizardsProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Wizards_Source_Wizards_WizardsProjectile_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAWizardsProjectile(); \
	friend WIZARDS_API class UClass* Z_Construct_UClass_AWizardsProjectile(); \
public: \
	DECLARE_CLASS(AWizardsProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Wizards"), NO_API) \
	DECLARE_SERIALIZER(AWizardsProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Wizards_Source_Wizards_WizardsProjectile_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWizardsProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWizardsProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWizardsProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWizardsProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWizardsProjectile(AWizardsProjectile&&); \
	NO_API AWizardsProjectile(const AWizardsProjectile&); \
public:


#define Wizards_Source_Wizards_WizardsProjectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWizardsProjectile(AWizardsProjectile&&); \
	NO_API AWizardsProjectile(const AWizardsProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWizardsProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWizardsProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWizardsProjectile)


#define Wizards_Source_Wizards_WizardsProjectile_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AWizardsProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AWizardsProjectile, ProjectileMovement); }


#define Wizards_Source_Wizards_WizardsProjectile_h_10_PROLOG
#define Wizards_Source_Wizards_WizardsProjectile_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wizards_Source_Wizards_WizardsProjectile_h_13_PRIVATE_PROPERTY_OFFSET \
	Wizards_Source_Wizards_WizardsProjectile_h_13_RPC_WRAPPERS \
	Wizards_Source_Wizards_WizardsProjectile_h_13_INCLASS \
	Wizards_Source_Wizards_WizardsProjectile_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Wizards_Source_Wizards_WizardsProjectile_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wizards_Source_Wizards_WizardsProjectile_h_13_PRIVATE_PROPERTY_OFFSET \
	Wizards_Source_Wizards_WizardsProjectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Wizards_Source_Wizards_WizardsProjectile_h_13_INCLASS_NO_PURE_DECLS \
	Wizards_Source_Wizards_WizardsProjectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Wizards_Source_Wizards_WizardsProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
