// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/SubUV/ParticleModuleSubUVBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleSubUVBase_generated_h
#error "ParticleModuleSubUVBase.generated.h already included, missing '#pragma once' in ParticleModuleSubUVBase.h"
#endif
#define ENGINE_ParticleModuleSubUVBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleSubUVBase(); \
	friend struct Z_Construct_UClass_UParticleModuleSubUVBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleSubUVBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleSubUVBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleSubUVBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleSubUVBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleSubUVBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleSubUVBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleSubUVBase(UParticleModuleSubUVBase&&); \
	UParticleModuleSubUVBase(const UParticleModuleSubUVBase&); \
public: \
	NO_API virtual ~UParticleModuleSubUVBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleSubUVBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
