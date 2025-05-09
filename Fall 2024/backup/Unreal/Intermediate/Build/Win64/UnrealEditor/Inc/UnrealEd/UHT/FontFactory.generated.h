// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FontFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FontFactory_generated_h
#error "FontFactory.generated.h already included, missing '#pragma once' in FontFactory.h"
#endif
#define UNREALED_FontFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFontFactory(); \
	friend struct Z_Construct_UClass_UFontFactory_Statics; \
public: \
	DECLARE_CLASS(UFontFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UFontFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFontFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFontFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFontFactory(UFontFactory&&); \
	UFontFactory(const UFontFactory&); \
public: \
	UNREALED_API virtual ~UFontFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFontFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FontFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
