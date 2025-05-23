// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeGrassTypeFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOLIAGEEDIT_LandscapeGrassTypeFactory_generated_h
#error "LandscapeGrassTypeFactory.generated.h already included, missing '#pragma once' in LandscapeGrassTypeFactory.h"
#endif
#define FOLIAGEEDIT_LandscapeGrassTypeFactory_generated_h

#define FID_Engine_Source_Editor_FoliageEdit_Private_LandscapeGrassTypeFactory_h_23_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeGrassTypeFactory(); \
	friend struct Z_Construct_UClass_ULandscapeGrassTypeFactory_Statics; \
public: \
	DECLARE_CLASS(ULandscapeGrassTypeFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FoliageEdit"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeGrassTypeFactory)


#define FID_Engine_Source_Editor_FoliageEdit_Private_LandscapeGrassTypeFactory_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeGrassTypeFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeGrassTypeFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeGrassTypeFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeGrassTypeFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULandscapeGrassTypeFactory(ULandscapeGrassTypeFactory&&); \
	ULandscapeGrassTypeFactory(const ULandscapeGrassTypeFactory&); \
public: \
	NO_API virtual ~ULandscapeGrassTypeFactory();


#define FID_Engine_Source_Editor_FoliageEdit_Private_LandscapeGrassTypeFactory_h_20_PROLOG
#define FID_Engine_Source_Editor_FoliageEdit_Private_LandscapeGrassTypeFactory_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_FoliageEdit_Private_LandscapeGrassTypeFactory_h_23_INCLASS \
	FID_Engine_Source_Editor_FoliageEdit_Private_LandscapeGrassTypeFactory_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGEEDIT_API UClass* StaticClass<class ULandscapeGrassTypeFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_FoliageEdit_Private_LandscapeGrassTypeFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
