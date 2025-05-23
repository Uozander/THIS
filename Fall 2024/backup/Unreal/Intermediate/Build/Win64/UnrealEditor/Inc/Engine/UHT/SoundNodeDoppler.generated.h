// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeDoppler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeDoppler_generated_h
#error "SoundNodeDoppler.generated.h already included, missing '#pragma once' in SoundNodeDoppler.h"
#endif
#define ENGINE_SoundNodeDoppler_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeDoppler(); \
	friend struct Z_Construct_UClass_USoundNodeDoppler_Statics; \
public: \
	DECLARE_CLASS(USoundNodeDoppler, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundNodeDoppler)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundNodeDoppler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeDoppler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundNodeDoppler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeDoppler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundNodeDoppler(USoundNodeDoppler&&); \
	USoundNodeDoppler(const USoundNodeDoppler&); \
public: \
	NO_API virtual ~USoundNodeDoppler();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeDoppler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
