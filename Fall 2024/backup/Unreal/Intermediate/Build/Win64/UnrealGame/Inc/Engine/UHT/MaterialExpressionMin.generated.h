// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionMin.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionMin_generated_h
#error "MaterialExpressionMin.generated.h already included, missing '#pragma once' in MaterialExpressionMin.h"
#endif
#define ENGINE_MaterialExpressionMin_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMin_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMin(); \
	friend struct Z_Construct_UClass_UMaterialExpressionMin_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionMin, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionMin)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMin_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionMin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionMin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionMin(UMaterialExpressionMin&&); \
	UMaterialExpressionMin(const UMaterialExpressionMin&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionMin();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMin_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMin_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMin_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMin_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionMin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
