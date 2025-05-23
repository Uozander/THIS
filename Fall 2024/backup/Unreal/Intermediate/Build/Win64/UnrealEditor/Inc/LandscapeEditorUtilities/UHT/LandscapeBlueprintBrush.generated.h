// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeBlueprintBrush.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPEEDITORUTILITIES_LandscapeBlueprintBrush_generated_h
#error "LandscapeBlueprintBrush.generated.h already included, missing '#pragma once' in LandscapeBlueprintBrush.h"
#endif
#define LANDSCAPEEDITORUTILITIES_LandscapeBlueprintBrush_generated_h

#define FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeBlueprintBrush(); \
	friend struct Z_Construct_UClass_ALandscapeBlueprintBrush_Statics; \
public: \
	DECLARE_CLASS(ALandscapeBlueprintBrush, ALandscapeBlueprintBrushBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandscapeEditorUtilities"), NO_API) \
	DECLARE_SERIALIZER(ALandscapeBlueprintBrush)


#define FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALandscapeBlueprintBrush(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeBlueprintBrush) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandscapeBlueprintBrush); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeBlueprintBrush); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALandscapeBlueprintBrush(ALandscapeBlueprintBrush&&); \
	ALandscapeBlueprintBrush(const ALandscapeBlueprintBrush&); \
public: \
	NO_API virtual ~ALandscapeBlueprintBrush();


#define FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h_12_PROLOG
#define FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h_15_INCLASS \
	FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPEEDITORUTILITIES_API UClass* StaticClass<class ALandscapeBlueprintBrush>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
