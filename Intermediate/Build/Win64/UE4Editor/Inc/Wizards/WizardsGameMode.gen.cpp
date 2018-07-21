// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "WizardsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWizardsGameMode() {}
// Cross Module References
	WIZARDS_API UClass* Z_Construct_UClass_AWizardsGameMode_NoRegister();
	WIZARDS_API UClass* Z_Construct_UClass_AWizardsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_Wizards();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AWizardsGameMode::StaticRegisterNativesAWizardsGameMode()
	{
	}
	UClass* Z_Construct_UClass_AWizardsGameMode_NoRegister()
	{
		return AWizardsGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AWizardsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameMode,
				(UObject* (*)())Z_Construct_UPackage__Script_Wizards,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "WizardsGameMode.h" },
				{ "ModuleRelativePath", "WizardsGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myWidget_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WizardsGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_myWidget = { UE4CodeGen_Private::EPropertyClass::Object, "myWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AWizardsGameMode, myWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(NewProp_myWidget_MetaData, ARRAY_COUNT(NewProp_myWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerHUD_MetaData[] = {
				{ "BlueprintProtected", "true" },
				{ "Category", "Character" },
				{ "ModuleRelativePath", "WizardsGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_playerHUD = { UE4CodeGen_Private::EPropertyClass::Class, "playerHUD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010005, 1, nullptr, STRUCT_OFFSET(AWizardsGameMode, playerHUD), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_playerHUD_MetaData, ARRAY_COUNT(NewProp_playerHUD_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_myWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_playerHUD,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWizardsGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWizardsGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0088028Cu,
				nullptr, 0,
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
	IMPLEMENT_CLASS(AWizardsGameMode, 2956981806);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWizardsGameMode(Z_Construct_UClass_AWizardsGameMode, &AWizardsGameMode::StaticClass, TEXT("/Script/Wizards"), TEXT("AWizardsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWizardsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
