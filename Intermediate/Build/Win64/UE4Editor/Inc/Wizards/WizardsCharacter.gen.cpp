// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "WizardsCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWizardsCharacter() {}
// Cross Module References
	WIZARDS_API UScriptStruct* Z_Construct_UScriptStruct_FtheSpell();
	UPackage* Z_Construct_UPackage__Script_Wizards();
	WIZARDS_API UClass* Z_Construct_UClass_AWizardsCharacter_NoRegister();
	WIZARDS_API UClass* Z_Construct_UClass_AWizardsCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	WIZARDS_API UFunction* Z_Construct_UFunction_AWizardsCharacter_ClientFireProjectile();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	WIZARDS_API UFunction* Z_Construct_UFunction_AWizardsCharacter_ClientStopFiring();
	WIZARDS_API UFunction* Z_Construct_UFunction_AWizardsCharacter_GetHealth();
	WIZARDS_API UFunction* Z_Construct_UFunction_AWizardsCharacter_GetMana();
	WIZARDS_API UFunction* Z_Construct_UFunction_AWizardsCharacter_isFiring();
	WIZARDS_API UFunction* Z_Construct_UFunction_AWizardsCharacter_isJumping();
	WIZARDS_API UFunction* Z_Construct_UFunction_AWizardsCharacter_isRunning();
	WIZARDS_API UFunction* Z_Construct_UFunction_AWizardsCharacter_newCharactersSpells();
	WIZARDS_API UFunction* Z_Construct_UFunction_AWizardsCharacter_ServerFireProjectile();
	WIZARDS_API UFunction* Z_Construct_UFunction_AWizardsCharacter_ServerStopFiring();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	WIZARDS_API UClass* Z_Construct_UClass_AWizardsGroundAOEInstant_NoRegister();
	WIZARDS_API UClass* Z_Construct_UClass_AWizardsCage_NoRegister();
	WIZARDS_API UClass* Z_Construct_UClass_AWizardsWall_NoRegister();
	WIZARDS_API UClass* Z_Construct_UClass_AWizardsBeam_NoRegister();
	WIZARDS_API UClass* Z_Construct_UClass_AWizardsCone_NoRegister();
	WIZARDS_API UClass* Z_Construct_UClass_AWizardsBlast_NoRegister();
	WIZARDS_API UClass* Z_Construct_UClass_AWizardsProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FtheSpell::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WIZARDS_API uint32 Get_Z_Construct_UScriptStruct_FtheSpell_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FtheSpell, Z_Construct_UPackage__Script_Wizards(), TEXT("theSpell"), sizeof(FtheSpell), Get_Z_Construct_UScriptStruct_FtheSpell_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FtheSpell(FtheSpell::StaticStruct, TEXT("/Script/Wizards"), TEXT("theSpell"), false, nullptr, nullptr);
static struct FScriptStruct_Wizards_StaticRegisterNativesFtheSpell
{
	FScriptStruct_Wizards_StaticRegisterNativesFtheSpell()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("theSpell")),new UScriptStruct::TCppStructOps<FtheSpell>);
	}
} ScriptStruct_Wizards_StaticRegisterNativesFtheSpell;
	UScriptStruct* Z_Construct_UScriptStruct_FtheSpell()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FtheSpell_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Wizards();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("theSpell"), sizeof(FtheSpell), Get_Z_Construct_UScriptStruct_FtheSpell_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FtheSpell>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionDeathSize_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_explosionDeathSize = { UE4CodeGen_Private::EPropertyClass::Float, "explosionDeathSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FtheSpell, explosionDeathSize), METADATA_PARAMS(NewProp_explosionDeathSize_MetaData, ARRAY_COUNT(NewProp_explosionDeathSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionDeathDamage_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_explosionDeathDamage = { UE4CodeGen_Private::EPropertyClass::Float, "explosionDeathDamage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FtheSpell, explosionDeathDamage), METADATA_PARAMS(NewProp_explosionDeathDamage_MetaData, ARRAY_COUNT(NewProp_explosionDeathDamage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionHitSize_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_explosionHitSize = { UE4CodeGen_Private::EPropertyClass::Float, "explosionHitSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FtheSpell, explosionHitSize), METADATA_PARAMS(NewProp_explosionHitSize_MetaData, ARRAY_COUNT(NewProp_explosionHitSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionHitDamage_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_explosionHitDamage = { UE4CodeGen_Private::EPropertyClass::Float, "explosionHitDamage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FtheSpell, explosionHitDamage), METADATA_PARAMS(NewProp_explosionHitDamage_MetaData, ARRAY_COUNT(NewProp_explosionHitDamage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explodeOnDeath_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			auto NewProp_explodeOnDeath_SetBit = [](void* Obj){ ((FtheSpell*)Obj)->explodeOnDeath = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_explodeOnDeath = { UE4CodeGen_Private::EPropertyClass::Bool, "explodeOnDeath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FtheSpell), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_explodeOnDeath_SetBit)>::SetBit, METADATA_PARAMS(NewProp_explodeOnDeath_MetaData, ARRAY_COUNT(NewProp_explodeOnDeath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explodeOnCollision_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			auto NewProp_explodeOnCollision_SetBit = [](void* Obj){ ((FtheSpell*)Obj)->explodeOnCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_explodeOnCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "explodeOnCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FtheSpell), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_explodeOnCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_explodeOnCollision_MetaData, ARRAY_COUNT(NewProp_explodeOnCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isHoming_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			auto NewProp_isHoming_SetBit = [](void* Obj){ ((FtheSpell*)Obj)->isHoming = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHoming = { UE4CodeGen_Private::EPropertyClass::Bool, "isHoming", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FtheSpell), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isHoming_SetBit)>::SetBit, METADATA_PARAMS(NewProp_isHoming_MetaData, ARRAY_COUNT(NewProp_isHoming_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasGravity_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			auto NewProp_hasGravity_SetBit = [](void* Obj){ ((FtheSpell*)Obj)->hasGravity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasGravity = { UE4CodeGen_Private::EPropertyClass::Bool, "hasGravity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FtheSpell), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_hasGravity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_hasGravity_MetaData, ARRAY_COUNT(NewProp_hasGravity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canBounce_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			auto NewProp_canBounce_SetBit = [](void* Obj){ ((FtheSpell*)Obj)->canBounce = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canBounce = { UE4CodeGen_Private::EPropertyClass::Bool, "canBounce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FtheSpell), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_canBounce_SetBit)>::SetBit, METADATA_PARAMS(NewProp_canBounce_MetaData, ARRAY_COUNT(NewProp_canBounce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spellSize_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
				{ "ToolTip", "lifetime for projectiles, distance for rays and blasts" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_spellSize = { UE4CodeGen_Private::EPropertyClass::Float, "spellSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FtheSpell, spellSize), METADATA_PARAMS(NewProp_spellSize_MetaData, ARRAY_COUNT(NewProp_spellSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spellRange_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_spellRange = { UE4CodeGen_Private::EPropertyClass::Float, "spellRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FtheSpell, spellRange), METADATA_PARAMS(NewProp_spellRange_MetaData, ARRAY_COUNT(NewProp_spellRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spellDamage_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_spellDamage = { UE4CodeGen_Private::EPropertyClass::Float, "spellDamage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FtheSpell, spellDamage), METADATA_PARAMS(NewProp_spellDamage_MetaData, ARRAY_COUNT(NewProp_spellDamage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spellSpeed_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_spellSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "spellSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FtheSpell, spellSpeed), METADATA_PARAMS(NewProp_spellSpeed_MetaData, ARRAY_COUNT(NewProp_spellSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spellCost_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_spellCost = { UE4CodeGen_Private::EPropertyClass::Float, "spellCost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FtheSpell, spellCost), METADATA_PARAMS(NewProp_spellCost_MetaData, ARRAY_COUNT(NewProp_spellCost_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spellType_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_spellType = { UE4CodeGen_Private::EPropertyClass::Byte, "spellType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FtheSpell, spellType), nullptr, METADATA_PARAMS(NewProp_spellType_MetaData, ARRAY_COUNT(NewProp_spellType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spellEffect_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_spellEffect = { UE4CodeGen_Private::EPropertyClass::Byte, "spellEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FtheSpell, spellEffect), nullptr, METADATA_PARAMS(NewProp_spellEffect_MetaData, ARRAY_COUNT(NewProp_spellEffect_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_explosionDeathSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_explosionDeathDamage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_explosionHitSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_explosionHitDamage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_explodeOnDeath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_explodeOnCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isHoming,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_hasGravity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_canBounce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_spellSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_spellRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_spellDamage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_spellSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_spellCost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_spellType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_spellEffect,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Wizards,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"theSpell",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FtheSpell),
				alignof(FtheSpell),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FtheSpell_CRC() { return 1861274686U; }
	static FName NAME_AWizardsCharacter_ClientFireProjectile = FName(TEXT("ClientFireProjectile"));
	void AWizardsCharacter::ClientFireProjectile(FtheSpell castSpell, FRotator rotation, FVector location)
	{
		WizardsCharacter_eventClientFireProjectile_Parms Parms;
		Parms.castSpell=castSpell;
		Parms.rotation=rotation;
		Parms.location=location;
		ProcessEvent(FindFunctionChecked(NAME_AWizardsCharacter_ClientFireProjectile),&Parms);
	}
	static FName NAME_AWizardsCharacter_ClientStopFiring = FName(TEXT("ClientStopFiring"));
	void AWizardsCharacter::ClientStopFiring()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWizardsCharacter_ClientStopFiring),NULL);
	}
	static FName NAME_AWizardsCharacter_ServerFireProjectile = FName(TEXT("ServerFireProjectile"));
	void AWizardsCharacter::ServerFireProjectile(FtheSpell castSpell, FRotator rotation, FVector location)
	{
		WizardsCharacter_eventServerFireProjectile_Parms Parms;
		Parms.castSpell=castSpell;
		Parms.rotation=rotation;
		Parms.location=location;
		ProcessEvent(FindFunctionChecked(NAME_AWizardsCharacter_ServerFireProjectile),&Parms);
	}
	static FName NAME_AWizardsCharacter_ServerStopFiring = FName(TEXT("ServerStopFiring"));
	void AWizardsCharacter::ServerStopFiring()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWizardsCharacter_ServerStopFiring),NULL);
	}
	void AWizardsCharacter::StaticRegisterNativesAWizardsCharacter()
	{
		UClass* Class = AWizardsCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientFireProjectile", (Native)&AWizardsCharacter::execClientFireProjectile },
			{ "ClientStopFiring", (Native)&AWizardsCharacter::execClientStopFiring },
			{ "GetHealth", (Native)&AWizardsCharacter::execGetHealth },
			{ "GetMana", (Native)&AWizardsCharacter::execGetMana },
			{ "isFiring", (Native)&AWizardsCharacter::execisFiring },
			{ "isJumping", (Native)&AWizardsCharacter::execisJumping },
			{ "isRunning", (Native)&AWizardsCharacter::execisRunning },
			{ "newCharactersSpells", (Native)&AWizardsCharacter::execnewCharactersSpells },
			{ "ServerFireProjectile", (Native)&AWizardsCharacter::execServerFireProjectile },
			{ "ServerStopFiring", (Native)&AWizardsCharacter::execServerStopFiring },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AWizardsCharacter_ClientFireProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_location = { UE4CodeGen_Private::EPropertyClass::Struct, "location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WizardsCharacter_eventClientFireProjectile_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WizardsCharacter_eventClientFireProjectile_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_castSpell = { UE4CodeGen_Private::EPropertyClass::Struct, "castSpell", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WizardsCharacter_eventClientFireProjectile_Parms, castSpell), Z_Construct_UScriptStruct_FtheSpell, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_castSpell,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWizardsCharacter, "ClientFireProjectile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80824CC0, sizeof(WizardsCharacter_eventClientFireProjectile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWizardsCharacter_ClientStopFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWizardsCharacter, "ClientStopFiring", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80024CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWizardsCharacter_GetHealth()
	{
		struct WizardsCharacter_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WizardsCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CharacterFunctions" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWizardsCharacter, "GetHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(WizardsCharacter_eventGetHealth_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWizardsCharacter_GetMana()
	{
		struct WizardsCharacter_eventGetMana_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WizardsCharacter_eventGetMana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CharacterFunctions" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWizardsCharacter, "GetMana", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(WizardsCharacter_eventGetMana_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWizardsCharacter_isFiring()
	{
		struct WizardsCharacter_eventisFiring_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WizardsCharacter_eventisFiring_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CharacterFunctions" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWizardsCharacter, "isFiring", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(WizardsCharacter_eventisFiring_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWizardsCharacter_isJumping()
	{
		struct WizardsCharacter_eventisJumping_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((WizardsCharacter_eventisJumping_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WizardsCharacter_eventisJumping_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CharacterFunctions" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
				{ "ToolTip", "Stuff for animations" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWizardsCharacter, "isJumping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(WizardsCharacter_eventisJumping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWizardsCharacter_isRunning()
	{
		struct WizardsCharacter_eventisRunning_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((WizardsCharacter_eventisRunning_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WizardsCharacter_eventisRunning_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CharacterFunctions" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWizardsCharacter, "isRunning", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(WizardsCharacter_eventisRunning_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWizardsCharacter_newCharactersSpells()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CharacterFunctions" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWizardsCharacter, "newCharactersSpells", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWizardsCharacter_ServerFireProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_location = { UE4CodeGen_Private::EPropertyClass::Struct, "location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WizardsCharacter_eventServerFireProjectile_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WizardsCharacter_eventServerFireProjectile_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_castSpell = { UE4CodeGen_Private::EPropertyClass::Struct, "castSpell", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WizardsCharacter_eventServerFireProjectile_Parms, castSpell), Z_Construct_UScriptStruct_FtheSpell, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_castSpell,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
				{ "ToolTip", "server related code all goes down here" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWizardsCharacter, "ServerFireProjectile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80A20CC0, sizeof(WizardsCharacter_eventServerFireProjectile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWizardsCharacter_ServerStopFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWizardsCharacter, "ServerStopFiring", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWizardsCharacter_NoRegister()
	{
		return AWizardsCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AWizardsCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_Wizards,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AWizardsCharacter_ClientFireProjectile, "ClientFireProjectile" }, // 1587285076
				{ &Z_Construct_UFunction_AWizardsCharacter_ClientStopFiring, "ClientStopFiring" }, // 2846942351
				{ &Z_Construct_UFunction_AWizardsCharacter_GetHealth, "GetHealth" }, // 832713049
				{ &Z_Construct_UFunction_AWizardsCharacter_GetMana, "GetMana" }, // 2054379493
				{ &Z_Construct_UFunction_AWizardsCharacter_isFiring, "isFiring" }, // 4268460501
				{ &Z_Construct_UFunction_AWizardsCharacter_isJumping, "isJumping" }, // 2775703002
				{ &Z_Construct_UFunction_AWizardsCharacter_isRunning, "isRunning" }, // 2105567930
				{ &Z_Construct_UFunction_AWizardsCharacter_newCharactersSpells, "newCharactersSpells" }, // 374899656
				{ &Z_Construct_UFunction_AWizardsCharacter_ServerFireProjectile, "ServerFireProjectile" }, // 2630902829
				{ &Z_Construct_UFunction_AWizardsCharacter_ServerStopFiring, "ServerStopFiring" }, // 3429806029
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "WizardsCharacter.h" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Accessory1Mesh_MetaData[] = {
				{ "Category", "WizardsCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Accessory1Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Accessory1Mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, Accessory1Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Accessory1Mesh_MetaData, ARRAY_COUNT(NewProp_Accessory1Mesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingsMesh_MetaData[] = {
				{ "Category", "WizardsCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RingsMesh = { UE4CodeGen_Private::EPropertyClass::Object, "RingsMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, RingsMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_RingsMesh_MetaData, ARRAY_COUNT(NewProp_RingsMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoesMesh_MetaData[] = {
				{ "Category", "WizardsCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShoesMesh = { UE4CodeGen_Private::EPropertyClass::Object, "ShoesMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, ShoesMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_ShoesMesh_MetaData, ARRAY_COUNT(NewProp_ShoesMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PantsMesh_MetaData[] = {
				{ "Category", "WizardsCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PantsMesh = { UE4CodeGen_Private::EPropertyClass::Object, "PantsMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, PantsMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_PantsMesh_MetaData, ARRAY_COUNT(NewProp_PantsMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlovesMesh_MetaData[] = {
				{ "Category", "WizardsCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlovesMesh = { UE4CodeGen_Private::EPropertyClass::Object, "GlovesMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, GlovesMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_GlovesMesh_MetaData, ARRAY_COUNT(NewProp_GlovesMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoatMesh_MetaData[] = {
				{ "Category", "WizardsCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoatMesh = { UE4CodeGen_Private::EPropertyClass::Object, "CoatMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, CoatMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_CoatMesh_MetaData, ARRAY_COUNT(NewProp_CoatMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShirtMesh_MetaData[] = {
				{ "Category", "WizardsCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShirtMesh = { UE4CodeGen_Private::EPropertyClass::Object, "ShirtMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, ShirtMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_ShirtMesh_MetaData, ARRAY_COUNT(NewProp_ShirtMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldersMesh_MetaData[] = {
				{ "Category", "WizardsCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShouldersMesh = { UE4CodeGen_Private::EPropertyClass::Object, "ShouldersMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, ShouldersMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_ShouldersMesh_MetaData, ARRAY_COUNT(NewProp_ShouldersMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeckMesh_MetaData[] = {
				{ "Category", "WizardsCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NeckMesh = { UE4CodeGen_Private::EPropertyClass::Object, "NeckMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, NeckMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_NeckMesh_MetaData, ARRAY_COUNT(NewProp_NeckMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlassesMesh_MetaData[] = {
				{ "Category", "WizardsCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlassesMesh = { UE4CodeGen_Private::EPropertyClass::Object, "GlassesMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, GlassesMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_GlassesMesh_MetaData, ARRAY_COUNT(NewProp_GlassesMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadMesh_MetaData[] = {
				{ "Category", "WizardsCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeadMesh = { UE4CodeGen_Private::EPropertyClass::Object, "HeadMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, HeadMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_HeadMesh_MetaData, ARRAY_COUNT(NewProp_HeadMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
				{ "ToolTip", "AnimMontage to play each time we fire" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "FireAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(NewProp_FireAnimation_MetaData, ARRAY_COUNT(NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
				{ "ToolTip", "Sound to play each time we fire" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound = { UE4CodeGen_Private::EPropertyClass::Object, "FireSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(NewProp_FireSound_MetaData, ARRAY_COUNT(NewProp_FireSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_theCage_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_theCage = { UE4CodeGen_Private::EPropertyClass::Object, "theCage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, theCage), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_theCage_MetaData, ARRAY_COUNT(NewProp_theCage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_theWall_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_theWall = { UE4CodeGen_Private::EPropertyClass::Object, "theWall", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, theWall), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_theWall_MetaData, ARRAY_COUNT(NewProp_theWall_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AOEInstantClass_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_AOEInstantClass = { UE4CodeGen_Private::EPropertyClass::Class, "AOEInstantClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000021, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, AOEInstantClass), Z_Construct_UClass_AWizardsGroundAOEInstant_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_AOEInstantClass_MetaData, ARRAY_COUNT(NewProp_AOEInstantClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CageClass_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_CageClass = { UE4CodeGen_Private::EPropertyClass::Class, "CageClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000021, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, CageClass), Z_Construct_UClass_AWizardsCage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_CageClass_MetaData, ARRAY_COUNT(NewProp_CageClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallClass_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_WallClass = { UE4CodeGen_Private::EPropertyClass::Class, "WallClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000021, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, WallClass), Z_Construct_UClass_AWizardsWall_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_WallClass_MetaData, ARRAY_COUNT(NewProp_WallClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeamClass_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_BeamClass = { UE4CodeGen_Private::EPropertyClass::Class, "BeamClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000021, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, BeamClass), Z_Construct_UClass_AWizardsBeam_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_BeamClass_MetaData, ARRAY_COUNT(NewProp_BeamClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeClass_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ConeClass = { UE4CodeGen_Private::EPropertyClass::Class, "ConeClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000021, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, ConeClass), Z_Construct_UClass_AWizardsCone_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ConeClass_MetaData, ARRAY_COUNT(NewProp_ConeClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlastClass_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_BlastClass = { UE4CodeGen_Private::EPropertyClass::Class, "BlastClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000021, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, BlastClass), Z_Construct_UClass_AWizardsBlast_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_BlastClass_MetaData, ARRAY_COUNT(NewProp_BlastClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
				{ "ToolTip", "Projectile class to spawn" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000021, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, ProjectileClass), Z_Construct_UClass_AWizardsProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ProjectileClass_MetaData, ARRAY_COUNT(NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currSpell_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FInt8PropertyParams NewProp_currSpell = { UE4CodeGen_Private::EPropertyClass::Int8, "currSpell", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, currSpell), METADATA_PARAMS(NewProp_currSpell_MetaData, ARRAY_COUNT(NewProp_currSpell_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_colorList_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_colorList = { UE4CodeGen_Private::EPropertyClass::Array, "colorList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000024, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, colorList), METADATA_PARAMS(NewProp_colorList_MetaData, ARRAY_COUNT(NewProp_colorList_MetaData)) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_colorList_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "colorList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_clothesList_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_clothesList = { UE4CodeGen_Private::EPropertyClass::Array, "clothesList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000024, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, clothesList), METADATA_PARAMS(NewProp_clothesList_MetaData, ARRAY_COUNT(NewProp_clothesList_MetaData)) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_clothesList_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "clothesList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_morphList_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_morphList = { UE4CodeGen_Private::EPropertyClass::Array, "morphList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000024, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, morphList), METADATA_PARAMS(NewProp_morphList_MetaData, ARRAY_COUNT(NewProp_morphList_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_morphList_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "morphList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mySpellBook_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mySpellBook = { UE4CodeGen_Private::EPropertyClass::Array, "mySpellBook", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, mySpellBook), METADATA_PARAMS(NewProp_mySpellBook_MetaData, ARRAY_COUNT(NewProp_mySpellBook_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_mySpellBook_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mySpellBook", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FtheSpell, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
				{ "ToolTip", "Mana //UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Gameplay)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mana = { UE4CodeGen_Private::EPropertyClass::Float, "Mana", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, Mana), METADATA_PARAMS(NewProp_Mana_MetaData, ARRAY_COUNT(NewProp_Mana_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
			};
#endif
			auto NewProp_isDead_SetBit = [](void* Obj){ ((AWizardsCharacter*)Obj)->isDead = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDead = { UE4CodeGen_Private::EPropertyClass::Bool, "isDead", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AWizardsCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isDead_SetBit)>::SetBit, METADATA_PARAMS(NewProp_isDead_MetaData, ARRAY_COUNT(NewProp_isDead_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
				{ "ModuleRelativePath", "WizardsCharacter.h" },
				{ "ToolTip", "Health //UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Gameplay)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, Health), METADATA_PARAMS(NewProp_Health_MetaData, ARRAY_COUNT(NewProp_Health_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
				{ "ToolTip", "Gun muzzle's offset from the characters location" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "GunOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_GunOffset_MetaData, ARRAY_COUNT(NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
				{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, BaseLookUpRate), METADATA_PARAMS(NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
				{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, BaseTurnRate), METADATA_PARAMS(NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
				{ "ToolTip", "Camera boom positioning the camera behind the character" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_CameraBoom_MetaData, ARRAY_COUNT(NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonCameraComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WizardsCharacter.h" },
				{ "ToolTip", "Third person camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ThirdPersonCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AWizardsCharacter, ThirdPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_ThirdPersonCameraComponent_MetaData, ARRAY_COUNT(NewProp_ThirdPersonCameraComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Accessory1Mesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RingsMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShoesMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PantsMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GlovesMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CoatMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShirtMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShouldersMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NeckMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GlassesMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeadMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireAnimation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_theCage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_theWall,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AOEInstantClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CageClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WallClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BeamClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConeClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlastClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_currSpell,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_colorList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_colorList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_clothesList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_clothesList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_morphList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_morphList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mySpellBook,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mySpellBook_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mana,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isDead,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Health,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GunOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseLookUpRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseTurnRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraBoom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThirdPersonCameraComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWizardsCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWizardsCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWizardsCharacter, 3016119012);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWizardsCharacter(Z_Construct_UClass_AWizardsCharacter, &AWizardsCharacter::StaticClass, TEXT("/Script/Wizards"), TEXT("AWizardsCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWizardsCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
