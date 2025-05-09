// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryBlueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ActorFactoryBlueprint_generated_h
#error "ActorFactoryBlueprint.generated.h already included, missing '#pragma once' in ActorFactoryBlueprint.h"
#endif
#define UNREALED_ActorFactoryBlueprint_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBlueprint_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryBlueprint(); \
	friend struct Z_Construct_UClass_UActorFactoryBlueprint_Statics; \
public: \
	DECLARE_CLASS(UActorFactoryBlueprint, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UActorFactoryBlueprint)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBlueprint_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFactoryBlueprint(UActorFactoryBlueprint&&); \
	UActorFactoryBlueprint(const UActorFactoryBlueprint&); \
public: \
	UNREALED_API virtual ~UActorFactoryBlueprint();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBlueprint_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBlueprint_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBlueprint_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBlueprint_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UActorFactoryBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
