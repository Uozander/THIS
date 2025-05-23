// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Light/ParticleModuleLightBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleLightBase_generated_h
#error "ParticleModuleLightBase.generated.h already included, missing '#pragma once' in ParticleModuleLightBase.h"
#endif
#define ENGINE_ParticleModuleLightBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLightBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLightBase(); \
	friend struct Z_Construct_UClass_UParticleModuleLightBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleLightBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleLightBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLightBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleLightBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLightBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleLightBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLightBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleLightBase(UParticleModuleLightBase&&); \
	UParticleModuleLightBase(const UParticleModuleLightBase&); \
public: \
	NO_API virtual ~UParticleModuleLightBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLightBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLightBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLightBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLightBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleLightBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLightBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
