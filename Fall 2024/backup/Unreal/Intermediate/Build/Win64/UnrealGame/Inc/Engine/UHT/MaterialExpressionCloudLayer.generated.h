// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionCloudLayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionCloudLayer_generated_h
#error "MaterialExpressionCloudLayer.generated.h already included, missing '#pragma once' in MaterialExpressionCloudLayer.h"
#endif
#define ENGINE_MaterialExpressionCloudLayer_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCloudLayer_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionCloudSampleAttribute(); \
	friend struct Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionCloudSampleAttribute, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionCloudSampleAttribute)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCloudLayer_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionCloudSampleAttribute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionCloudSampleAttribute) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionCloudSampleAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionCloudSampleAttribute); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionCloudSampleAttribute(UMaterialExpressionCloudSampleAttribute&&); \
	UMaterialExpressionCloudSampleAttribute(const UMaterialExpressionCloudSampleAttribute&); \
public: \
	NO_API virtual ~UMaterialExpressionCloudSampleAttribute();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCloudLayer_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCloudLayer_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCloudLayer_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCloudLayer_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionCloudSampleAttribute>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCloudLayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
