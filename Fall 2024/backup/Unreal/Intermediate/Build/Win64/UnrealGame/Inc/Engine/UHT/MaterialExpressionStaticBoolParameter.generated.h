// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionStaticBoolParameter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionStaticBoolParameter_generated_h
#error "MaterialExpressionStaticBoolParameter.generated.h already included, missing '#pragma once' in MaterialExpressionStaticBoolParameter.h"
#endif
#define ENGINE_MaterialExpressionStaticBoolParameter_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBoolParameter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionStaticBoolParameter(); \
	friend struct Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionStaticBoolParameter, UMaterialExpressionParameter, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionStaticBoolParameter)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBoolParameter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionStaticBoolParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionStaticBoolParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionStaticBoolParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionStaticBoolParameter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionStaticBoolParameter(UMaterialExpressionStaticBoolParameter&&); \
	UMaterialExpressionStaticBoolParameter(const UMaterialExpressionStaticBoolParameter&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionStaticBoolParameter();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBoolParameter_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBoolParameter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBoolParameter_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBoolParameter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionStaticBoolParameter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBoolParameter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
