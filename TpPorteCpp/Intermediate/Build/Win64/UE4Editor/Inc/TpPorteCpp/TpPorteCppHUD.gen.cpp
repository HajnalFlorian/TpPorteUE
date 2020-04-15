// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TpPorteCpp/TpPorteCppHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTpPorteCppHUD() {}
// Cross Module References
	TPPORTECPP_API UClass* Z_Construct_UClass_ATpPorteCppHUD_NoRegister();
	TPPORTECPP_API UClass* Z_Construct_UClass_ATpPorteCppHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TpPorteCpp();
// End Cross Module References
	void ATpPorteCppHUD::StaticRegisterNativesATpPorteCppHUD()
	{
	}
	UClass* Z_Construct_UClass_ATpPorteCppHUD_NoRegister()
	{
		return ATpPorteCppHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATpPorteCppHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATpPorteCppHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TpPorteCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATpPorteCppHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TpPorteCppHUD.h" },
		{ "ModuleRelativePath", "TpPorteCppHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATpPorteCppHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATpPorteCppHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATpPorteCppHUD_Statics::ClassParams = {
		&ATpPorteCppHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATpPorteCppHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATpPorteCppHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATpPorteCppHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATpPorteCppHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATpPorteCppHUD, 2402540678);
	template<> TPPORTECPP_API UClass* StaticClass<ATpPorteCppHUD>()
	{
		return ATpPorteCppHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATpPorteCppHUD(Z_Construct_UClass_ATpPorteCppHUD, &ATpPorteCppHUD::StaticClass, TEXT("/Script/TpPorteCpp"), TEXT("ATpPorteCppHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATpPorteCppHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
