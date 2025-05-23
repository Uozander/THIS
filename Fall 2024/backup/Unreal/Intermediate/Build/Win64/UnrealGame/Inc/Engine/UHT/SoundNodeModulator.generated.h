// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeModulator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeModulator_generated_h
#error "SoundNodeModulator.generated.h already included, missing '#pragma once' in SoundNodeModulator.h"
#endif
#define ENGINE_SoundNodeModulator_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeModulator(); \
	friend struct Z_Construct_UClass_USoundNodeModulator_Statics; \
public: \
	DECLARE_CLASS(USoundNodeModulator, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeModulator)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeModulator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeModulator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeModulator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeModulator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundNodeModulator(USoundNodeModulator&&); \
	USoundNodeModulator(const USoundNodeModulator&); \
public: \
	ENGINE_API virtual ~USoundNodeModulator();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeModulator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
