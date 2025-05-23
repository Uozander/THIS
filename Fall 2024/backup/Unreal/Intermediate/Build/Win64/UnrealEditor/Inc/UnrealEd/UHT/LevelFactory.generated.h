// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/LevelFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_LevelFactory_generated_h
#error "LevelFactory.generated.h already included, missing '#pragma once' in LevelFactory.h"
#endif
#define UNREALED_LevelFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesULevelFactory(); \
	friend struct Z_Construct_UClass_ULevelFactory_Statics; \
public: \
	DECLARE_CLASS(ULevelFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(ULevelFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API ULevelFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, ULevelFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelFactory(ULevelFactory&&); \
	ULevelFactory(const ULevelFactory&); \
public: \
	UNREALED_API virtual ~ULevelFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class ULevelFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LevelFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
