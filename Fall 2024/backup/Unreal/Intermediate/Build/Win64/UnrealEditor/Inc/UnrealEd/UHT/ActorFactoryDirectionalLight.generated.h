// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryDirectionalLight.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ActorFactoryDirectionalLight_generated_h
#error "ActorFactoryDirectionalLight.generated.h already included, missing '#pragma once' in ActorFactoryDirectionalLight.h"
#endif
#define UNREALED_ActorFactoryDirectionalLight_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDirectionalLight_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryDirectionalLight(); \
	friend struct Z_Construct_UClass_UActorFactoryDirectionalLight_Statics; \
public: \
	DECLARE_CLASS(UActorFactoryDirectionalLight, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UActorFactoryDirectionalLight)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDirectionalLight_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryDirectionalLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryDirectionalLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryDirectionalLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryDirectionalLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFactoryDirectionalLight(UActorFactoryDirectionalLight&&); \
	UActorFactoryDirectionalLight(const UActorFactoryDirectionalLight&); \
public: \
	UNREALED_API virtual ~UActorFactoryDirectionalLight();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDirectionalLight_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDirectionalLight_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDirectionalLight_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDirectionalLight_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UActorFactoryDirectionalLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryDirectionalLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
