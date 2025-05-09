// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactorySkeletalMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ActorFactorySkeletalMesh_generated_h
#error "ActorFactorySkeletalMesh.generated.h already included, missing '#pragma once' in ActorFactorySkeletalMesh.h"
#endif
#define UNREALED_ActorFactorySkeletalMesh_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkeletalMesh_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactorySkeletalMesh(); \
	friend struct Z_Construct_UClass_UActorFactorySkeletalMesh_Statics; \
public: \
	DECLARE_CLASS(UActorFactorySkeletalMesh, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UActorFactorySkeletalMesh)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkeletalMesh_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactorySkeletalMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactorySkeletalMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactorySkeletalMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactorySkeletalMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFactorySkeletalMesh(UActorFactorySkeletalMesh&&); \
	UActorFactorySkeletalMesh(const UActorFactorySkeletalMesh&); \
public: \
	UNREALED_API virtual ~UActorFactorySkeletalMesh();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkeletalMesh_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkeletalMesh_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkeletalMesh_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkeletalMesh_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UActorFactorySkeletalMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySkeletalMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
