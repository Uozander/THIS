// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ActorFactory_generated_h
#error "ActorFactory.generated.h already included, missing '#pragma once' in ActorFactory.h"
#endif
#define UNREALED_ActorFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactory(); \
	friend struct Z_Construct_UClass_UActorFactory_Statics; \
public: \
	DECLARE_CLASS(UActorFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UActorFactory) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UActorFactory*>(this); }


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFactory(UActorFactory&&); \
	UActorFactory(const UActorFactory&); \
public: \
	UNREALED_API virtual ~UActorFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_25_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UActorFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
