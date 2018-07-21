// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WIZARDS_WizardsGameMode_generated_h
#error "WizardsGameMode.generated.h already included, missing '#pragma once' in WizardsGameMode.h"
#endif
#define WIZARDS_WizardsGameMode_generated_h

#define Wizards_Source_Wizards_WizardsGameMode_h_9_RPC_WRAPPERS
#define Wizards_Source_Wizards_WizardsGameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define Wizards_Source_Wizards_WizardsGameMode_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWizardsGameMode(); \
	friend WIZARDS_API class UClass* Z_Construct_UClass_AWizardsGameMode(); \
public: \
	DECLARE_CLASS(AWizardsGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/Wizards"), WIZARDS_API) \
	DECLARE_SERIALIZER(AWizardsGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Wizards_Source_Wizards_WizardsGameMode_h_9_INCLASS \
private: \
	static void StaticRegisterNativesAWizardsGameMode(); \
	friend WIZARDS_API class UClass* Z_Construct_UClass_AWizardsGameMode(); \
public: \
	DECLARE_CLASS(AWizardsGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/Wizards"), WIZARDS_API) \
	DECLARE_SERIALIZER(AWizardsGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Wizards_Source_Wizards_WizardsGameMode_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WIZARDS_API AWizardsGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWizardsGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WIZARDS_API, AWizardsGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWizardsGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WIZARDS_API AWizardsGameMode(AWizardsGameMode&&); \
	WIZARDS_API AWizardsGameMode(const AWizardsGameMode&); \
public:


#define Wizards_Source_Wizards_WizardsGameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WIZARDS_API AWizardsGameMode(AWizardsGameMode&&); \
	WIZARDS_API AWizardsGameMode(const AWizardsGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WIZARDS_API, AWizardsGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWizardsGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWizardsGameMode)


#define Wizards_Source_Wizards_WizardsGameMode_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__playerHUD() { return STRUCT_OFFSET(AWizardsGameMode, playerHUD); } \
	FORCEINLINE static uint32 __PPO__myWidget() { return STRUCT_OFFSET(AWizardsGameMode, myWidget); }


#define Wizards_Source_Wizards_WizardsGameMode_h_6_PROLOG
#define Wizards_Source_Wizards_WizardsGameMode_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wizards_Source_Wizards_WizardsGameMode_h_9_PRIVATE_PROPERTY_OFFSET \
	Wizards_Source_Wizards_WizardsGameMode_h_9_RPC_WRAPPERS \
	Wizards_Source_Wizards_WizardsGameMode_h_9_INCLASS \
	Wizards_Source_Wizards_WizardsGameMode_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Wizards_Source_Wizards_WizardsGameMode_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wizards_Source_Wizards_WizardsGameMode_h_9_PRIVATE_PROPERTY_OFFSET \
	Wizards_Source_Wizards_WizardsGameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Wizards_Source_Wizards_WizardsGameMode_h_9_INCLASS_NO_PURE_DECLS \
	Wizards_Source_Wizards_WizardsGameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Wizards_Source_Wizards_WizardsGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
