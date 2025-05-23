// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundCueGraph/SoundCueGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_SoundCueGraph_generated_h
#error "SoundCueGraph.generated.h already included, missing '#pragma once' in SoundCueGraph.h"
#endif
#define AUDIOEDITOR_SoundCueGraph_generated_h

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCueGraph(); \
	friend struct Z_Construct_UClass_USoundCueGraph_Statics; \
public: \
	DECLARE_CLASS(USoundCueGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundCueGraph)


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundCueGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundCueGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundCueGraph(USoundCueGraph&&); \
	USoundCueGraph(const USoundCueGraph&); \
public: \
	AUDIOEDITOR_API virtual ~USoundCueGraph();


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_14_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_17_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class USoundCueGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
