// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionPower.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionPower_generated_h
#error "MaterialExpressionPower.generated.h already included, missing '#pragma once' in MaterialExpressionPower.h"
#endif
#define ENGINE_MaterialExpressionPower_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPower_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionPower(); \
	friend struct Z_Construct_UClass_UMaterialExpressionPower_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionPower, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionPower)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPower_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionPower(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionPower) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionPower); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionPower); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionPower(UMaterialExpressionPower&&); \
	UMaterialExpressionPower(const UMaterialExpressionPower&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionPower();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPower_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPower_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPower_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPower_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionPower>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPower_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
