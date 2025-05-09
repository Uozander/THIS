// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SpecularProfileFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_SpecularProfileFactory_generated_h
#error "SpecularProfileFactory.generated.h already included, missing '#pragma once' in SpecularProfileFactory.h"
#endif
#define UNREALED_SpecularProfileFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SpecularProfileFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSpecularProfileFactory(); \
	friend struct Z_Construct_UClass_USpecularProfileFactory_Statics; \
public: \
	DECLARE_CLASS(USpecularProfileFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(USpecularProfileFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SpecularProfileFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpecularProfileFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpecularProfileFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpecularProfileFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpecularProfileFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USpecularProfileFactory(USpecularProfileFactory&&); \
	USpecularProfileFactory(const USpecularProfileFactory&); \
public: \
	NO_API virtual ~USpecularProfileFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SpecularProfileFactory_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SpecularProfileFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SpecularProfileFactory_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SpecularProfileFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class USpecularProfileFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SpecularProfileFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
