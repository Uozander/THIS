// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimStateConduitNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimStateConduitNode_generated_h
#error "AnimStateConduitNode.generated.h already included, missing '#pragma once' in AnimStateConduitNode.h"
#endif
#define ANIMGRAPH_AnimStateConduitNode_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateConduitNode_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAnimStateConduitNode(); \
	friend struct Z_Construct_UClass_UAnimStateConduitNode_Statics; \
public: \
	DECLARE_CLASS(UAnimStateConduitNode, UAnimStateNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimStateConduitNode)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateConduitNode_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimStateConduitNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateConduitNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimStateConduitNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateConduitNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimStateConduitNode(UAnimStateConduitNode&&); \
	UAnimStateConduitNode(const UAnimStateConduitNode&); \
public: \
	ANIMGRAPH_API virtual ~UAnimStateConduitNode();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateConduitNode_h_13_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateConduitNode_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateConduitNode_h_16_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateConduitNode_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimStateConduitNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimStateConduitNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
