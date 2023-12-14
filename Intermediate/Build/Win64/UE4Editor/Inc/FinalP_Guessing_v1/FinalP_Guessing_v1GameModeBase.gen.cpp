// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalP_Guessing_v1/FinalP_Guessing_v1GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinalP_Guessing_v1GameModeBase() {}
// Cross Module References
	FINALP_GUESSING_V1_API UClass* Z_Construct_UClass_AFinalP_Guessing_v1GameModeBase_NoRegister();
	FINALP_GUESSING_V1_API UClass* Z_Construct_UClass_AFinalP_Guessing_v1GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FinalP_Guessing_v1();
// End Cross Module References
	void AFinalP_Guessing_v1GameModeBase::StaticRegisterNativesAFinalP_Guessing_v1GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFinalP_Guessing_v1GameModeBase_NoRegister()
	{
		return AFinalP_Guessing_v1GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFinalP_Guessing_v1GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFinalP_Guessing_v1GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FinalP_Guessing_v1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFinalP_Guessing_v1GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FinalP_Guessing_v1GameModeBase.h" },
		{ "ModuleRelativePath", "FinalP_Guessing_v1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFinalP_Guessing_v1GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFinalP_Guessing_v1GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFinalP_Guessing_v1GameModeBase_Statics::ClassParams = {
		&AFinalP_Guessing_v1GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFinalP_Guessing_v1GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFinalP_Guessing_v1GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFinalP_Guessing_v1GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFinalP_Guessing_v1GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFinalP_Guessing_v1GameModeBase, 3416286446);
	template<> FINALP_GUESSING_V1_API UClass* StaticClass<AFinalP_Guessing_v1GameModeBase>()
	{
		return AFinalP_Guessing_v1GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFinalP_Guessing_v1GameModeBase(Z_Construct_UClass_AFinalP_Guessing_v1GameModeBase, &AFinalP_Guessing_v1GameModeBase::StaticClass, TEXT("/Script/FinalP_Guessing_v1"), TEXT("AFinalP_Guessing_v1GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFinalP_Guessing_v1GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
