// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_RefPoseBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_RefPoseBase_generated_h
#error "AnimGraphNode_RefPoseBase.generated.h already included, missing '#pragma once' in AnimGraphNode_RefPoseBase.h"
#endif
#define ANIMGRAPH_AnimGraphNode_RefPoseBase_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RefPoseBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_RefPoseBase(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_RefPoseBase_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_RefPoseBase, UAnimGraphNode_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_RefPoseBase)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RefPoseBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_RefPoseBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_RefPoseBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_RefPoseBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_RefPoseBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_RefPoseBase(UAnimGraphNode_RefPoseBase&&); \
	UAnimGraphNode_RefPoseBase(const UAnimGraphNode_RefPoseBase&); \
public: \
	ANIMGRAPH_API virtual ~UAnimGraphNode_RefPoseBase();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RefPoseBase_h_11_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RefPoseBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RefPoseBase_h_14_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RefPoseBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_RefPoseBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RefPoseBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
