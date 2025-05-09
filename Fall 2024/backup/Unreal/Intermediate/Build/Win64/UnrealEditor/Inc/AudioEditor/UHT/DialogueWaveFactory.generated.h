// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/DialogueWaveFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_DialogueWaveFactory_generated_h
#error "DialogueWaveFactory.generated.h already included, missing '#pragma once' in DialogueWaveFactory.h"
#endif
#define AUDIOEDITOR_DialogueWaveFactory_generated_h

#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueWaveFactory_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueWaveFactory(); \
	friend struct Z_Construct_UClass_UDialogueWaveFactory_Statics; \
public: \
	DECLARE_CLASS(UDialogueWaveFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(UDialogueWaveFactory)


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueWaveFactory_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API UDialogueWaveFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueWaveFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, UDialogueWaveFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueWaveFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogueWaveFactory(UDialogueWaveFactory&&); \
	UDialogueWaveFactory(const UDialogueWaveFactory&); \
public: \
	AUDIOEDITOR_API virtual ~UDialogueWaveFactory();


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueWaveFactory_h_24_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueWaveFactory_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueWaveFactory_h_27_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueWaveFactory_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class UDialogueWaveFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueWaveFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
