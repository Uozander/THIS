// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_DeadBlending.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_DeadBlending_generated_h
#error "AnimGraphNode_DeadBlending.generated.h already included, missing '#pragma once' in AnimGraphNode_DeadBlending.h"
#endif
#define ANIMGRAPH_AnimGraphNode_DeadBlending_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_DeadBlending_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_DeadBlending(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_DeadBlending_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_DeadBlending, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_DeadBlending)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_DeadBlending_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_DeadBlending(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_DeadBlending(UAnimGraphNode_DeadBlending&&); \
	UAnimGraphNode_DeadBlending(const UAnimGraphNode_DeadBlending&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_DeadBlending); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_DeadBlending); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_DeadBlending) \
	ANIMGRAPH_API virtual ~UAnimGraphNode_DeadBlending();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_DeadBlending_h_12_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_DeadBlending_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_DeadBlending_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_DeadBlending_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_DeadBlending>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_DeadBlending_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
