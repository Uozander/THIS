// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Velocity/ParticleModuleVelocity.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleVelocity_generated_h
#error "ParticleModuleVelocity.generated.h already included, missing '#pragma once' in ParticleModuleVelocity.h"
#endif
#define ENGINE_ParticleModuleVelocity_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleVelocity(); \
	friend struct Z_Construct_UClass_UParticleModuleVelocity_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleVelocity, UParticleModuleVelocityBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleVelocity)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleVelocity(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleVelocity) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleVelocity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleVelocity); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleVelocity(UParticleModuleVelocity&&); \
	UParticleModuleVelocity(const UParticleModuleVelocity&); \
public: \
	ENGINE_API virtual ~UParticleModuleVelocity();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleVelocity>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
