// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Event/ParticleModuleEventBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleEventBase_generated_h
#error "ParticleModuleEventBase.generated.h already included, missing '#pragma once' in ParticleModuleEventBase.h"
#endif
#define ENGINE_ParticleModuleEventBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleEventBase(); \
	friend struct Z_Construct_UClass_UParticleModuleEventBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleEventBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleEventBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleEventBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleEventBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleEventBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleEventBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleEventBase(UParticleModuleEventBase&&); \
	UParticleModuleEventBase(const UParticleModuleEventBase&); \
public: \
	NO_API virtual ~UParticleModuleEventBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleEventBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
