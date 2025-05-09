// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_ApplyAdditive.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_ApplyAdditive_generated_h
#error "AnimGraphNode_ApplyAdditive.generated.h already included, missing '#pragma once' in AnimGraphNode_ApplyAdditive.h"
#endif
#define ANIMGRAPH_AnimGraphNode_ApplyAdditive_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ApplyAdditive_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_ApplyAdditive(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_ApplyAdditive_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_ApplyAdditive, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_ApplyAdditive)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ApplyAdditive_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_ApplyAdditive(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_ApplyAdditive) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_ApplyAdditive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_ApplyAdditive); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_ApplyAdditive(UAnimGraphNode_ApplyAdditive&&); \
	UAnimGraphNode_ApplyAdditive(const UAnimGraphNode_ApplyAdditive&); \
public: \
	ANIMGRAPH_API virtual ~UAnimGraphNode_ApplyAdditive();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ApplyAdditive_h_11_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ApplyAdditive_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ApplyAdditive_h_14_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ApplyAdditive_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_ApplyAdditive>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ApplyAdditive_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
