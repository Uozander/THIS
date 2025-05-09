// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTreeGraphNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEHAVIORTREEEDITOR_BehaviorTreeGraphNode_generated_h
#error "BehaviorTreeGraphNode.generated.h already included, missing '#pragma once' in BehaviorTreeGraphNode.h"
#endif
#define BEHAVIORTREEEDITOR_BehaviorTreeGraphNode_generated_h

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeGraphNode(); \
	friend struct Z_Construct_UClass_UBehaviorTreeGraphNode_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTreeGraphNode, UAIGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeGraphNode)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeGraphNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBehaviorTreeGraphNode(UBehaviorTreeGraphNode&&); \
	UBehaviorTreeGraphNode(const UBehaviorTreeGraphNode&); \
public: \
	NO_API virtual ~UBehaviorTreeGraphNode();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_24_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_27_INCLASS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<class UBehaviorTreeGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
