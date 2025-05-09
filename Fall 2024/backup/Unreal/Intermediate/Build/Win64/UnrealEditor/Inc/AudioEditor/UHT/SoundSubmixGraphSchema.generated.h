// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundSubmixGraph/SoundSubmixGraphSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_SoundSubmixGraphSchema_generated_h
#error "SoundSubmixGraphSchema.generated.h already included, missing '#pragma once' in SoundSubmixGraphSchema.h"
#endif
#define AUDIOEDITOR_SoundSubmixGraphSchema_generated_h

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> AUDIOEDITOR_API UScriptStruct* StaticStruct<struct FSoundSubmixGraphSchemaAction_NewNode>();

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_123_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSubmixGraphSchema(); \
	friend struct Z_Construct_UClass_USoundSubmixGraphSchema_Statics; \
public: \
	DECLARE_CLASS(USoundSubmixGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundSubmixGraphSchema)


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundSubmixGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmixGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundSubmixGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmixGraphSchema); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundSubmixGraphSchema(USoundSubmixGraphSchema&&); \
	USoundSubmixGraphSchema(const USoundSubmixGraphSchema&); \
public: \
	AUDIOEDITOR_API virtual ~USoundSubmixGraphSchema();


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_120_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_123_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_123_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_123_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class USoundSubmixGraphSchema>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
