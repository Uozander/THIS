// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CascadeParticleSystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CASCADE_CascadeParticleSystemComponent_generated_h
#error "CascadeParticleSystemComponent.generated.h already included, missing '#pragma once' in CascadeParticleSystemComponent.h"
#endif
#define CASCADE_CascadeParticleSystemComponent_generated_h

#define FID_Engine_Source_Editor_Cascade_Classes_CascadeParticleSystemComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCascadeParticleSystemComponent(); \
	friend struct Z_Construct_UClass_UCascadeParticleSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UCascadeParticleSystemComponent, UParticleSystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cascade"), NO_API) \
	DECLARE_SERIALIZER(UCascadeParticleSystemComponent)


#define FID_Engine_Source_Editor_Cascade_Classes_CascadeParticleSystemComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCascadeParticleSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCascadeParticleSystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCascadeParticleSystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCascadeParticleSystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCascadeParticleSystemComponent(UCascadeParticleSystemComponent&&); \
	UCascadeParticleSystemComponent(const UCascadeParticleSystemComponent&); \
public: \
	NO_API virtual ~UCascadeParticleSystemComponent();


#define FID_Engine_Source_Editor_Cascade_Classes_CascadeParticleSystemComponent_h_13_PROLOG
#define FID_Engine_Source_Editor_Cascade_Classes_CascadeParticleSystemComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Cascade_Classes_CascadeParticleSystemComponent_h_16_INCLASS \
	FID_Engine_Source_Editor_Cascade_Classes_CascadeParticleSystemComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CASCADE_API UClass* StaticClass<class UCascadeParticleSystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Cascade_Classes_CascadeParticleSystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
