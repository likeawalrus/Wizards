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
struct FHitResult;
#ifdef WIZARDS_WizardsBlast_generated_h
#error "WizardsBlast.generated.h already included, missing '#pragma once' in WizardsBlast.h"
#endif
#define WIZARDS_WizardsBlast_generated_h

#define Wizards_Source_Wizards_Public_WizardsBlast_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Wizards_Source_Wizards_Public_WizardsBlast_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Wizards_Source_Wizards_Public_WizardsBlast_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWizardsBlast(); \
	friend WIZARDS_API class UClass* Z_Construct_UClass_AWizardsBlast(); \
public: \
	DECLARE_CLASS(AWizardsBlast, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Wizards"), NO_API) \
	DECLARE_SERIALIZER(AWizardsBlast) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Wizards_Source_Wizards_Public_WizardsBlast_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAWizardsBlast(); \
	friend WIZARDS_API class UClass* Z_Construct_UClass_AWizardsBlast(); \
public: \
	DECLARE_CLASS(AWizardsBlast, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Wizards"), NO_API) \
	DECLARE_SERIALIZER(AWizardsBlast) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Wizards_Source_Wizards_Public_WizardsBlast_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWizardsBlast(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWizardsBlast) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWizardsBlast); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWizardsBlast); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWizardsBlast(AWizardsBlast&&); \
	NO_API AWizardsBlast(const AWizardsBlast&); \
public:


#define Wizards_Source_Wizards_Public_WizardsBlast_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWizardsBlast(AWizardsBlast&&); \
	NO_API AWizardsBlast(const AWizardsBlast&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWizardsBlast); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWizardsBlast); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWizardsBlast)


#define Wizards_Source_Wizards_Public_WizardsBlast_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AWizardsBlast, CollisionComp); }


#define Wizards_Source_Wizards_Public_WizardsBlast_h_11_PROLOG
#define Wizards_Source_Wizards_Public_WizardsBlast_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wizards_Source_Wizards_Public_WizardsBlast_h_14_PRIVATE_PROPERTY_OFFSET \
	Wizards_Source_Wizards_Public_WizardsBlast_h_14_RPC_WRAPPERS \
	Wizards_Source_Wizards_Public_WizardsBlast_h_14_INCLASS \
	Wizards_Source_Wizards_Public_WizardsBlast_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Wizards_Source_Wizards_Public_WizardsBlast_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wizards_Source_Wizards_Public_WizardsBlast_h_14_PRIVATE_PROPERTY_OFFSET \
	Wizards_Source_Wizards_Public_WizardsBlast_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Wizards_Source_Wizards_Public_WizardsBlast_h_14_INCLASS_NO_PURE_DECLS \
	Wizards_Source_Wizards_Public_WizardsBlast_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Wizards_Source_Wizards_Public_WizardsBlast_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
