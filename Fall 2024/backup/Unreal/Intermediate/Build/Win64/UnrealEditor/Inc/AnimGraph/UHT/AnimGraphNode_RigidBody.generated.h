// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_RigidBody.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_RigidBody_generated_h
#error "AnimGraphNode_RigidBody.generated.h already included, missing '#pragma once' in AnimGraphNode_RigidBody.h"
#endif
#define ANIMGRAPH_AnimGraphNode_RigidBody_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RigidBody_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_RigidBody(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_RigidBody_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_RigidBody, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_RigidBody)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RigidBody_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_RigidBody(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_RigidBody) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_RigidBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_RigidBody); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_RigidBody(UAnimGraphNode_RigidBody&&); \
	UAnimGraphNode_RigidBody(const UAnimGraphNode_RigidBody&); \
public: \
	ANIMGRAPH_API virtual ~UAnimGraphNode_RigidBody();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RigidBody_h_10_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RigidBody_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RigidBody_h_13_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RigidBody_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_RigidBody>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RigidBody_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
