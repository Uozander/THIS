// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SkeletonFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_SkeletonFactory_generated_h
#error "SkeletonFactory.generated.h already included, missing '#pragma once' in SkeletonFactory.h"
#endif
#define UNREALED_SkeletonFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletonFactory(); \
	friend struct Z_Construct_UClass_USkeletonFactory_Statics; \
public: \
	DECLARE_CLASS(USkeletonFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(USkeletonFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USkeletonFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletonFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USkeletonFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletonFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USkeletonFactory(USkeletonFactory&&); \
	USkeletonFactory(const USkeletonFactory&); \
public: \
	UNREALED_API virtual ~USkeletonFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h_20_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class USkeletonFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
