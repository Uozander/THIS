// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/SceneThumbnailInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_SceneThumbnailInfo_generated_h
#error "SceneThumbnailInfo.generated.h already included, missing '#pragma once' in SceneThumbnailInfo.h"
#endif
#define UNREALED_SceneThumbnailInfo_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfo_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USceneThumbnailInfo, UNREALED_API)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfo_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSceneThumbnailInfo(); \
	friend struct Z_Construct_UClass_USceneThumbnailInfo_Statics; \
public: \
	DECLARE_CLASS(USceneThumbnailInfo, UThumbnailInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(USceneThumbnailInfo) \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfo_h_18_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfo_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USceneThumbnailInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneThumbnailInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USceneThumbnailInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneThumbnailInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USceneThumbnailInfo(USceneThumbnailInfo&&); \
	USceneThumbnailInfo(const USceneThumbnailInfo&); \
public: \
	UNREALED_API virtual ~USceneThumbnailInfo();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfo_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfo_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfo_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfo_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class USceneThumbnailInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
