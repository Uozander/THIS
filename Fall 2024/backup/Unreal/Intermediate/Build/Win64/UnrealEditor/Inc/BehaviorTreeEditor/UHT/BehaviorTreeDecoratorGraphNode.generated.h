// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTreeDecoratorGraphNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEHAVIORTREEEDITOR_BehaviorTreeDecoratorGraphNode_generated_h
#error "BehaviorTreeDecoratorGraphNode.generated.h already included, missing '#pragma once' in BehaviorTreeDecoratorGraphNode.h"
#endif
#define BEHAVIORTREEEDITOR_BehaviorTreeDecoratorGraphNode_generated_h

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeDecoratorGraphNode(); \
	friend struct Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTreeDecoratorGraphNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeDecoratorGraphNode)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeDecoratorGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeDecoratorGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeDecoratorGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeDecoratorGraphNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBehaviorTreeDecoratorGraphNode(UBehaviorTreeDecoratorGraphNode&&); \
	UBehaviorTreeDecoratorGraphNode(const UBehaviorTreeDecoratorGraphNode&); \
public: \
	NO_API virtual ~UBehaviorTreeDecoratorGraphNode();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_h_18_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_h_21_INCLASS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<class UBehaviorTreeDecoratorGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
