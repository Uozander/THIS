// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationStateGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimationStateGraph_generated_h
#error "AnimationStateGraph.generated.h already included, missing '#pragma once' in AnimationStateGraph.h"
#endif
#define ANIMGRAPH_AnimationStateGraph_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraph_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationStateGraph(); \
	friend struct Z_Construct_UClass_UAnimationStateGraph_Statics; \
public: \
	DECLARE_CLASS(UAnimationStateGraph, UAnimationGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimationStateGraph)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraph_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationStateGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationStateGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationStateGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationStateGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationStateGraph(UAnimationStateGraph&&); \
	UAnimationStateGraph(const UAnimationStateGraph&); \
public: \
	ANIMGRAPH_API virtual ~UAnimationStateGraph();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraph_h_10_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraph_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraph_h_13_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraph_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimationStateGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
