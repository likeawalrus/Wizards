// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/WizardsGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWizardsGameInstance() {}
// Cross Module References
	WIZARDS_API UClass* Z_Construct_UClass_UWizardsGameInstance_NoRegister();
	WIZARDS_API UClass* Z_Construct_UClass_UWizardsGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Wizards();
	WIZARDS_API UFunction* Z_Construct_UFunction_UWizardsGameInstance_FindOnlineGames();
	WIZARDS_API UFunction* Z_Construct_UFunction_UWizardsGameInstance_JoinOnlineGame();
	WIZARDS_API UFunction* Z_Construct_UFunction_UWizardsGameInstance_StartOnlineGame();
// End Cross Module References
	void UWizardsGameInstance::StaticRegisterNativesUWizardsGameInstance()
	{
		UClass* Class = UWizardsGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindOnlineGames", (Native)&UWizardsGameInstance::execFindOnlineGames },
			{ "JoinOnlineGame", (Native)&UWizardsGameInstance::execJoinOnlineGame },
			{ "StartOnlineGame", (Native)&UWizardsGameInstance::execStartOnlineGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UWizardsGameInstance_FindOnlineGames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Network|Test" },
				{ "ModuleRelativePath", "Public/WizardsGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWizardsGameInstance, "FindOnlineGames", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWizardsGameInstance_JoinOnlineGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Network|Test" },
				{ "ModuleRelativePath", "Public/WizardsGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWizardsGameInstance, "JoinOnlineGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWizardsGameInstance_StartOnlineGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Network|Test" },
				{ "ModuleRelativePath", "Public/WizardsGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWizardsGameInstance, "StartOnlineGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWizardsGameInstance_NoRegister()
	{
		return UWizardsGameInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UWizardsGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_Wizards,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UWizardsGameInstance_FindOnlineGames, "FindOnlineGames" }, // 1088356066
				{ &Z_Construct_UFunction_UWizardsGameInstance_JoinOnlineGame, "JoinOnlineGame" }, // 2834969981
				{ &Z_Construct_UFunction_UWizardsGameInstance_StartOnlineGame, "StartOnlineGame" }, // 3569825230
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "WizardsGameInstance.h" },
				{ "ModuleRelativePath", "Public/WizardsGameInstance.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWizardsGameInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWizardsGameInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UWizardsGameInstance, 3673507040);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWizardsGameInstance(Z_Construct_UClass_UWizardsGameInstance, &UWizardsGameInstance::StaticClass, TEXT("/Script/Wizards"), TEXT("UWizardsGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWizardsGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
