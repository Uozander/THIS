// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/BlueprintFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_BlueprintFactory_generated_h
#error "BlueprintFactory.generated.h already included, missing '#pragma once' in BlueprintFactory.h"
#endif
#define UNREALED_BlueprintFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintFactory(); \
	friend struct Z_Construct_UClass_UBlueprintFactory_Statics; \
public: \
	DECLARE_CLASS(UBlueprintFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UBlueprintFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UBlueprintFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UBlueprintFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintFactory(UBlueprintFactory&&); \
	UBlueprintFactory(const UBlueprintFactory&); \
public: \
	UNREALED_API virtual ~UBlueprintFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UBlueprintFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
