// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Location/ParticleModuleLocationEmitter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleLocationEmitter_generated_h
#error "ParticleModuleLocationEmitter.generated.h already included, missing '#pragma once' in ParticleModuleLocationEmitter.h"
#endif
#define ENGINE_ParticleModuleLocationEmitter_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationEmitter(); \
	friend struct Z_Construct_UClass_UParticleModuleLocationEmitter_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleLocationEmitter, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleLocationEmitter)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLocationEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationEmitter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLocationEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationEmitter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleLocationEmitter(UParticleModuleLocationEmitter&&); \
	UParticleModuleLocationEmitter(const UParticleModuleLocationEmitter&); \
public: \
	ENGINE_API virtual ~UParticleModuleLocationEmitter();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_28_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleLocationEmitter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h


#define FOREACH_ENUM_ELOCATIONEMITTERSELECTIONMETHOD(op) \
	op(ELESM_Random) \
	op(ELESM_Sequential) 

enum ELocationEmitterSelectionMethod : int;
template<> ENGINE_API UEnum* StaticEnum<ELocationEmitterSelectionMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
