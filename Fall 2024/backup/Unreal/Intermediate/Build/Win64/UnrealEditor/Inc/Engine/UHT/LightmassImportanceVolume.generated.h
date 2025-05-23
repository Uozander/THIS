// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lightmass/LightmassImportanceVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LightmassImportanceVolume_generated_h
#error "LightmassImportanceVolume.generated.h already included, missing '#pragma once' in LightmassImportanceVolume.h"
#endif
#define ENGINE_LightmassImportanceVolume_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_17_INCLASS \
private: \
	static void StaticRegisterNativesALightmassImportanceVolume(); \
	friend struct Z_Construct_UClass_ALightmassImportanceVolume_Statics; \
public: \
	DECLARE_CLASS(ALightmassImportanceVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ALightmassImportanceVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ALightmassImportanceVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightmassImportanceVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ALightmassImportanceVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightmassImportanceVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALightmassImportanceVolume(ALightmassImportanceVolume&&); \
	ALightmassImportanceVolume(const ALightmassImportanceVolume&); \
public: \
	ENGINE_API virtual ~ALightmassImportanceVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ALightmassImportanceVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
