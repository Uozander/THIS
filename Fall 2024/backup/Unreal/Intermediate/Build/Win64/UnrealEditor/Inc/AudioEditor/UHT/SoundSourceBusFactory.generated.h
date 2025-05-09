// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SoundSourceBusFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_SoundSourceBusFactory_generated_h
#error "SoundSourceBusFactory.generated.h already included, missing '#pragma once' in SoundSourceBusFactory.h"
#endif
#define AUDIOEDITOR_SoundSourceBusFactory_generated_h

#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSourceBusFactory(); \
	friend struct Z_Construct_UClass_USoundSourceBusFactory_Statics; \
public: \
	DECLARE_CLASS(USoundSourceBusFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundSourceBusFactory)


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundSourceBusFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSourceBusFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundSourceBusFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSourceBusFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundSourceBusFactory(USoundSourceBusFactory&&); \
	USoundSourceBusFactory(const USoundSourceBusFactory&); \
public: \
	AUDIOEDITOR_API virtual ~USoundSourceBusFactory();


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_19_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_22_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class USoundSourceBusFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
