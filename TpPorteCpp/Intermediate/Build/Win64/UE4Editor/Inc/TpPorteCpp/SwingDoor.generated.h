// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TPPORTECPP_SwingDoor_generated_h
#error "SwingDoor.generated.h already included, missing '#pragma once' in SwingDoor.h"
#endif
#define TPPORTECPP_SwingDoor_generated_h

#define TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_SPARSE_DATA
#define TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToogleDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToogleDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execcontrolDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->controlDoor(); \
		P_NATIVE_END; \
	}


#define TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToogleDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToogleDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execcontrolDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->controlDoor(); \
		P_NATIVE_END; \
	}


#define TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwingDoor(); \
	friend struct Z_Construct_UClass_ASwingDoor_Statics; \
public: \
	DECLARE_CLASS(ASwingDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TpPorteCpp"), NO_API) \
	DECLARE_SERIALIZER(ASwingDoor)


#define TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASwingDoor(); \
	friend struct Z_Construct_UClass_ASwingDoor_Statics; \
public: \
	DECLARE_CLASS(ASwingDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TpPorteCpp"), NO_API) \
	DECLARE_SERIALIZER(ASwingDoor)


#define TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASwingDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASwingDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwingDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwingDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwingDoor(ASwingDoor&&); \
	NO_API ASwingDoor(const ASwingDoor&); \
public:


#define TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwingDoor(ASwingDoor&&); \
	NO_API ASwingDoor(const ASwingDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwingDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwingDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwingDoor)


#define TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_PRIVATE_PROPERTY_OFFSET
#define TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_11_PROLOG
#define TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_SPARSE_DATA \
	TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_RPC_WRAPPERS \
	TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_INCLASS \
	TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_SPARSE_DATA \
	TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_INCLASS_NO_PURE_DECLS \
	TpPorteCpp_Source_TpPorteCpp_SwingDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPPORTECPP_API UClass* StaticClass<class ASwingDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TpPorteCpp_Source_TpPorteCpp_SwingDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
