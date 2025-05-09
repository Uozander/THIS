// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ReimportDataTableFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ReimportDataTableFactory_generated_h
#error "ReimportDataTableFactory.generated.h already included, missing '#pragma once' in ReimportDataTableFactory.h"
#endif
#define UNREALED_ReimportDataTableFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUReimportDataTableFactory(); \
	friend struct Z_Construct_UClass_UReimportDataTableFactory_Statics; \
public: \
	DECLARE_CLASS(UReimportDataTableFactory, UCSVImportFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UReimportDataTableFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UReimportDataTableFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReimportDataTableFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UReimportDataTableFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReimportDataTableFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UReimportDataTableFactory(UReimportDataTableFactory&&); \
	UReimportDataTableFactory(const UReimportDataTableFactory&); \
public: \
	UNREALED_API virtual ~UReimportDataTableFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UReimportDataTableFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
