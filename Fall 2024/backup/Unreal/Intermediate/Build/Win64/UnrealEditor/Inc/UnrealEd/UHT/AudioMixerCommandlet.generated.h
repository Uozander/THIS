// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/AudioMixerCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_AudioMixerCommandlet_generated_h
#error "AudioMixerCommandlet.generated.h already included, missing '#pragma once' in AudioMixerCommandlet.h"
#endif
#define UNREALED_AudioMixerCommandlet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AudioMixerCommandlet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAudioMixerCommandlet(); \
	friend struct Z_Construct_UClass_UAudioMixerCommandlet_Statics; \
public: \
	DECLARE_CLASS(UAudioMixerCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UAudioMixerCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AudioMixerCommandlet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioMixerCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMixerCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioMixerCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMixerCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioMixerCommandlet(UAudioMixerCommandlet&&); \
	UAudioMixerCommandlet(const UAudioMixerCommandlet&); \
public: \
	NO_API virtual ~UAudioMixerCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AudioMixerCommandlet_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AudioMixerCommandlet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AudioMixerCommandlet_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AudioMixerCommandlet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UAudioMixerCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AudioMixerCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
