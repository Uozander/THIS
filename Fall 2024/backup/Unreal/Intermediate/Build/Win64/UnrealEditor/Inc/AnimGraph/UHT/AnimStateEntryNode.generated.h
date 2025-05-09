// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimStateEntryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimStateEntryNode_generated_h
#error "AnimStateEntryNode.generated.h already included, missing '#pragma once' in AnimStateEntryNode.h"
#endif
#define ANIMGRAPH_AnimStateEntryNode_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateEntryNode_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAnimStateEntryNode(); \
	friend struct Z_Construct_UClass_UAnimStateEntryNode_Statics; \
public: \
	DECLARE_CLASS(UAnimStateEntryNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimStateEntryNode)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateEntryNode_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimStateEntryNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateEntryNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimStateEntryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateEntryNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimStateEntryNode(UAnimStateEntryNode&&); \
	UAnimStateEntryNode(const UAnimStateEntryNode&); \
public: \
	ANIMGRAPH_API virtual ~UAnimStateEntryNode();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateEntryNode_h_15_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateEntryNode_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateEntryNode_h_18_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateEntryNode_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimStateEntryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimStateEntryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
