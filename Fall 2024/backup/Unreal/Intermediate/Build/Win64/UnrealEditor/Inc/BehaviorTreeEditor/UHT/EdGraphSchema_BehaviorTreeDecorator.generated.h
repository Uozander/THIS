// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraphSchema_BehaviorTreeDecorator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEHAVIORTREEEDITOR_EdGraphSchema_BehaviorTreeDecorator_generated_h
#error "EdGraphSchema_BehaviorTreeDecorator.generated.h already included, missing '#pragma once' in EdGraphSchema_BehaviorTreeDecorator.h"
#endif
#define BEHAVIORTREEEDITOR_EdGraphSchema_BehaviorTreeDecorator_generated_h

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics; \
	BEHAVIORTREEEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> BEHAVIORTREEEDITOR_API UScriptStruct* StaticStruct<struct FDecoratorSchemaAction_NewNode>();

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphSchema_BehaviorTreeDecorator(); \
	friend struct Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics; \
public: \
	DECLARE_CLASS(UEdGraphSchema_BehaviorTreeDecorator, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), NO_API) \
	DECLARE_SERIALIZER(UEdGraphSchema_BehaviorTreeDecorator)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdGraphSchema_BehaviorTreeDecorator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphSchema_BehaviorTreeDecorator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdGraphSchema_BehaviorTreeDecorator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphSchema_BehaviorTreeDecorator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEdGraphSchema_BehaviorTreeDecorator(UEdGraphSchema_BehaviorTreeDecorator&&); \
	UEdGraphSchema_BehaviorTreeDecorator(const UEdGraphSchema_BehaviorTreeDecorator&); \
public: \
	NO_API virtual ~UEdGraphSchema_BehaviorTreeDecorator();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_66_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_69_INCLASS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<class UEdGraphSchema_BehaviorTreeDecorator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
