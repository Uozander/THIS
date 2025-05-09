// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIGraphSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIGRAPH_AIGraphSchema_generated_h
#error "AIGraphSchema.generated.h already included, missing '#pragma once' in AIGraphSchema.h"
#endif
#define AIGRAPH_AIGraphSchema_generated_h

#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAISchemaAction_AddComment_Statics; \
	AIGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> AIGRAPH_API UScriptStruct* StaticStruct<struct FAISchemaAction_AddComment>();

#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> AIGRAPH_API UScriptStruct* StaticStruct<struct FAISchemaAction_NewNode>();

#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> AIGRAPH_API UScriptStruct* StaticStruct<struct FAISchemaAction_NewSubNode>();

#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_103_INCLASS \
private: \
	static void StaticRegisterNativesUAIGraphSchema(); \
	friend struct Z_Construct_UClass_UAIGraphSchema_Statics; \
public: \
	DECLARE_CLASS(UAIGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIGraph"), NO_API) \
	DECLARE_SERIALIZER(UAIGraphSchema)


#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_103_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIGraphSchema); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAIGraphSchema(UAIGraphSchema&&); \
	UAIGraphSchema(const UAIGraphSchema&); \
public: \
	NO_API virtual ~UAIGraphSchema();


#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_100_PROLOG
#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_103_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_103_INCLASS \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_103_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIGRAPH_API UClass* StaticClass<class UAIGraphSchema>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
