// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_K2Node_generated_h
#error "K2Node.generated.h already included, missing '#pragma once' in K2Node.h"
#endif
#define BLUEPRINTGRAPH_K2Node_generated_h

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics; \
	BLUEPRINTGRAPH_API static class UScriptStruct* StaticStruct();


template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<struct FOptionalPinFromProperty>();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_203_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node, BLUEPRINTGRAPH_API)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_203_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node(); \
	friend struct Z_Construct_UClass_UK2Node_Statics; \
public: \
	DECLARE_CLASS(UK2Node, UEdGraphNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), BLUEPRINTGRAPH_API) \
	DECLARE_SERIALIZER(UK2Node) \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_203_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_203_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UK2Node(UK2Node&&); \
	UK2Node(const UK2Node&); \
public: \
	BLUEPRINTGRAPH_API virtual ~UK2Node();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_200_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_203_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_203_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h_203_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGRAPH_API UClass* StaticClass<class UK2Node>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
