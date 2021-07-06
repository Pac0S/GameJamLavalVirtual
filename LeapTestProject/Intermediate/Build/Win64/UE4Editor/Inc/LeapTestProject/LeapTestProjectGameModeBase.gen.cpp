// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LeapTestProject/LeapTestProjectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapTestProjectGameModeBase() {}
// Cross Module References
	LEAPTESTPROJECT_API UClass* Z_Construct_UClass_ALeapTestProjectGameModeBase_NoRegister();
	LEAPTESTPROJECT_API UClass* Z_Construct_UClass_ALeapTestProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LeapTestProject();
// End Cross Module References
	void ALeapTestProjectGameModeBase::StaticRegisterNativesALeapTestProjectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ALeapTestProjectGameModeBase_NoRegister()
	{
		return ALeapTestProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALeapTestProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALeapTestProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LeapTestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeapTestProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LeapTestProjectGameModeBase.h" },
		{ "ModuleRelativePath", "LeapTestProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALeapTestProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALeapTestProjectGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALeapTestProjectGameModeBase_Statics::ClassParams = {
		&ALeapTestProjectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALeapTestProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALeapTestProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALeapTestProjectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALeapTestProjectGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALeapTestProjectGameModeBase, 115768301);
	template<> LEAPTESTPROJECT_API UClass* StaticClass<ALeapTestProjectGameModeBase>()
	{
		return ALeapTestProjectGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALeapTestProjectGameModeBase(Z_Construct_UClass_ALeapTestProjectGameModeBase, &ALeapTestProjectGameModeBase::StaticClass, TEXT("/Script/LeapTestProject"), TEXT("ALeapTestProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALeapTestProjectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
