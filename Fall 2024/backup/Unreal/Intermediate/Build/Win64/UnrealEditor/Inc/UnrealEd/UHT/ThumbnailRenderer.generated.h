// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/ThumbnailRenderer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ThumbnailRenderer_generated_h
#error "ThumbnailRenderer.generated.h already included, missing '#pragma once' in ThumbnailRenderer.h"
#endif
#define UNREALED_ThumbnailRenderer_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailRenderer_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUThumbnailRenderer(); \
	friend struct Z_Construct_UClass_UThumbnailRenderer_Statics; \
public: \
	DECLARE_CLASS(UThumbnailRenderer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UThumbnailRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailRenderer_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThumbnailRenderer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UThumbnailRenderer(UThumbnailRenderer&&); \
	UThumbnailRenderer(const UThumbnailRenderer&); \
public: \
	UNREALED_API virtual ~UThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailRenderer_h_31_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailRenderer_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailRenderer_h_34_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailRenderer_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UThumbnailRenderer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailRenderer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
