// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FontFileImportFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FontFileImportFactory_generated_h
#error "FontFileImportFactory.generated.h already included, missing '#pragma once' in FontFileImportFactory.h"
#endif
#define UNREALED_FontFileImportFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFontFileImportFactory(); \
	friend struct Z_Construct_UClass_UFontFileImportFactory_Statics; \
public: \
	DECLARE_CLASS(UFontFileImportFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UFontFileImportFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFontFileImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontFileImportFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFontFileImportFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontFileImportFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFontFileImportFactory(UFontFileImportFactory&&); \
	UFontFileImportFactory(const UFontFileImportFactory&); \
public: \
	UNREALED_API virtual ~UFontFileImportFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFontFileImportFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFileImportFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
