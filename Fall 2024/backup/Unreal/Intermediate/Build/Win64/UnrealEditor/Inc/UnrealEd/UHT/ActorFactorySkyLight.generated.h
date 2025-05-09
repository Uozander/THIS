// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactorySkyLight.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ActorFactorySkyLight_generated_h
#error "ActorFactorySkyLight.generated.h already included, missing '#pragma once' in ActorFactorySkyLight.h"
#endif
#define UNREALED_ActorFactorySkyLight_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactorySkyLight(); \
	friend struct Z_Construct_UClass_UActorFactorySkyLight_Statics; \
public: \
	DECLARE_CLASS(UActorFactorySkyLight, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UActorFactorySkyLight)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactorySkyLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactorySkyLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactorySkyLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactorySkyLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFactorySkyLight(UActorFactorySkyLight&&); \
	UActorFactorySkyLight(const UActorFactorySkyLight&); \
public: \
	UNREALED_API virtual ~UActorFactorySkyLight();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UActorFactorySkyLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkyLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
