// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/CurveImportFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_CurveImportFactory_generated_h
#error "CurveImportFactory.generated.h already included, missing '#pragma once' in CurveImportFactory.h"
#endif
#define UNREALED_CurveImportFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCurveImportFactory(); \
	friend struct Z_Construct_UClass_UCurveImportFactory_Statics; \
public: \
	DECLARE_CLASS(UCurveImportFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UCurveImportFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveImportFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveImportFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveImportFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCurveImportFactory(UCurveImportFactory&&); \
	UCurveImportFactory(const UCurveImportFactory&); \
public: \
	NO_API virtual ~UCurveImportFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UCurveImportFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
