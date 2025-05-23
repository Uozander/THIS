// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_IdentityPose.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_IdentityPose_generated_h
#error "AnimGraphNode_IdentityPose.generated.h already included, missing '#pragma once' in AnimGraphNode_IdentityPose.h"
#endif
#define ANIMGRAPH_AnimGraphNode_IdentityPose_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_IdentityPose_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_IdentityPose(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_IdentityPose_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_IdentityPose, UAnimGraphNode_RefPoseBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_IdentityPose)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_IdentityPose_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_IdentityPose(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_IdentityPose) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_IdentityPose); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_IdentityPose); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_IdentityPose(UAnimGraphNode_IdentityPose&&); \
	UAnimGraphNode_IdentityPose(const UAnimGraphNode_IdentityPose&); \
public: \
	ANIMGRAPH_API virtual ~UAnimGraphNode_IdentityPose();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_IdentityPose_h_10_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_IdentityPose_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_IdentityPose_h_13_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_IdentityPose_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_IdentityPose>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_IdentityPose_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
