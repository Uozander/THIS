// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ReimportCurveFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ReimportCurveFactory_generated_h
#error "ReimportCurveFactory.generated.h already included, missing '#pragma once' in ReimportCurveFactory.h"
#endif
#define UNREALED_ReimportCurveFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUReimportCurveFactory(); \
	friend struct Z_Construct_UClass_UReimportCurveFactory_Statics; \
public: \
	DECLARE_CLASS(UReimportCurveFactory, UCSVImportFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UReimportCurveFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReimportCurveFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReimportCurveFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReimportCurveFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReimportCurveFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UReimportCurveFactory(UReimportCurveFactory&&); \
	UReimportCurveFactory(const UReimportCurveFactory&); \
public: \
	NO_API virtual ~UReimportCurveFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveFactory_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveFactory_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UReimportCurveFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
