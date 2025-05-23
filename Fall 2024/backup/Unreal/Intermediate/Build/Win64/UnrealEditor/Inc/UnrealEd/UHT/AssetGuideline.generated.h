// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/AssetGuideline.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_AssetGuideline_generated_h
#error "AssetGuideline.generated.h already included, missing '#pragma once' in AssetGuideline.h"
#endif
#define UNREALED_AssetGuideline_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_AssetGuideline_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIniStringValue_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FIniStringValue>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_AssetGuideline_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetGuideline(); \
	friend struct Z_Construct_UClass_UAssetGuideline_Statics; \
public: \
	DECLARE_CLASS(UAssetGuideline, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UAssetGuideline)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_AssetGuideline_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAssetGuideline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetGuideline(UAssetGuideline&&); \
	UAssetGuideline(const UAssetGuideline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAssetGuideline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetGuideline); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetGuideline) \
	UNREALED_API virtual ~UAssetGuideline();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_AssetGuideline_h_37_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_AssetGuideline_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_AssetGuideline_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_AssetGuideline_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UAssetGuideline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Editor_AssetGuideline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
