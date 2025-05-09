// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTreeDecoratorGraphNode_Logic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEHAVIORTREEEDITOR_BehaviorTreeDecoratorGraphNode_Logic_generated_h
#error "BehaviorTreeDecoratorGraphNode_Logic.generated.h already included, missing '#pragma once' in BehaviorTreeDecoratorGraphNode_Logic.h"
#endif
#define BEHAVIORTREEEDITOR_BehaviorTreeDecoratorGraphNode_Logic_generated_h

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeDecoratorGraphNode_Logic(); \
	friend struct Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTreeDecoratorGraphNode_Logic, UBehaviorTreeDecoratorGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeDecoratorGraphNode_Logic)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeDecoratorGraphNode_Logic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeDecoratorGraphNode_Logic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeDecoratorGraphNode_Logic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeDecoratorGraphNode_Logic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBehaviorTreeDecoratorGraphNode_Logic(UBehaviorTreeDecoratorGraphNode_Logic&&); \
	UBehaviorTreeDecoratorGraphNode_Logic(const UBehaviorTreeDecoratorGraphNode_Logic&); \
public: \
	NO_API virtual ~UBehaviorTreeDecoratorGraphNode_Logic();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_31_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_34_INCLASS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<class UBehaviorTreeDecoratorGraphNode_Logic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Logic_h


#define FOREACH_ENUM_EDECORATORLOGICMODE(op) \
	op(EDecoratorLogicMode::Sink) \
	op(EDecoratorLogicMode::And) \
	op(EDecoratorLogicMode::Or) \
	op(EDecoratorLogicMode::Not) 

namespace EDecoratorLogicMode { enum Type : int; }
template<> BEHAVIORTREEEDITOR_API UEnum* StaticEnum<EDecoratorLogicMode::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
