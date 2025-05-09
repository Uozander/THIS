// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_LocalRefPose.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_LocalRefPose_generated_h
#error "AnimGraphNode_LocalRefPose.generated.h already included, missing '#pragma once' in AnimGraphNode_LocalRefPose.h"
#endif
#define ANIMGRAPH_AnimGraphNode_LocalRefPose_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LocalRefPose_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_LocalRefPose(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_LocalRefPose_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_LocalRefPose, UAnimGraphNode_RefPoseBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_LocalRefPose)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LocalRefPose_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_LocalRefPose(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_LocalRefPose) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_LocalRefPose); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_LocalRefPose); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_LocalRefPose(UAnimGraphNode_LocalRefPose&&); \
	UAnimGraphNode_LocalRefPose(const UAnimGraphNode_LocalRefPose&); \
public: \
	ANIMGRAPH_API virtual ~UAnimGraphNode_LocalRefPose();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LocalRefPose_h_10_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LocalRefPose_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LocalRefPose_h_13_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LocalRefPose_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_LocalRefPose>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LocalRefPose_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
