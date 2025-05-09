// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/DataTableFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_DataTableFactory_generated_h
#error "DataTableFactory.generated.h already included, missing '#pragma once' in DataTableFactory.h"
#endif
#define UNREALED_DataTableFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDataTableFactory(); \
	friend struct Z_Construct_UClass_UDataTableFactory_Statics; \
public: \
	DECLARE_CLASS(UDataTableFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UDataTableFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UDataTableFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataTableFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UDataTableFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataTableFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataTableFactory(UDataTableFactory&&); \
	UDataTableFactory(const UDataTableFactory&); \
public: \
	UNREALED_API virtual ~UDataTableFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_12_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UDataTableFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
