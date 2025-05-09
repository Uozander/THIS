// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraphSchema_BehaviorTree.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEHAVIORTREEEDITOR_EdGraphSchema_BehaviorTree_generated_h
#error "EdGraphSchema_BehaviorTree.generated.h already included, missing '#pragma once' in EdGraphSchema_BehaviorTree.h"
#endif
#define BEHAVIORTREEEDITOR_EdGraphSchema_BehaviorTree_generated_h

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Statics; \
	BEHAVIORTREEEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> BEHAVIORTREEEDITOR_API UScriptStruct* StaticStruct<struct FBehaviorTreeSchemaAction_AutoArrange>();

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphSchema_BehaviorTree(); \
	friend struct Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics; \
public: \
	DECLARE_CLASS(UEdGraphSchema_BehaviorTree, UAIGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), NO_API) \
	DECLARE_SERIALIZER(UEdGraphSchema_BehaviorTree)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdGraphSchema_BehaviorTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphSchema_BehaviorTree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdGraphSchema_BehaviorTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphSchema_BehaviorTree); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEdGraphSchema_BehaviorTree(UEdGraphSchema_BehaviorTree&&); \
	UEdGraphSchema_BehaviorTree(const UEdGraphSchema_BehaviorTree&); \
public: \
	NO_API virtual ~UEdGraphSchema_BehaviorTree();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_52_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_55_INCLASS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<class UEdGraphSchema_BehaviorTree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
