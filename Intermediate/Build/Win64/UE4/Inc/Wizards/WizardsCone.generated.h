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
#ifdef WIZARDS_WizardsCone_generated_h
#error "WizardsCone.generated.h already included, missing '#pragma once' in WizardsCone.h"
#endif
#define WIZARDS_WizardsCone_generated_h

#define Wizards_Source_Wizards_Public_WizardsCone_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlap(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Wizards_Source_Wizards_Public_WizardsCone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlap(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Wizards_Source_Wizards_Public_WizardsCone_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWizardsCone(); \
	friend WIZARDS_API class UClass* Z_Construct_UClass_AWizardsCone(); \
public: \
	DECLARE_CLASS(AWizardsCone, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Wizards"), NO_API) \
	DECLARE_SERIALIZER(AWizardsCone) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Wizards_Source_Wizards_Public_WizardsCone_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAWizardsCone(); \
	friend WIZARDS_API class UClass* Z_Construct_UClass_AWizardsCone(); \
public: \
	DECLARE_CLASS(AWizardsCone, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Wizards"), NO_API) \
	DECLARE_SERIALIZER(AWizardsCone) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Wizards_Source_Wizards_Public_WizardsCone_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWizardsCone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWizardsCone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWizardsCone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWizardsCone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWizardsCone(AWizardsCone&&); \
	NO_API AWizardsCone(const AWizardsCone&); \
public:


#define Wizards_Source_Wizards_Public_WizardsCone_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWizardsCone(AWizardsCone&&); \
	NO_API AWizardsCone(const AWizardsCone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWizardsCone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWizardsCone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWizardsCone)


#define Wizards_Source_Wizards_Public_WizardsCone_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AWizardsCone, CollisionComp); }


#define Wizards_Source_Wizards_Public_WizardsCone_h_11_PROLOG
#define Wizards_Source_Wizards_Public_WizardsCone_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wizards_Source_Wizards_Public_WizardsCone_h_14_PRIVATE_PROPERTY_OFFSET \
	Wizards_Source_Wizards_Public_WizardsCone_h_14_RPC_WRAPPERS \
	Wizards_Source_Wizards_Public_WizardsCone_h_14_INCLASS \
	Wizards_Source_Wizards_Public_WizardsCone_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Wizards_Source_Wizards_Public_WizardsCone_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wizards_Source_Wizards_Public_WizardsCone_h_14_PRIVATE_PROPERTY_OFFSET \
	Wizards_Source_Wizards_Public_WizardsCone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Wizards_Source_Wizards_Public_WizardsCone_h_14_INCLASS_NO_PURE_DECLS \
	Wizards_Source_Wizards_Public_WizardsCone_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Wizards_Source_Wizards_Public_WizardsCone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
