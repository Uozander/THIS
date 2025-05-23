// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionHairAttributes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionHairAttributes_generated_h
#error "MaterialExpressionHairAttributes.generated.h already included, missing '#pragma once' in MaterialExpressionHairAttributes.h"
#endif
#define ENGINE_MaterialExpressionHairAttributes_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairAttributes_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionHairAttributes(); \
	friend struct Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionHairAttributes, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionHairAttributes)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairAttributes_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionHairAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionHairAttributes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionHairAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionHairAttributes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionHairAttributes(UMaterialExpressionHairAttributes&&); \
	UMaterialExpressionHairAttributes(const UMaterialExpressionHairAttributes&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionHairAttributes();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairAttributes_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairAttributes_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairAttributes_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairAttributes_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionHairAttributes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairAttributes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
