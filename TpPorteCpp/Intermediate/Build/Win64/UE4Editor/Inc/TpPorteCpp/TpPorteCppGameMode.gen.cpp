// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TpPorteCpp/TpPorteCppGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTpPorteCppGameMode() {}
// Cross Module References
	TPPORTECPP_API UClass* Z_Construct_UClass_ATpPorteCppGameMode_NoRegister();
	TPPORTECPP_API UClass* Z_Construct_UClass_ATpPorteCppGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TpPorteCpp();
// End Cross Module References
	void ATpPorteCppGameMode::StaticRegisterNativesATpPorteCppGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATpPorteCppGameMode_NoRegister()
	{
		return ATpPorteCppGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATpPorteCppGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATpPorteCppGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TpPorteCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATpPorteCppGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TpPorteCppGameMode.h" },
		{ "ModuleRelativePath", "TpPorteCppGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATpPorteCppGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATpPorteCppGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATpPorteCppGameMode_Statics::ClassParams = {
		&ATpPorteCppGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATpPorteCppGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATpPorteCppGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATpPorteCppGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATpPorteCppGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATpPorteCppGameMode, 1558193762);
	template<> TPPORTECPP_API UClass* StaticClass<ATpPorteCppGameMode>()
	{
		return ATpPorteCppGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATpPorteCppGameMode(Z_Construct_UClass_ATpPorteCppGameMode, &ATpPorteCppGameMode::StaticClass, TEXT("/Script/TpPorteCpp"), TEXT("ATpPorteCppGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATpPorteCppGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
