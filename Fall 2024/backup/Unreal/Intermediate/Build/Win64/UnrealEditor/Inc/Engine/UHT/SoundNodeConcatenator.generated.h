// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeConcatenator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeConcatenator_generated_h
#error "SoundNodeConcatenator.generated.h already included, missing '#pragma once' in SoundNodeConcatenator.h"
#endif
#define ENGINE_SoundNodeConcatenator_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeConcatenator(); \
	friend struct Z_Construct_UClass_USoundNodeConcatenator_Statics; \
public: \
	DECLARE_CLASS(USoundNodeConcatenator, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeConcatenator)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeConcatenator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeConcatenator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeConcatenator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeConcatenator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundNodeConcatenator(USoundNodeConcatenator&&); \
	USoundNodeConcatenator(const USoundNodeConcatenator&); \
public: \
	ENGINE_API virtual ~USoundNodeConcatenator();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h_24_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h_27_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeConcatenator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
