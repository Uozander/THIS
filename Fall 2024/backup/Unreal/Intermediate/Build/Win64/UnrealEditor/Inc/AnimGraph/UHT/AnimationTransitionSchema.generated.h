// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationTransitionSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimationTransitionSchema_generated_h
#error "AnimationTransitionSchema.generated.h already included, missing '#pragma once' in AnimationTransitionSchema.h"
#endif
#define ANIMGRAPH_AnimationTransitionSchema_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationTransitionSchema_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationTransitionSchema(); \
	friend struct Z_Construct_UClass_UAnimationTransitionSchema_Statics; \
public: \
	DECLARE_CLASS(UAnimationTransitionSchema, UEdGraphSchema_K2, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimationTransitionSchema)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationTransitionSchema_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationTransitionSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationTransitionSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationTransitionSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationTransitionSchema); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationTransitionSchema(UAnimationTransitionSchema&&); \
	UAnimationTransitionSchema(const UAnimationTransitionSchema&); \
public: \
	ANIMGRAPH_API virtual ~UAnimationTransitionSchema();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationTransitionSchema_h_15_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationTransitionSchema_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationTransitionSchema_h_18_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationTransitionSchema_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimationTransitionSchema>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimationTransitionSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
