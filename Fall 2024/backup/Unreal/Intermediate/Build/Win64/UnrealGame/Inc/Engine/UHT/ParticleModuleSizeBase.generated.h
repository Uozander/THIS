// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Size/ParticleModuleSizeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleSizeBase_generated_h
#error "ParticleModuleSizeBase.generated.h already included, missing '#pragma once' in ParticleModuleSizeBase.h"
#endif
#define ENGINE_ParticleModuleSizeBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleSizeBase(); \
	friend struct Z_Construct_UClass_UParticleModuleSizeBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleSizeBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleSizeBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleSizeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleSizeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleSizeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleSizeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParticleModuleSizeBase(UParticleModuleSizeBase&&); \
	UParticleModuleSizeBase(const UParticleModuleSizeBase&); \
public: \
	NO_API virtual ~UParticleModuleSizeBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleSizeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
