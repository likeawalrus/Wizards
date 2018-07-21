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
#ifdef WIZARDS_WizardsGroundAOEInstant_generated_h
#error "WizardsGroundAOEInstant.generated.h already included, missing '#pragma once' in WizardsGroundAOEInstant.h"
#endif
#define WIZARDS_WizardsGroundAOEInstant_generated_h

#define Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h_13_RPC_WRAPPERS \
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


#define Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWizardsGroundAOEInstant(); \
	friend WIZARDS_API class UClass* Z_Construct_UClass_AWizardsGroundAOEInstant(); \
public: \
	DECLARE_CLASS(AWizardsGroundAOEInstant, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Wizards"), NO_API) \
	DECLARE_SERIALIZER(AWizardsGroundAOEInstant) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAWizardsGroundAOEInstant(); \
	friend WIZARDS_API class UClass* Z_Construct_UClass_AWizardsGroundAOEInstant(); \
public: \
	DECLARE_CLASS(AWizardsGroundAOEInstant, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Wizards"), NO_API) \
	DECLARE_SERIALIZER(AWizardsGroundAOEInstant) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWizardsGroundAOEInstant(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWizardsGroundAOEInstant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWizardsGroundAOEInstant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWizardsGroundAOEInstant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWizardsGroundAOEInstant(AWizardsGroundAOEInstant&&); \
	NO_API AWizardsGroundAOEInstant(const AWizardsGroundAOEInstant&); \
public:


#define Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWizardsGroundAOEInstant(AWizardsGroundAOEInstant&&); \
	NO_API AWizardsGroundAOEInstant(const AWizardsGroundAOEInstant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWizardsGroundAOEInstant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWizardsGroundAOEInstant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWizardsGroundAOEInstant)


#define Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h_13_PRIVATE_PROPERTY_OFFSET
#define Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h_10_PROLOG
#define Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h_13_PRIVATE_PROPERTY_OFFSET \
	Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h_13_RPC_WRAPPERS \
	Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h_13_INCLASS \
	Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h_13_PRIVATE_PROPERTY_OFFSET \
	Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h_13_INCLASS_NO_PURE_DECLS \
	Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Wizards_Source_Wizards_Public_WizardsGroundAOEInstant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
