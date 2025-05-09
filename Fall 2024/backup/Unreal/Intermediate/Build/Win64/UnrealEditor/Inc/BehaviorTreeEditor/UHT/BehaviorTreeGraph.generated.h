// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTreeGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEHAVIORTREEEDITOR_BehaviorTreeGraph_generated_h
#error "BehaviorTreeGraph.generated.h already included, missing '#pragma once' in BehaviorTreeGraph.h"
#endif
#define BEHAVIORTREEEDITOR_BehaviorTreeGraph_generated_h

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeGraph(); \
	friend struct Z_Construct_UClass_UBehaviorTreeGraph_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTreeGraph, UAIGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeGraph)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBehaviorTreeGraph(UBehaviorTreeGraph&&); \
	UBehaviorTreeGraph(const UBehaviorTreeGraph&); \
public: \
	NO_API virtual ~UBehaviorTreeGraph();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h_18_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h_21_INCLASS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<class UBehaviorTreeGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
