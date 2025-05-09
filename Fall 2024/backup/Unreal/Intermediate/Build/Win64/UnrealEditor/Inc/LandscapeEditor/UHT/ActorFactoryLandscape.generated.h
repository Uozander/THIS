// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Classes/ActorFactoryLandscape.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPEEDITOR_ActorFactoryLandscape_generated_h
#error "ActorFactoryLandscape.generated.h already included, missing '#pragma once' in ActorFactoryLandscape.h"
#endif
#define LANDSCAPEEDITOR_ActorFactoryLandscape_generated_h

#define FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_ActorFactoryLandscape_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryLandscape(); \
	friend struct Z_Construct_UClass_UActorFactoryLandscape_Statics; \
public: \
	DECLARE_CLASS(UActorFactoryLandscape, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandscapeEditor"), LANDSCAPEEDITOR_API) \
	DECLARE_SERIALIZER(UActorFactoryLandscape)


#define FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_ActorFactoryLandscape_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPEEDITOR_API UActorFactoryLandscape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryLandscape) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPEEDITOR_API, UActorFactoryLandscape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryLandscape); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFactoryLandscape(UActorFactoryLandscape&&); \
	UActorFactoryLandscape(const UActorFactoryLandscape&); \
public: \
	LANDSCAPEEDITOR_API virtual ~UActorFactoryLandscape();


#define FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_ActorFactoryLandscape_h_14_PROLOG
#define FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_ActorFactoryLandscape_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_ActorFactoryLandscape_h_17_INCLASS \
	FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_ActorFactoryLandscape_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPEEDITOR_API UClass* StaticClass<class UActorFactoryLandscape>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_ActorFactoryLandscape_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
