// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundCueGraph/SoundCueGraphSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_SoundCueGraphSchema_generated_h
#error "SoundCueGraphSchema.generated.h already included, missing '#pragma once' in SoundCueGraphSchema.h"
#endif
#define AUDIOEDITOR_SoundCueGraphSchema_generated_h

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> AUDIOEDITOR_API UScriptStruct* StaticStruct<struct FSoundCueGraphSchemaAction_NewNode>();

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FSoundCueGraphSchemaAction_NewNode Super;


template<> AUDIOEDITOR_API UScriptStruct* StaticStruct<struct FSoundCueGraphSchemaAction_NewFromSelected>();

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> AUDIOEDITOR_API UScriptStruct* StaticStruct<struct FSoundCueGraphSchemaAction_NewComment>();

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> AUDIOEDITOR_API UScriptStruct* StaticStruct<struct FSoundCueGraphSchemaAction_Paste>();

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_118_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCueGraphSchema(); \
	friend struct Z_Construct_UClass_USoundCueGraphSchema_Statics; \
public: \
	DECLARE_CLASS(USoundCueGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundCueGraphSchema)


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_118_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundCueGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundCueGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueGraphSchema); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundCueGraphSchema(USoundCueGraphSchema&&); \
	USoundCueGraphSchema(const USoundCueGraphSchema&); \
public: \
	AUDIOEDITOR_API virtual ~USoundCueGraphSchema();


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_115_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_118_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_118_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_118_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class USoundCueGraphSchema>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
