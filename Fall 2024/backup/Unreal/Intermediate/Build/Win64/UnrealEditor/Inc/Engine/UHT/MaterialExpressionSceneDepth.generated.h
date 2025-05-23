// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSceneDepth.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionSceneDepth_generated_h
#error "MaterialExpressionSceneDepth.generated.h already included, missing '#pragma once' in MaterialExpressionSceneDepth.h"
#endif
#define ENGINE_MaterialExpressionSceneDepth_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneDepth_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSceneDepth(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSceneDepth, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSceneDepth)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneDepth_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionSceneDepth(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSceneDepth) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionSceneDepth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSceneDepth); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionSceneDepth(UMaterialExpressionSceneDepth&&); \
	UMaterialExpressionSceneDepth(const UMaterialExpressionSceneDepth&); \
public: \
	NO_API virtual ~UMaterialExpressionSceneDepth();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneDepth_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneDepth_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneDepth_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneDepth_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionSceneDepth>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneDepth_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
