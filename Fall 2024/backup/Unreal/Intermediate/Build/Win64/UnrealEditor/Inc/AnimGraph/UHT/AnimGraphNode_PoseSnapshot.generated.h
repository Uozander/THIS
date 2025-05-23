// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_PoseSnapshot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_PoseSnapshot_generated_h
#error "AnimGraphNode_PoseSnapshot.generated.h already included, missing '#pragma once' in AnimGraphNode_PoseSnapshot.h"
#endif
#define ANIMGRAPH_AnimGraphNode_PoseSnapshot_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseSnapshot_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_PoseSnapshot(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_PoseSnapshot_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_PoseSnapshot, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_PoseSnapshot)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseSnapshot_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_PoseSnapshot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_PoseSnapshot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_PoseSnapshot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_PoseSnapshot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_PoseSnapshot(UAnimGraphNode_PoseSnapshot&&); \
	UAnimGraphNode_PoseSnapshot(const UAnimGraphNode_PoseSnapshot&); \
public: \
	ANIMGRAPH_API virtual ~UAnimGraphNode_PoseSnapshot();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseSnapshot_h_12_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseSnapshot_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseSnapshot_h_15_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseSnapshot_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_PoseSnapshot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseSnapshot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
