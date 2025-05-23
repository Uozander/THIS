// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_BlendSpacePlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_BlendSpacePlayer_generated_h
#error "AnimGraphNode_BlendSpacePlayer.generated.h already included, missing '#pragma once' in AnimGraphNode_BlendSpacePlayer.h"
#endif
#define ANIMGRAPH_AnimGraphNode_BlendSpacePlayer_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpacePlayer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_BlendSpacePlayer(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_BlendSpacePlayer_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_BlendSpacePlayer, UAnimGraphNode_BlendSpaceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_BlendSpacePlayer)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpacePlayer_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_BlendSpacePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_BlendSpacePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_BlendSpacePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_BlendSpacePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_BlendSpacePlayer(UAnimGraphNode_BlendSpacePlayer&&); \
	UAnimGraphNode_BlendSpacePlayer(const UAnimGraphNode_BlendSpacePlayer&); \
public: \
	ANIMGRAPH_API virtual ~UAnimGraphNode_BlendSpacePlayer();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpacePlayer_h_15_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpacePlayer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpacePlayer_h_18_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpacePlayer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_BlendSpacePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpacePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
