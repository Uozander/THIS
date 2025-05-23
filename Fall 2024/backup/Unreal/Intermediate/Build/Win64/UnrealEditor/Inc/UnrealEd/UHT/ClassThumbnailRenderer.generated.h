// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/ClassThumbnailRenderer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ClassThumbnailRenderer_generated_h
#error "ClassThumbnailRenderer.generated.h already included, missing '#pragma once' in ClassThumbnailRenderer.h"
#endif
#define UNREALED_ClassThumbnailRenderer_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUClassThumbnailRenderer(); \
	friend struct Z_Construct_UClass_UClassThumbnailRenderer_Statics; \
public: \
	DECLARE_CLASS(UClassThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UClassThumbnailRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UClassThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClassThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UClassThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassThumbnailRenderer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UClassThumbnailRenderer(UClassThumbnailRenderer&&); \
	UClassThumbnailRenderer(const UClassThumbnailRenderer&); \
public: \
	UNREALED_API virtual ~UClassThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UClassThumbnailRenderer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
