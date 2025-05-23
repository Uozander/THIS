// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionCustomOutput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionCustomOutput_generated_h
#error "MaterialExpressionCustomOutput.generated.h already included, missing '#pragma once' in MaterialExpressionCustomOutput.h"
#endif
#define ENGINE_MaterialExpressionCustomOutput_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustomOutput_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionCustomOutput(); \
	friend struct Z_Construct_UClass_UMaterialExpressionCustomOutput_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionCustomOutput, UMaterialExpression, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionCustomOutput)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustomOutput_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionCustomOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionCustomOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionCustomOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionCustomOutput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionCustomOutput(UMaterialExpressionCustomOutput&&); \
	UMaterialExpressionCustomOutput(const UMaterialExpressionCustomOutput&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionCustomOutput();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustomOutput_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustomOutput_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustomOutput_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustomOutput_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionCustomOutput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustomOutput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
