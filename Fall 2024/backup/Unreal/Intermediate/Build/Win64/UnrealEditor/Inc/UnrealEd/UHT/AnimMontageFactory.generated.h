// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/AnimMontageFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_AnimMontageFactory_generated_h
#error "AnimMontageFactory.generated.h already included, missing '#pragma once' in AnimMontageFactory.h"
#endif
#define UNREALED_AnimMontageFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAnimMontageFactory(); \
	friend struct Z_Construct_UClass_UAnimMontageFactory_Statics; \
public: \
	DECLARE_CLASS(UAnimMontageFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UAnimMontageFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAnimMontageFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimMontageFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAnimMontageFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimMontageFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimMontageFactory(UAnimMontageFactory&&); \
	UAnimMontageFactory(const UAnimMontageFactory&); \
public: \
	UNREALED_API virtual ~UAnimMontageFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UAnimMontageFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
