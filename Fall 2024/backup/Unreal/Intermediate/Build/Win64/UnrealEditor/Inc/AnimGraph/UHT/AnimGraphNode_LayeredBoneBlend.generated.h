// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_LayeredBoneBlend.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_LayeredBoneBlend_generated_h
#error "AnimGraphNode_LayeredBoneBlend.generated.h already included, missing '#pragma once' in AnimGraphNode_LayeredBoneBlend.h"
#endif
#define ANIMGRAPH_AnimGraphNode_LayeredBoneBlend_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LayeredBoneBlend_h_14_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_LayeredBoneBlend, ANIMGRAPH_API)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LayeredBoneBlend_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_LayeredBoneBlend(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_LayeredBoneBlend_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_LayeredBoneBlend, UAnimGraphNode_BlendListBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_LayeredBoneBlend) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LayeredBoneBlend_h_14_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LayeredBoneBlend_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_LayeredBoneBlend(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_LayeredBoneBlend) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_LayeredBoneBlend); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_LayeredBoneBlend); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_LayeredBoneBlend(UAnimGraphNode_LayeredBoneBlend&&); \
	UAnimGraphNode_LayeredBoneBlend(const UAnimGraphNode_LayeredBoneBlend&); \
public: \
	ANIMGRAPH_API virtual ~UAnimGraphNode_LayeredBoneBlend();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LayeredBoneBlend_h_11_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LayeredBoneBlend_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LayeredBoneBlend_h_14_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LayeredBoneBlend_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_LayeredBoneBlend>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LayeredBoneBlend_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
