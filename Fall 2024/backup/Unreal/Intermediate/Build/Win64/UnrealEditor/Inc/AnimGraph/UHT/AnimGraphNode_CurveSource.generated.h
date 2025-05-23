// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_CurveSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_CurveSource_generated_h
#error "AnimGraphNode_CurveSource.generated.h already included, missing '#pragma once' in AnimGraphNode_CurveSource.h"
#endif
#define ANIMGRAPH_AnimGraphNode_CurveSource_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CurveSource_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_CurveSource(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_CurveSource_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_CurveSource, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_CurveSource)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CurveSource_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_CurveSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_CurveSource(UAnimGraphNode_CurveSource&&); \
	UAnimGraphNode_CurveSource(const UAnimGraphNode_CurveSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_CurveSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_CurveSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_CurveSource) \
	ANIMGRAPH_API virtual ~UAnimGraphNode_CurveSource();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CurveSource_h_12_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CurveSource_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CurveSource_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CurveSource_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_CurveSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CurveSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
