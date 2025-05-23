// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryTargetPoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ActorFactoryTargetPoint_generated_h
#error "ActorFactoryTargetPoint.generated.h already included, missing '#pragma once' in ActorFactoryTargetPoint.h"
#endif
#define UNREALED_ActorFactoryTargetPoint_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTargetPoint_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryTargetPoint(); \
	friend struct Z_Construct_UClass_UActorFactoryTargetPoint_Statics; \
public: \
	DECLARE_CLASS(UActorFactoryTargetPoint, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UActorFactoryTargetPoint)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTargetPoint_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryTargetPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryTargetPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryTargetPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryTargetPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFactoryTargetPoint(UActorFactoryTargetPoint&&); \
	UActorFactoryTargetPoint(const UActorFactoryTargetPoint&); \
public: \
	UNREALED_API virtual ~UActorFactoryTargetPoint();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTargetPoint_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTargetPoint_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTargetPoint_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTargetPoint_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UActorFactoryTargetPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTargetPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
