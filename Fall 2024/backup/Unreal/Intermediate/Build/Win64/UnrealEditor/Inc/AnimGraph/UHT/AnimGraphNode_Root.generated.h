// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_Root.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_Root_generated_h
#error "AnimGraphNode_Root.generated.h already included, missing '#pragma once' in AnimGraphNode_Root.h"
#endif
#define ANIMGRAPH_AnimGraphNode_Root_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Root_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_Root, ANIMGRAPH_API)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Root_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_Root(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_Root_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_Root, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_Root) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Root_h_16_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Root_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_Root(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_Root) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_Root); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_Root); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_Root(UAnimGraphNode_Root&&); \
	UAnimGraphNode_Root(const UAnimGraphNode_Root&); \
public: \
	ANIMGRAPH_API virtual ~UAnimGraphNode_Root();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Root_h_13_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Root_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Root_h_16_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Root_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_Root>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Root_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
