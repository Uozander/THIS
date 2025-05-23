// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Spawn/ParticleModuleSpawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleSpawn_generated_h
#error "ParticleModuleSpawn.generated.h already included, missing '#pragma once' in ParticleModuleSpawn.h"
#endif
#define ENGINE_ParticleModuleSpawn_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleSpawn(); \
	friend struct Z_Construct_UClass_UParticleModuleSpawn_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleSpawn, UParticleModuleSpawnBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleSpawn)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleSpawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleSpawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleSpawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleSpawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleSpawn(UParticleModuleSpawn&&); \
	UParticleModuleSpawn(const UParticleModuleSpawn&); \
public: \
	ENGINE_API virtual ~UParticleModuleSpawn();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawn_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawn_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleSpawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
