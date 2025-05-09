// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ReimportTextureFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ReimportTextureFactory_generated_h
#error "ReimportTextureFactory.generated.h already included, missing '#pragma once' in ReimportTextureFactory.h"
#endif
#define UNREALED_ReimportTextureFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUReimportTextureFactory(); \
	friend struct Z_Construct_UClass_UReimportTextureFactory_Statics; \
public: \
	DECLARE_CLASS(UReimportTextureFactory, UTextureFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UReimportTextureFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReimportTextureFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReimportTextureFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReimportTextureFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReimportTextureFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UReimportTextureFactory(UReimportTextureFactory&&); \
	UReimportTextureFactory(const UReimportTextureFactory&); \
public: \
	NO_API virtual ~UReimportTextureFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UReimportTextureFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
