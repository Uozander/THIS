// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/ParticleSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef ENGINE_ParticleSystem_generated_h
#error "ParticleSystem.generated.h already included, missing '#pragma once' in ParticleSystem.h"
#endif
#define ENGINE_ParticleSystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParticleSystemLOD_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FParticleSystemLOD>();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLODSoloTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLODSoloTrack>();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNamedEmitterMaterial>();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUFXSystemAsset(); \
	friend struct Z_Construct_UClass_UFXSystemAsset_Statics; \
public: \
	DECLARE_CLASS(UFXSystemAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UFXSystemAsset)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UFXSystemAsset(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFXSystemAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFXSystemAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFXSystemAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFXSystemAsset(UFXSystemAsset&&); \
	UFXSystemAsset(const UFXSystemAsset&); \
public: \
	ENGINE_API virtual ~UFXSystemAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_116_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_119_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UFXSystemAsset>();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_177_RPC_WRAPPERS \
	DECLARE_FUNCTION(execContainsEmitterType);


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_177_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleSystem, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_177_INCLASS \
private: \
	static void StaticRegisterNativesUParticleSystem(); \
	friend struct Z_Construct_UClass_UParticleSystem_Statics; \
public: \
	DECLARE_CLASS(UParticleSystem, UFXSystemAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleSystem) \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_177_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_177_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleSystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleSystem(UParticleSystem&&); \
	UParticleSystem(const UParticleSystem&); \
public: \
	ENGINE_API virtual ~UParticleSystem();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_174_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_177_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_177_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_177_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_177_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h


#define FOREACH_ENUM_EPARTICLESYSTEMUPDATEMODE(op) \
	op(EPSUM_RealTime) \
	op(EPSUM_FixedTime) 

enum EParticleSystemUpdateMode : int;
template<> ENGINE_API UEnum* StaticEnum<EParticleSystemUpdateMode>();

#define FOREACH_ENUM_PARTICLESYSTEMLODMETHOD(op) \
	op(PARTICLESYSTEMLODMETHOD_Automatic) \
	op(PARTICLESYSTEMLODMETHOD_DirectSet) \
	op(PARTICLESYSTEMLODMETHOD_ActivateAutomatic) 

enum ParticleSystemLODMethod : int;
template<> ENGINE_API UEnum* StaticEnum<ParticleSystemLODMethod>();

#define FOREACH_ENUM_EPARTICLESYSTEMOCCLUSIONBOUNDSMETHOD(op) \
	op(EPSOBM_None) \
	op(EPSOBM_ParticleBounds) \
	op(EPSOBM_CustomBounds) 

enum EParticleSystemOcclusionBoundsMethod : int;
template<> ENGINE_API UEnum* StaticEnum<EParticleSystemOcclusionBoundsMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
