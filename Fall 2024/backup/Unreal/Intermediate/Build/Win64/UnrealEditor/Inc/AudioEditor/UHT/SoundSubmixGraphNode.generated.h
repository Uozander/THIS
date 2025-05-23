// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundSubmixGraph/SoundSubmixGraphNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_SoundSubmixGraphNode_generated_h
#error "SoundSubmixGraphNode.generated.h already included, missing '#pragma once' in SoundSubmixGraphNode.h"
#endif
#define AUDIOEDITOR_SoundSubmixGraphNode_generated_h

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphNode_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSubmixGraphNode(); \
	friend struct Z_Construct_UClass_USoundSubmixGraphNode_Statics; \
public: \
	DECLARE_CLASS(USoundSubmixGraphNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundSubmixGraphNode)


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphNode_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundSubmixGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmixGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundSubmixGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmixGraphNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundSubmixGraphNode(USoundSubmixGraphNode&&); \
	USoundSubmixGraphNode(const USoundSubmixGraphNode&); \
public: \
	AUDIOEDITOR_API virtual ~USoundSubmixGraphNode();


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphNode_h_56_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphNode_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphNode_h_59_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphNode_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class USoundSubmixGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
