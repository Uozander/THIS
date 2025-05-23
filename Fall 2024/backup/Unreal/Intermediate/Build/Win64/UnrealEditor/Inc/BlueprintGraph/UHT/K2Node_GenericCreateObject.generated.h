// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_GenericCreateObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_K2Node_GenericCreateObject_generated_h
#error "K2Node_GenericCreateObject.generated.h already included, missing '#pragma once' in K2Node_GenericCreateObject.h"
#endif
#define BLUEPRINTGRAPH_K2Node_GenericCreateObject_generated_h

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GenericCreateObject_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK2Node_GenericCreateObject(); \
	friend struct Z_Construct_UClass_UK2Node_GenericCreateObject_Statics; \
public: \
	DECLARE_CLASS(UK2Node_GenericCreateObject, UK2Node_ConstructObjectFromClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UK2Node_GenericCreateObject)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GenericCreateObject_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK2Node_GenericCreateObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UK2Node_GenericCreateObject(UK2Node_GenericCreateObject&&); \
	UK2Node_GenericCreateObject(const UK2Node_GenericCreateObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK2Node_GenericCreateObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_GenericCreateObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_GenericCreateObject) \
	NO_API virtual ~UK2Node_GenericCreateObject();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GenericCreateObject_h_17_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GenericCreateObject_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GenericCreateObject_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GenericCreateObject_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGRAPH_API UClass* StaticClass<class UK2Node_GenericCreateObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GenericCreateObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
