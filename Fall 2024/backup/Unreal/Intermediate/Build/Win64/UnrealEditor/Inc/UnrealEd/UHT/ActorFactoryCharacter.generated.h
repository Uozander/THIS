// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ActorFactoryCharacter_generated_h
#error "ActorFactoryCharacter.generated.h already included, missing '#pragma once' in ActorFactoryCharacter.h"
#endif
#define UNREALED_ActorFactoryCharacter_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryCharacter(); \
	friend struct Z_Construct_UClass_UActorFactoryCharacter_Statics; \
public: \
	DECLARE_CLASS(UActorFactoryCharacter, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UActorFactoryCharacter)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFactoryCharacter(UActorFactoryCharacter&&); \
	UActorFactoryCharacter(const UActorFactoryCharacter&); \
public: \
	UNREALED_API virtual ~UActorFactoryCharacter();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCharacter_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCharacter_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UActorFactoryCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
