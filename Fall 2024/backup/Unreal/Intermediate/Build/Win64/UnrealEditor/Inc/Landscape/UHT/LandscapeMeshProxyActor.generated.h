// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeMeshProxyActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeMeshProxyActor_generated_h
#error "LandscapeMeshProxyActor.generated.h already included, missing '#pragma once' in LandscapeMeshProxyActor.h"
#endif
#define LANDSCAPE_LandscapeMeshProxyActor_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeMeshProxyActor(); \
	friend struct Z_Construct_UClass_ALandscapeMeshProxyActor_Statics; \
public: \
	DECLARE_CLASS(ALandscapeMeshProxyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeMeshProxyActor)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ALandscapeMeshProxyActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeMeshProxyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeMeshProxyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeMeshProxyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALandscapeMeshProxyActor(ALandscapeMeshProxyActor&&); \
	ALandscapeMeshProxyActor(const ALandscapeMeshProxyActor&); \
public: \
	LANDSCAPE_API virtual ~ALandscapeMeshProxyActor();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_11_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ALandscapeMeshProxyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
