// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/WorldFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_WorldFactory_generated_h
#error "WorldFactory.generated.h already included, missing '#pragma once' in WorldFactory.h"
#endif
#define UNREALED_WorldFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUWorldFactory(); \
	friend struct Z_Construct_UClass_UWorldFactory_Statics; \
public: \
	DECLARE_CLASS(UWorldFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UWorldFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UWorldFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UWorldFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldFactory(UWorldFactory&&); \
	UWorldFactory(const UWorldFactory&); \
public: \
	UNREALED_API virtual ~UWorldFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h_20_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h_23_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UWorldFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
