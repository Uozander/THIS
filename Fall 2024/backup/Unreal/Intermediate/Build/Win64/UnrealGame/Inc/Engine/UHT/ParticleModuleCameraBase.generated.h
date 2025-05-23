// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Camera/ParticleModuleCameraBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleCameraBase_generated_h
#error "ParticleModuleCameraBase.generated.h already included, missing '#pragma once' in ParticleModuleCameraBase.h"
#endif
#define ENGINE_ParticleModuleCameraBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleCameraBase(); \
	friend struct Z_Construct_UClass_UParticleModuleCameraBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleCameraBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleCameraBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleCameraBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleCameraBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleCameraBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleCameraBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleCameraBase(UParticleModuleCameraBase&&); \
	UParticleModuleCameraBase(const UParticleModuleCameraBase&); \
public: \
	NO_API virtual ~UParticleModuleCameraBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleCameraBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
