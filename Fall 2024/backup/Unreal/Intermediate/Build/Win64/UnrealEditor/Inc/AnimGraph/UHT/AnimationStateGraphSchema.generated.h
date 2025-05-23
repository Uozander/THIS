// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationStateGraphSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimationStateGraphSchema_generated_h
#error "AnimationStateGraphSchema.generated.h already included, missing '#pragma once' in AnimationStateGraphSchema.h"
#endif
#define ANIMGRAPH_AnimationStateGraphSchema_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraphSchema_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationStateGraphSchema(); \
	friend struct Z_Construct_UClass_UAnimationStateGraphSchema_Statics; \
public: \
	DECLARE_CLASS(UAnimationStateGraphSchema, UAnimationGraphSchema, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimationStateGraphSchema)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraphSchema_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationStateGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationStateGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationStateGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationStateGraphSchema); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationStateGraphSchema(UAnimationStateGraphSchema&&); \
	UAnimationStateGraphSchema(const UAnimationStateGraphSchema&); \
public: \
	ANIMGRAPH_API virtual ~UAnimationStateGraphSchema();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraphSchema_h_10_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraphSchema_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraphSchema_h_13_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraphSchema_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimationStateGraphSchema>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraphSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
