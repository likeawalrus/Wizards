// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WIZARDS_WizardsGameInstance_generated_h
#error "WizardsGameInstance.generated.h already included, missing '#pragma once' in WizardsGameInstance.h"
#endif
#define WIZARDS_WizardsGameInstance_generated_h

#define Wizards_Source_Wizards_Public_WizardsGameInstance_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJoinOnlineGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->JoinOnlineGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindOnlineGames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FindOnlineGames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartOnlineGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartOnlineGame(); \
		P_NATIVE_END; \
	}


#define Wizards_Source_Wizards_Public_WizardsGameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoinOnlineGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->JoinOnlineGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindOnlineGames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FindOnlineGames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartOnlineGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartOnlineGame(); \
		P_NATIVE_END; \
	}


#define Wizards_Source_Wizards_Public_WizardsGameInstance_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWizardsGameInstance(); \
	friend WIZARDS_API class UClass* Z_Construct_UClass_UWizardsGameInstance(); \
public: \
	DECLARE_CLASS(UWizardsGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Wizards"), NO_API) \
	DECLARE_SERIALIZER(UWizardsGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Wizards_Source_Wizards_Public_WizardsGameInstance_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUWizardsGameInstance(); \
	friend WIZARDS_API class UClass* Z_Construct_UClass_UWizardsGameInstance(); \
public: \
	DECLARE_CLASS(UWizardsGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Wizards"), NO_API) \
	DECLARE_SERIALIZER(UWizardsGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Wizards_Source_Wizards_Public_WizardsGameInstance_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWizardsGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWizardsGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWizardsGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWizardsGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWizardsGameInstance(UWizardsGameInstance&&); \
	NO_API UWizardsGameInstance(const UWizardsGameInstance&); \
public:


#define Wizards_Source_Wizards_Public_WizardsGameInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWizardsGameInstance(UWizardsGameInstance&&); \
	NO_API UWizardsGameInstance(const UWizardsGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWizardsGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWizardsGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWizardsGameInstance)


#define Wizards_Source_Wizards_Public_WizardsGameInstance_h_18_PRIVATE_PROPERTY_OFFSET
#define Wizards_Source_Wizards_Public_WizardsGameInstance_h_15_PROLOG
#define Wizards_Source_Wizards_Public_WizardsGameInstance_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wizards_Source_Wizards_Public_WizardsGameInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	Wizards_Source_Wizards_Public_WizardsGameInstance_h_18_RPC_WRAPPERS \
	Wizards_Source_Wizards_Public_WizardsGameInstance_h_18_INCLASS \
	Wizards_Source_Wizards_Public_WizardsGameInstance_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Wizards_Source_Wizards_Public_WizardsGameInstance_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wizards_Source_Wizards_Public_WizardsGameInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	Wizards_Source_Wizards_Public_WizardsGameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Wizards_Source_Wizards_Public_WizardsGameInstance_h_18_INCLASS_NO_PURE_DECLS \
	Wizards_Source_Wizards_Public_WizardsGameInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Wizards_Source_Wizards_Public_WizardsGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
