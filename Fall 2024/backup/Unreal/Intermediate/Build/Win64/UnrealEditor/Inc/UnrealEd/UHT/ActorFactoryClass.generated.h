// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactoryClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ActorFactoryClass_generated_h
#error "ActorFactoryClass.generated.h already included, missing '#pragma once' in ActorFactoryClass.h"
#endif
#define UNREALED_ActorFactoryClass_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryClass_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryClass(); \
	friend struct Z_Construct_UClass_UActorFactoryClass_Statics; \
public: \
	DECLARE_CLASS(UActorFactoryClass, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UActorFactoryClass)


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryClass_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactoryClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactoryClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFactoryClass(UActorFactoryClass&&); \
	UActorFactoryClass(const UActorFactoryClass&); \
public: \
	UNREALED_API virtual ~UActorFactoryClass();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryClass_h_16_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryClass_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryClass_h_19_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryClass_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UActorFactoryClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
