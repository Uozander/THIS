// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinitionDefault.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_AssetDefinitionDefault_generated_h
#error "AssetDefinitionDefault.generated.h already included, missing '#pragma once' in AssetDefinitionDefault.h"
#endif
#define UNREALED_AssetDefinitionDefault_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_AssetDefinitionDefault_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinitionDefault(); \
	friend struct Z_Construct_UClass_UAssetDefinitionDefault_Statics; \
public: \
	DECLARE_CLASS(UAssetDefinitionDefault, UAssetDefinition, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UAssetDefinitionDefault)


#define FID_Engine_Source_Editor_UnrealEd_Public_AssetDefinitionDefault_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAssetDefinitionDefault(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetDefinitionDefault(UAssetDefinitionDefault&&); \
	UAssetDefinitionDefault(const UAssetDefinitionDefault&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAssetDefinitionDefault); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinitionDefault); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinitionDefault) \
	UNREALED_API virtual ~UAssetDefinitionDefault();


#define FID_Engine_Source_Editor_UnrealEd_Public_AssetDefinitionDefault_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_AssetDefinitionDefault_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_AssetDefinitionDefault_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_AssetDefinitionDefault_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UAssetDefinitionDefault>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_AssetDefinitionDefault_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
