// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactorySphereVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ActorFactorySphereVolume_generated_h
#error "ActorFactorySphereVolume.generated.h already included, missing '#pragma once' in ActorFactorySphereVolume.h"
#endif
#define UNREALED_ActorFactorySphereVolume_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySphereVolume_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactorySphereVolume(); \
	friend struct Z_Construct_UClass_UActorFactorySphereVolume_Statics; \
public: \
	DECLARE_CLASS(UActorFactorySphereVolume, UActorFactoryVolume, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UActorFactorySphereVolume)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySphereVolume_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactorySphereVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactorySphereVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactorySphereVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactorySphereVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFactorySphereVolume(UActorFactorySphereVolume&&); \
	UActorFactorySphereVolume(const UActorFactorySphereVolume&); \
public: \
	UNREALED_API virtual ~UActorFactorySphereVolume();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySphereVolume_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySphereVolume_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySphereVolume_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySphereVolume_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UActorFactorySphereVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySphereVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
