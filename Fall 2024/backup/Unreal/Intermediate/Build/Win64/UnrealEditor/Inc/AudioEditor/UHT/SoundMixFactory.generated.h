// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SoundMixFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_SoundMixFactory_generated_h
#error "SoundMixFactory.generated.h already included, missing '#pragma once' in SoundMixFactory.h"
#endif
#define AUDIOEDITOR_SoundMixFactory_generated_h

#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSoundMixFactory(); \
	friend struct Z_Construct_UClass_USoundMixFactory_Statics; \
public: \
	DECLARE_CLASS(USoundMixFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundMixFactory)


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundMixFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundMixFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundMixFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundMixFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundMixFactory(USoundMixFactory&&); \
	USoundMixFactory(const USoundMixFactory&); \
public: \
	AUDIOEDITOR_API virtual ~USoundMixFactory();


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_17_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_20_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class USoundMixFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundMixFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
