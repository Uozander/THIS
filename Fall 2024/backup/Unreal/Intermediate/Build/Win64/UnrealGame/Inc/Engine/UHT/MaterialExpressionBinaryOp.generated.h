// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionBinaryOp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionBinaryOp_generated_h
#error "MaterialExpressionBinaryOp.generated.h already included, missing '#pragma once' in MaterialExpressionBinaryOp.h"
#endif
#define ENGINE_MaterialExpressionBinaryOp_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBinaryOp_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionBinaryOp(); \
	friend struct Z_Construct_UClass_UMaterialExpressionBinaryOp_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionBinaryOp, UMaterialExpression, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionBinaryOp)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBinaryOp_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionBinaryOp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionBinaryOp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionBinaryOp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionBinaryOp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionBinaryOp(UMaterialExpressionBinaryOp&&); \
	UMaterialExpressionBinaryOp(const UMaterialExpressionBinaryOp&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionBinaryOp();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBinaryOp_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBinaryOp_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBinaryOp_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBinaryOp_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionBinaryOp>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBinaryOp_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLess(); \
	friend struct Z_Construct_UClass_UMaterialExpressionLess_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionLess, UMaterialExpressionBinaryOp, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionLess)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBinaryOp_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionLess(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLess) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionLess); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLess); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionLess(UMaterialExpressionLess&&); \
	UMaterialExpressionLess(const UMaterialExpressionLess&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionLess();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBinaryOp_h_43_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBinaryOp_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBinaryOp_h_46_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBinaryOp_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionLess>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBinaryOp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
