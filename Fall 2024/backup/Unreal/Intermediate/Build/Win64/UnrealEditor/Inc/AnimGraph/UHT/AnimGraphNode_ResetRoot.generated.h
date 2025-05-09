// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_ResetRoot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_ResetRoot_generated_h
#error "AnimGraphNode_ResetRoot.generated.h already included, missing '#pragma once' in AnimGraphNode_ResetRoot.h"
#endif
#define ANIMGRAPH_AnimGraphNode_ResetRoot_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ResetRoot_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_ResetRoot(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_ResetRoot_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_ResetRoot, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_ResetRoot)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ResetRoot_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_ResetRoot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_ResetRoot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_ResetRoot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_ResetRoot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_ResetRoot(UAnimGraphNode_ResetRoot&&); \
	UAnimGraphNode_ResetRoot(const UAnimGraphNode_ResetRoot&); \
public: \
	ANIMGRAPH_API virtual ~UAnimGraphNode_ResetRoot();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ResetRoot_h_11_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ResetRoot_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ResetRoot_h_14_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ResetRoot_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_ResetRoot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ResetRoot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
