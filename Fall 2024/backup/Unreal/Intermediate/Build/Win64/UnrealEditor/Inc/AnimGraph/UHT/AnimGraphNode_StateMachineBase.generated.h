// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_StateMachineBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_StateMachineBase_generated_h
#error "AnimGraphNode_StateMachineBase.generated.h already included, missing '#pragma once' in AnimGraphNode_StateMachineBase.h"
#endif
#define ANIMGRAPH_AnimGraphNode_StateMachineBase_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_StateMachineBase(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_StateMachineBase, UAnimGraphNode_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_StateMachineBase)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphNode_StateMachineBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_StateMachineBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphNode_StateMachineBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_StateMachineBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_StateMachineBase(UAnimGraphNode_StateMachineBase&&); \
	UAnimGraphNode_StateMachineBase(const UAnimGraphNode_StateMachineBase&); \
public: \
	NO_API virtual ~UAnimGraphNode_StateMachineBase();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h_14_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h_17_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_StateMachineBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
