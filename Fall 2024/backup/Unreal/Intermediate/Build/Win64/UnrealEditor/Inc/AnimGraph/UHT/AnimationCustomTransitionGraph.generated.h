// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationCustomTransitionGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimationCustomTransitionGraph_generated_h
#error "AnimationCustomTransitionGraph.generated.h already included, missing '#pragma once' in AnimationCustomTransitionGraph.h"
#endif
#define ANIMGRAPH_AnimationCustomTransitionGraph_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationCustomTransitionGraph(); \
	friend struct Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics; \
public: \
	DECLARE_CLASS(UAnimationCustomTransitionGraph, UAnimationGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimationCustomTransitionGraph)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationCustomTransitionGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationCustomTransitionGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationCustomTransitionGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationCustomTransitionGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationCustomTransitionGraph(UAnimationCustomTransitionGraph&&); \
	UAnimationCustomTransitionGraph(const UAnimationCustomTransitionGraph&); \
public: \
	ANIMGRAPH_API virtual ~UAnimationCustomTransitionGraph();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h_10_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h_13_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimationCustomTransitionGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
