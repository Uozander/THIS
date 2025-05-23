// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_RandomPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_RandomPlayer_generated_h
#error "AnimGraphNode_RandomPlayer.generated.h already included, missing '#pragma once' in AnimGraphNode_RandomPlayer.h"
#endif
#define ANIMGRAPH_AnimGraphNode_RandomPlayer_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RandomPlayer_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_RandomPlayer(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_RandomPlayer_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_RandomPlayer, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_RandomPlayer)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RandomPlayer_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_RandomPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_RandomPlayer(UAnimGraphNode_RandomPlayer&&); \
	UAnimGraphNode_RandomPlayer(const UAnimGraphNode_RandomPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_RandomPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_RandomPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_RandomPlayer) \
	ANIMGRAPH_API virtual ~UAnimGraphNode_RandomPlayer();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RandomPlayer_h_11_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RandomPlayer_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RandomPlayer_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RandomPlayer_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_RandomPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RandomPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
