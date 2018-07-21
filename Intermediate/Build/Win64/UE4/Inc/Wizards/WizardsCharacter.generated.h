// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FtheSpell;
struct FRotator;
struct FVector;
#ifdef WIZARDS_WizardsCharacter_generated_h
#error "WizardsCharacter.generated.h already included, missing '#pragma once' in WizardsCharacter.h"
#endif
#define WIZARDS_WizardsCharacter_generated_h

#define Wizards_Source_Wizards_WizardsCharacter_h_16_GENERATED_BODY \
	friend WIZARDS_API class UScriptStruct* Z_Construct_UScriptStruct_FtheSpell(); \
	WIZARDS_API static class UScriptStruct* StaticStruct();


#define Wizards_Source_Wizards_WizardsCharacter_h_56_RPC_WRAPPERS \
	virtual bool ClientStopFiring_Validate(); \
	virtual void ClientStopFiring_Implementation(); \
	virtual bool ServerStopFiring_Validate(); \
	virtual void ServerStopFiring_Implementation(); \
	virtual bool ClientFireProjectile_Validate(FtheSpell , FRotator , FVector ); \
	virtual void ClientFireProjectile_Implementation(FtheSpell castSpell, FRotator rotation, FVector location); \
	virtual bool ServerFireProjectile_Validate(FtheSpell , FRotator , FVector ); \
	virtual void ServerFireProjectile_Implementation(FtheSpell castSpell, FRotator rotation, FVector location); \
 \
	DECLARE_FUNCTION(execClientStopFiring) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ClientStopFiring_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ClientStopFiring_Validate")); \
			return; \
		} \
		this->ClientStopFiring_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerStopFiring) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerStopFiring_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerStopFiring_Validate")); \
			return; \
		} \
		this->ServerStopFiring_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientFireProjectile) \
	{ \
		P_GET_STRUCT(FtheSpell,Z_Param_castSpell); \
		P_GET_STRUCT(FRotator,Z_Param_rotation); \
		P_GET_STRUCT(FVector,Z_Param_location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ClientFireProjectile_Validate(Z_Param_castSpell,Z_Param_rotation,Z_Param_location)) \
		{ \
			RPC_ValidateFailed(TEXT("ClientFireProjectile_Validate")); \
			return; \
		} \
		this->ClientFireProjectile_Implementation(Z_Param_castSpell,Z_Param_rotation,Z_Param_location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerFireProjectile) \
	{ \
		P_GET_STRUCT(FtheSpell,Z_Param_castSpell); \
		P_GET_STRUCT(FRotator,Z_Param_rotation); \
		P_GET_STRUCT(FVector,Z_Param_location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerFireProjectile_Validate(Z_Param_castSpell,Z_Param_rotation,Z_Param_location)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFireProjectile_Validate")); \
			return; \
		} \
		this->ServerFireProjectile_Implementation(Z_Param_castSpell,Z_Param_rotation,Z_Param_location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisFiring) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->isFiring(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisRunning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->isRunning(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisJumping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->isJumping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMana) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMana(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execnewCharactersSpells) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->newCharactersSpells(); \
		P_NATIVE_END; \
	}


#define Wizards_Source_Wizards_WizardsCharacter_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClientStopFiring) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ClientStopFiring_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ClientStopFiring_Validate")); \
			return; \
		} \
		this->ClientStopFiring_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerStopFiring) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerStopFiring_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerStopFiring_Validate")); \
			return; \
		} \
		this->ServerStopFiring_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientFireProjectile) \
	{ \
		P_GET_STRUCT(FtheSpell,Z_Param_castSpell); \
		P_GET_STRUCT(FRotator,Z_Param_rotation); \
		P_GET_STRUCT(FVector,Z_Param_location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ClientFireProjectile_Validate(Z_Param_castSpell,Z_Param_rotation,Z_Param_location)) \
		{ \
			RPC_ValidateFailed(TEXT("ClientFireProjectile_Validate")); \
			return; \
		} \
		this->ClientFireProjectile_Implementation(Z_Param_castSpell,Z_Param_rotation,Z_Param_location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerFireProjectile) \
	{ \
		P_GET_STRUCT(FtheSpell,Z_Param_castSpell); \
		P_GET_STRUCT(FRotator,Z_Param_rotation); \
		P_GET_STRUCT(FVector,Z_Param_location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerFireProjectile_Validate(Z_Param_castSpell,Z_Param_rotation,Z_Param_location)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFireProjectile_Validate")); \
			return; \
		} \
		this->ServerFireProjectile_Implementation(Z_Param_castSpell,Z_Param_rotation,Z_Param_location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisFiring) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->isFiring(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisRunning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->isRunning(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisJumping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->isJumping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMana) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMana(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execnewCharactersSpells) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->newCharactersSpells(); \
		P_NATIVE_END; \
	}


#define Wizards_Source_Wizards_WizardsCharacter_h_56_EVENT_PARMS \
	struct WizardsCharacter_eventClientFireProjectile_Parms \
	{ \
		FtheSpell castSpell; \
		FRotator rotation; \
		FVector location; \
	}; \
	struct WizardsCharacter_eventServerFireProjectile_Parms \
	{ \
		FtheSpell castSpell; \
		FRotator rotation; \
		FVector location; \
	};


#define Wizards_Source_Wizards_WizardsCharacter_h_56_CALLBACK_WRAPPERS
#define Wizards_Source_Wizards_WizardsCharacter_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWizardsCharacter(); \
	friend WIZARDS_API class UClass* Z_Construct_UClass_AWizardsCharacter(); \
public: \
	DECLARE_CLASS(AWizardsCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Wizards"), NO_API) \
	DECLARE_SERIALIZER(AWizardsCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Wizards_Source_Wizards_WizardsCharacter_h_56_INCLASS \
private: \
	static void StaticRegisterNativesAWizardsCharacter(); \
	friend WIZARDS_API class UClass* Z_Construct_UClass_AWizardsCharacter(); \
public: \
	DECLARE_CLASS(AWizardsCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Wizards"), NO_API) \
	DECLARE_SERIALIZER(AWizardsCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Wizards_Source_Wizards_WizardsCharacter_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWizardsCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWizardsCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWizardsCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWizardsCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWizardsCharacter(AWizardsCharacter&&); \
	NO_API AWizardsCharacter(const AWizardsCharacter&); \
public:


#define Wizards_Source_Wizards_WizardsCharacter_h_56_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWizardsCharacter(AWizardsCharacter&&); \
	NO_API AWizardsCharacter(const AWizardsCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWizardsCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWizardsCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWizardsCharacter)


#define Wizards_Source_Wizards_WizardsCharacter_h_56_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ThirdPersonCameraComponent() { return STRUCT_OFFSET(AWizardsCharacter, ThirdPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AWizardsCharacter, CameraBoom); }


#define Wizards_Source_Wizards_WizardsCharacter_h_53_PROLOG \
	Wizards_Source_Wizards_WizardsCharacter_h_56_EVENT_PARMS


#define Wizards_Source_Wizards_WizardsCharacter_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wizards_Source_Wizards_WizardsCharacter_h_56_PRIVATE_PROPERTY_OFFSET \
	Wizards_Source_Wizards_WizardsCharacter_h_56_RPC_WRAPPERS \
	Wizards_Source_Wizards_WizardsCharacter_h_56_CALLBACK_WRAPPERS \
	Wizards_Source_Wizards_WizardsCharacter_h_56_INCLASS \
	Wizards_Source_Wizards_WizardsCharacter_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Wizards_Source_Wizards_WizardsCharacter_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wizards_Source_Wizards_WizardsCharacter_h_56_PRIVATE_PROPERTY_OFFSET \
	Wizards_Source_Wizards_WizardsCharacter_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	Wizards_Source_Wizards_WizardsCharacter_h_56_CALLBACK_WRAPPERS \
	Wizards_Source_Wizards_WizardsCharacter_h_56_INCLASS_NO_PURE_DECLS \
	Wizards_Source_Wizards_WizardsCharacter_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Wizards_Source_Wizards_WizardsCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
