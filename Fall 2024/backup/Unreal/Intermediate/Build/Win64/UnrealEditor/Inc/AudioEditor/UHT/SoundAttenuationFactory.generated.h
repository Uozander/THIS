// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SoundAttenuationFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_SoundAttenuationFactory_generated_h
#error "SoundAttenuationFactory.generated.h already included, missing '#pragma once' in SoundAttenuationFactory.h"
#endif
#define AUDIOEDITOR_SoundAttenuationFactory_generated_h

#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundAttenuationFactory_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUSoundAttenuationFactory(); \
	friend struct Z_Construct_UClass_USoundAttenuationFactory_Statics; \
public: \
	DECLARE_CLASS(USoundAttenuationFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundAttenuationFactory)


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundAttenuationFactory_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundAttenuationFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAttenuationFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundAttenuationFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAttenuationFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundAttenuationFactory(USoundAttenuationFactory&&); \
	USoundAttenuationFactory(const USoundAttenuationFactory&); \
public: \
	AUDIOEDITOR_API virtual ~USoundAttenuationFactory();


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundAttenuationFactory_h_21_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundAttenuationFactory_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundAttenuationFactory_h_24_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundAttenuationFactory_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class USoundAttenuationFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundAttenuationFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
