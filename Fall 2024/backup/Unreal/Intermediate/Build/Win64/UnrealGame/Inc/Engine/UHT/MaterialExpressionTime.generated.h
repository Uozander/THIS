// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTime.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionTime_generated_h
#error "MaterialExpressionTime.generated.h already included, missing '#pragma once' in MaterialExpressionTime.h"
#endif
#define ENGINE_MaterialExpressionTime_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTime(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTime_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTime, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTime)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTime) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTime); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionTime(UMaterialExpressionTime&&); \
	UMaterialExpressionTime(const UMaterialExpressionTime&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionTime();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionTime>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
