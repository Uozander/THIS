// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundClassGraph/SoundClassGraphNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_SoundClassGraphNode_generated_h
#error "SoundClassGraphNode.generated.h already included, missing '#pragma once' in SoundClassGraphNode.h"
#endif
#define AUDIOEDITOR_SoundClassGraphNode_generated_h

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphNode_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSoundClassGraphNode(); \
	friend struct Z_Construct_UClass_USoundClassGraphNode_Statics; \
public: \
	DECLARE_CLASS(USoundClassGraphNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundClassGraphNode)


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphNode_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundClassGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundClassGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundClassGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundClassGraphNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundClassGraphNode(USoundClassGraphNode&&); \
	USoundClassGraphNode(const USoundClassGraphNode&); \
public: \
	AUDIOEDITOR_API virtual ~USoundClassGraphNode();


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphNode_h_20_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphNode_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphNode_h_23_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphNode_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class USoundClassGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
