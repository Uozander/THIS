// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ModelFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ModelFactory_generated_h
#error "ModelFactory.generated.h already included, missing '#pragma once' in ModelFactory.h"
#endif
#define UNREALED_ModelFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ModelFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUModelFactory(); \
	friend struct Z_Construct_UClass_UModelFactory_Statics; \
public: \
	DECLARE_CLASS(UModelFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UModelFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ModelFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModelFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModelFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModelFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModelFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModelFactory(UModelFactory&&); \
	UModelFactory(const UModelFactory&); \
public: \
	NO_API virtual ~UModelFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ModelFactory_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ModelFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ModelFactory_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ModelFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UModelFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ModelFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
