// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/spellBook.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodespellBook() {}
// Cross Module References
	WIZARDS_API UClass* Z_Construct_UClass_UspellBook_NoRegister();
	WIZARDS_API UClass* Z_Construct_UClass_UspellBook();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Wizards();
// End Cross Module References
	void UspellBook::StaticRegisterNativesUspellBook()
	{
	}
	UClass* Z_Construct_UClass_UspellBook_NoRegister()
	{
		return UspellBook::StaticClass();
	}
	UClass* Z_Construct_UClass_UspellBook()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Wizards,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "spellBook.h" },
				{ "ModuleRelativePath", "Public/spellBook.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UspellBook>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UspellBook::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UspellBook, 1889427320);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UspellBook(Z_Construct_UClass_UspellBook, &UspellBook::StaticClass, TEXT("/Script/Wizards"), TEXT("UspellBook"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UspellBook);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
