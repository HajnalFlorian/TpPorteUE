// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TpPorteCpp/SwingDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwingDoor() {}
// Cross Module References
	TPPORTECPP_API UClass* Z_Construct_UClass_ASwingDoor_NoRegister();
	TPPORTECPP_API UClass* Z_Construct_UClass_ASwingDoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TpPorteCpp();
	TPPORTECPP_API UFunction* Z_Construct_UFunction_ASwingDoor_controlDoor();
	TPPORTECPP_API UFunction* Z_Construct_UFunction_ASwingDoor_SetState();
	TPPORTECPP_API UFunction* Z_Construct_UFunction_ASwingDoor_ToogleDoor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASwingDoor::StaticRegisterNativesASwingDoor()
	{
		UClass* Class = ASwingDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "controlDoor", &ASwingDoor::execcontrolDoor },
			{ "SetState", &ASwingDoor::execSetState },
			{ "ToogleDoor", &ASwingDoor::execToogleDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASwingDoor_controlDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwingDoor_controlDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SwingDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwingDoor_controlDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwingDoor, nullptr, "controlDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwingDoor_controlDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwingDoor_controlDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwingDoor_controlDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwingDoor_controlDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASwingDoor_SetState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwingDoor_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SwingDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwingDoor_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwingDoor, nullptr, "SetState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwingDoor_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwingDoor_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwingDoor_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwingDoor_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASwingDoor_ToogleDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwingDoor_ToogleDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SwingDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwingDoor_ToogleDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwingDoor, nullptr, "ToogleDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwingDoor_ToogleDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwingDoor_ToogleDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwingDoor_ToogleDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwingDoor_ToogleDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASwingDoor_NoRegister()
	{
		return ASwingDoor::StaticClass();
	}
	struct Z_Construct_UClass_ASwingDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorFrame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwingDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TpPorteCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASwingDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASwingDoor_controlDoor, "controlDoor" }, // 691430682
		{ &Z_Construct_UFunction_ASwingDoor_SetState, "SetState" }, // 3678635463
		{ &Z_Construct_UFunction_ASwingDoor_ToogleDoor, "ToogleDoor" }, // 2760860355
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwingDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SwingDoor.h" },
		{ "ModuleRelativePath", "SwingDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorCurve_MetaData[] = {
		{ "Category", "SwingDoor" },
		{ "ModuleRelativePath", "SwingDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorCurve = { "DoorCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwingDoor, DoorCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwingDoor_Statics::NewProp_Door_MetaData[] = {
		{ "Category", "SwingDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwingDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwingDoor_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwingDoor, Door), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwingDoor_Statics::NewProp_Door_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwingDoor_Statics::NewProp_Door_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorFrame_MetaData[] = {
		{ "Category", "SwingDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwingDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorFrame = { "DoorFrame", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwingDoor, DoorFrame), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorFrame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwingDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwingDoor_Statics::NewProp_Door,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwingDoor_Statics::NewProp_DoorFrame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwingDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwingDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASwingDoor_Statics::ClassParams = {
		&ASwingDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASwingDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASwingDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASwingDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASwingDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwingDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASwingDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwingDoor, 2396036933);
	template<> TPPORTECPP_API UClass* StaticClass<ASwingDoor>()
	{
		return ASwingDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwingDoor(Z_Construct_UClass_ASwingDoor, &ASwingDoor::StaticClass, TEXT("/Script/TpPorteCpp"), TEXT("ASwingDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwingDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
