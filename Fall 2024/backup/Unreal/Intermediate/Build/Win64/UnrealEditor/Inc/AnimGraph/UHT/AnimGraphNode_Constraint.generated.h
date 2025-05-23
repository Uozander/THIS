// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_Constraint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_Constraint_generated_h
#error "AnimGraphNode_Constraint.generated.h already included, missing '#pragma once' in AnimGraphNode_Constraint.h"
#endif
#define ANIMGRAPH_AnimGraphNode_Constraint_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Constraint_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_Constraint(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_Constraint_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_Constraint, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_Constraint)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Constraint_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphNode_Constraint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_Constraint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphNode_Constraint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_Constraint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_Constraint(UAnimGraphNode_Constraint&&); \
	UAnimGraphNode_Constraint(const UAnimGraphNode_Constraint&); \
public: \
	NO_API virtual ~UAnimGraphNode_Constraint();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Constraint_h_10_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Constraint_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Constraint_h_13_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Constraint_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_Constraint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Constraint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
