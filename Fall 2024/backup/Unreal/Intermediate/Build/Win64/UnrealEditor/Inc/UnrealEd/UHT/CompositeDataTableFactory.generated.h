// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/CompositeDataTableFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_CompositeDataTableFactory_generated_h
#error "CompositeDataTableFactory.generated.h already included, missing '#pragma once' in CompositeDataTableFactory.h"
#endif
#define UNREALED_CompositeDataTableFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeDataTableFactory_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCompositeDataTableFactory(); \
	friend struct Z_Construct_UClass_UCompositeDataTableFactory_Statics; \
public: \
	DECLARE_CLASS(UCompositeDataTableFactory, UDataTableFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UCompositeDataTableFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeDataTableFactory_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UCompositeDataTableFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeDataTableFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UCompositeDataTableFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeDataTableFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCompositeDataTableFactory(UCompositeDataTableFactory&&); \
	UCompositeDataTableFactory(const UCompositeDataTableFactory&); \
public: \
	UNREALED_API virtual ~UCompositeDataTableFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeDataTableFactory_h_8_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeDataTableFactory_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeDataTableFactory_h_11_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeDataTableFactory_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UCompositeDataTableFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeDataTableFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
