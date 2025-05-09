// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SoundClassFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_SoundClassFactory_generated_h
#error "SoundClassFactory.generated.h already included, missing '#pragma once' in SoundClassFactory.h"
#endif
#define AUDIOEDITOR_SoundClassFactory_generated_h

#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUSoundClassFactory(); \
	friend struct Z_Construct_UClass_USoundClassFactory_Statics; \
public: \
	DECLARE_CLASS(USoundClassFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundClassFactory)


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundClassFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundClassFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundClassFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundClassFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundClassFactory(USoundClassFactory&&); \
	USoundClassFactory(const USoundClassFactory&); \
public: \
	AUDIOEDITOR_API virtual ~USoundClassFactory();


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_21_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_24_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class USoundClassFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
