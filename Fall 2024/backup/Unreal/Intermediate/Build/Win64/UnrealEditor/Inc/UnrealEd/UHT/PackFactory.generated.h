// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/PackFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_PackFactory_generated_h
#error "PackFactory.generated.h already included, missing '#pragma once' in PackFactory.h"
#endif
#define UNREALED_PackFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPackFactory(); \
	friend struct Z_Construct_UClass_UPackFactory_Statics; \
public: \
	DECLARE_CLASS(UPackFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UPackFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPackFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPackFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPackFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPackFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPackFactory(UPackFactory&&); \
	UPackFactory(const UPackFactory&); \
public: \
	NO_API virtual ~UPackFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackFactory_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackFactory_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UPackFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
