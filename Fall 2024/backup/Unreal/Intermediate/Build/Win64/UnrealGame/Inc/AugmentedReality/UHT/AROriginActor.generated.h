// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AROriginActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUGMENTEDREALITY_AROriginActor_generated_h
#error "AROriginActor.generated.h already included, missing '#pragma once' in AROriginActor.h"
#endif
#define AUGMENTEDREALITY_AROriginActor_generated_h

#define FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAAROriginActor(); \
	friend struct Z_Construct_UClass_AAROriginActor_Statics; \
public: \
	DECLARE_CLASS(AAROriginActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(AAROriginActor)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAROriginActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAROriginActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAROriginActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAROriginActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAROriginActor(AAROriginActor&&); \
	AAROriginActor(const AAROriginActor&); \
public: \
	NO_API virtual ~AAROriginActor();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h_13_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h_17_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class AAROriginActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
