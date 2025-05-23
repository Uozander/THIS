// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeLayerInfoObjectFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPEEDITOR_LandscapeLayerInfoObjectFactory_generated_h
#error "LandscapeLayerInfoObjectFactory.generated.h already included, missing '#pragma once' in LandscapeLayerInfoObjectFactory.h"
#endif
#define LANDSCAPEEDITOR_LandscapeLayerInfoObjectFactory_generated_h

#define FID_Engine_Source_Editor_LandscapeEditor_Private_LandscapeLayerInfoObjectFactory_h_22_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeLayerInfoObjectFactory(); \
	friend struct Z_Construct_UClass_ULandscapeLayerInfoObjectFactory_Statics; \
public: \
	DECLARE_CLASS(ULandscapeLayerInfoObjectFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LandscapeEditor"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeLayerInfoObjectFactory)


#define FID_Engine_Source_Editor_LandscapeEditor_Private_LandscapeLayerInfoObjectFactory_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeLayerInfoObjectFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeLayerInfoObjectFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeLayerInfoObjectFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeLayerInfoObjectFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULandscapeLayerInfoObjectFactory(ULandscapeLayerInfoObjectFactory&&); \
	ULandscapeLayerInfoObjectFactory(const ULandscapeLayerInfoObjectFactory&); \
public: \
	NO_API virtual ~ULandscapeLayerInfoObjectFactory();


#define FID_Engine_Source_Editor_LandscapeEditor_Private_LandscapeLayerInfoObjectFactory_h_19_PROLOG
#define FID_Engine_Source_Editor_LandscapeEditor_Private_LandscapeLayerInfoObjectFactory_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LandscapeEditor_Private_LandscapeLayerInfoObjectFactory_h_22_INCLASS \
	FID_Engine_Source_Editor_LandscapeEditor_Private_LandscapeLayerInfoObjectFactory_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPEEDITOR_API UClass* StaticClass<class ULandscapeLayerInfoObjectFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LandscapeEditor_Private_LandscapeLayerInfoObjectFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
