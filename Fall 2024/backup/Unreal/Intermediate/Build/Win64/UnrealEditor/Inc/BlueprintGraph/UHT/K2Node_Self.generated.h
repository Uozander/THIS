// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_Self.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_K2Node_Self_generated_h
#error "K2Node_Self.generated.h already included, missing '#pragma once' in K2Node_Self.h"
#endif
#define BLUEPRINTGRAPH_K2Node_Self_generated_h

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Self_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_Self(); \
	friend struct Z_Construct_UClass_UK2Node_Self_Statics; \
public: \
	DECLARE_CLASS(UK2Node_Self, UK2Node, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), BLUEPRINTGRAPH_API) \
	DECLARE_SERIALIZER(UK2Node_Self)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Self_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_Self(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_Self) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_Self); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_Self); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UK2Node_Self(UK2Node_Self&&); \
	UK2Node_Self(const UK2Node_Self&); \
public: \
	BLUEPRINTGRAPH_API virtual ~UK2Node_Self();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Self_h_19_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Self_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Self_h_22_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Self_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGRAPH_API UClass* StaticClass<class UK2Node_Self>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Self_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
