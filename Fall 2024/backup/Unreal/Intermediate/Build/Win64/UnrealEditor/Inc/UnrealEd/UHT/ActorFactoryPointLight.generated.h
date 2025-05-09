// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryPointLight.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ActorFactoryPointLight_generated_h
#error "ActorFactoryPointLight.generated.h already included, missing '#pragma once' in ActorFactoryPointLight.h"
#endif
#define UNREALED_ActorFactoryPointLight_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPointLight_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryPointLight(); \
	friend struct Z_Construct_UClass_UActorFactoryPointLight_Statics; \
public: \
	DECLARE_CLASS(UActorFactoryPointLight, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UActorFactoryPointLight)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPointLight_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryPointLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryPointLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryPointLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryPointLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFactoryPointLight(UActorFactoryPointLight&&); \
	UActorFactoryPointLight(const UActorFactoryPointLight&); \
public: \
	UNREALED_API virtual ~UActorFactoryPointLight();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPointLight_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPointLight_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPointLight_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPointLight_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UActorFactoryPointLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPointLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
