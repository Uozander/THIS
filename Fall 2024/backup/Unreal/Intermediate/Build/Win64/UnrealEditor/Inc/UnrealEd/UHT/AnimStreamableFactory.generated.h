// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/AnimStreamableFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_AnimStreamableFactory_generated_h
#error "AnimStreamableFactory.generated.h already included, missing '#pragma once' in AnimStreamableFactory.h"
#endif
#define UNREALED_AnimStreamableFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimStreamableFactory_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAnimStreamableFactory(); \
	friend struct Z_Construct_UClass_UAnimStreamableFactory_Statics; \
public: \
	DECLARE_CLASS(UAnimStreamableFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UAnimStreamableFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimStreamableFactory_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAnimStreamableFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStreamableFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAnimStreamableFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStreamableFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimStreamableFactory(UAnimStreamableFactory&&); \
	UAnimStreamableFactory(const UAnimStreamableFactory&); \
public: \
	UNREALED_API virtual ~UAnimStreamableFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimStreamableFactory_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimStreamableFactory_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimStreamableFactory_h_20_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimStreamableFactory_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UAnimStreamableFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimStreamableFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
