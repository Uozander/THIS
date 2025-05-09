// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ActorFactoryPawn_generated_h
#error "ActorFactoryPawn.generated.h already included, missing '#pragma once' in ActorFactoryPawn.h"
#endif
#define UNREALED_ActorFactoryPawn_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryPawn(); \
	friend struct Z_Construct_UClass_UActorFactoryPawn_Statics; \
public: \
	DECLARE_CLASS(UActorFactoryPawn, UActorFactoryEmptyActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UActorFactoryPawn)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFactoryPawn(UActorFactoryPawn&&); \
	UActorFactoryPawn(const UActorFactoryPawn&); \
public: \
	UNREALED_API virtual ~UActorFactoryPawn();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPawn_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPawn_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UActorFactoryPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
