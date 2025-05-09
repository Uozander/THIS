// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_BlendListBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_BlendListBase_generated_h
#error "AnimGraphNode_BlendListBase.generated.h already included, missing '#pragma once' in AnimGraphNode_BlendListBase.h"
#endif
#define ANIMGRAPH_AnimGraphNode_BlendListBase_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_BlendListBase(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_BlendListBase_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_BlendListBase, UAnimGraphNode_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_BlendListBase)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphNode_BlendListBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_BlendListBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphNode_BlendListBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_BlendListBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_BlendListBase(UAnimGraphNode_BlendListBase&&); \
	UAnimGraphNode_BlendListBase(const UAnimGraphNode_BlendListBase&); \
public: \
	NO_API virtual ~UAnimGraphNode_BlendListBase();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListBase_h_10_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListBase_h_13_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_BlendListBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
