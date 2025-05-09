// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/WorldPartitionDataLayerToAssetCommandLet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_WorldPartitionDataLayerToAssetCommandLet_generated_h
#error "WorldPartitionDataLayerToAssetCommandLet.generated.h already included, missing '#pragma once' in WorldPartitionDataLayerToAssetCommandLet.h"
#endif
#define UNREALED_WorldPartitionDataLayerToAssetCommandLet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLayerConversionInfo(); \
	friend struct Z_Construct_UClass_UDataLayerConversionInfo_Statics; \
public: \
	DECLARE_CLASS(UDataLayerConversionInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UDataLayerConversionInfo)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataLayerConversionInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataLayerConversionInfo(UDataLayerConversionInfo&&); \
	UDataLayerConversionInfo(const UDataLayerConversionInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataLayerConversionInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerConversionInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayerConversionInfo) \
	NO_API virtual ~UDataLayerConversionInfo();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_60_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UDataLayerConversionInfo>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_98_INCLASS \
private: \
	static void StaticRegisterNativesUDataLayerToAssetCommandletContext(); \
	friend struct Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics; \
public: \
	DECLARE_CLASS(UDataLayerToAssetCommandletContext, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UDataLayerToAssetCommandletContext)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_98_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataLayerToAssetCommandletContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayerToAssetCommandletContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataLayerToAssetCommandletContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerToAssetCommandletContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataLayerToAssetCommandletContext(UDataLayerToAssetCommandletContext&&); \
	UDataLayerToAssetCommandletContext(const UDataLayerToAssetCommandletContext&); \
public: \
	NO_API virtual ~UDataLayerToAssetCommandletContext();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_95_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_98_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UDataLayerToAssetCommandletContext>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_130_INCLASS \
private: \
	static void StaticRegisterNativesUDataLayerToAssetCommandlet(); \
	friend struct Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics; \
public: \
	DECLARE_CLASS(UDataLayerToAssetCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UDataLayerToAssetCommandlet) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_130_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UDataLayerToAssetCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayerToAssetCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UDataLayerToAssetCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerToAssetCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataLayerToAssetCommandlet(UDataLayerToAssetCommandlet&&); \
	UDataLayerToAssetCommandlet(const UDataLayerToAssetCommandlet&); \
public: \
	UNREALED_API virtual ~UDataLayerToAssetCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_127_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_130_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_130_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_130_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UDataLayerToAssetCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
