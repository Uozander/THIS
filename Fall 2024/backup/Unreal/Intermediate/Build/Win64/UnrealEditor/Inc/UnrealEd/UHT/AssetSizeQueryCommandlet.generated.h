// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/AssetSizeQueryCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_AssetSizeQueryCommandlet_generated_h
#error "AssetSizeQueryCommandlet.generated.h already included, missing '#pragma once' in AssetSizeQueryCommandlet.h"
#endif
#define UNREALED_AssetSizeQueryCommandlet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetSizeQueryCommandlet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUAssetSizeQueryCommandlet(); \
	friend struct Z_Construct_UClass_UAssetSizeQueryCommandlet_Statics; \
public: \
	DECLARE_CLASS(UAssetSizeQueryCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UAssetSizeQueryCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetSizeQueryCommandlet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetSizeQueryCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetSizeQueryCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetSizeQueryCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetSizeQueryCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetSizeQueryCommandlet(UAssetSizeQueryCommandlet&&); \
	UAssetSizeQueryCommandlet(const UAssetSizeQueryCommandlet&); \
public: \
	NO_API virtual ~UAssetSizeQueryCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetSizeQueryCommandlet_h_9_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetSizeQueryCommandlet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetSizeQueryCommandlet_h_12_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetSizeQueryCommandlet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UAssetSizeQueryCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetSizeQueryCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
