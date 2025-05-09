// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/VolumeTextureThumbnailRenderer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_VolumeTextureThumbnailRenderer_generated_h
#error "VolumeTextureThumbnailRenderer.generated.h already included, missing '#pragma once' in VolumeTextureThumbnailRenderer.h"
#endif
#define UNREALED_VolumeTextureThumbnailRenderer_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_VolumeTextureThumbnailRenderer_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUVolumeTextureThumbnailRenderer(); \
	friend struct Z_Construct_UClass_UVolumeTextureThumbnailRenderer_Statics; \
public: \
	DECLARE_CLASS(UVolumeTextureThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UVolumeTextureThumbnailRenderer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_VolumeTextureThumbnailRenderer_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVolumeTextureThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumeTextureThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVolumeTextureThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumeTextureThumbnailRenderer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVolumeTextureThumbnailRenderer(UVolumeTextureThumbnailRenderer&&); \
	UVolumeTextureThumbnailRenderer(const UVolumeTextureThumbnailRenderer&); \
public: \
	NO_API virtual ~UVolumeTextureThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_VolumeTextureThumbnailRenderer_h_19_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_VolumeTextureThumbnailRenderer_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_VolumeTextureThumbnailRenderer_h_22_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_VolumeTextureThumbnailRenderer_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UVolumeTextureThumbnailRenderer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_VolumeTextureThumbnailRenderer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
