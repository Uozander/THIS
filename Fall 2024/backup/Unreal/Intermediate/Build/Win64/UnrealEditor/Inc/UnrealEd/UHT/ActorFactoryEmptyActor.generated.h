// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryEmptyActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ActorFactoryEmptyActor_generated_h
#error "ActorFactoryEmptyActor.generated.h already included, missing '#pragma once' in ActorFactoryEmptyActor.h"
#endif
#define UNREALED_ActorFactoryEmptyActor_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryEmptyActor(); \
	friend struct Z_Construct_UClass_UActorFactoryEmptyActor_Statics; \
public: \
	DECLARE_CLASS(UActorFactoryEmptyActor, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UActorFactoryEmptyActor)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryEmptyActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryEmptyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryEmptyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryEmptyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFactoryEmptyActor(UActorFactoryEmptyActor&&); \
	UActorFactoryEmptyActor(const UActorFactoryEmptyActor&); \
public: \
	UNREALED_API virtual ~UActorFactoryEmptyActor();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h_16_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h_19_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UActorFactoryEmptyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
