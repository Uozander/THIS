// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/StructureFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_StructureFactory_generated_h
#error "StructureFactory.generated.h already included, missing '#pragma once' in StructureFactory.h"
#endif
#define UNREALED_StructureFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUStructureFactory(); \
	friend struct Z_Construct_UClass_UStructureFactory_Statics; \
public: \
	DECLARE_CLASS(UStructureFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UStructureFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UStructureFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStructureFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UStructureFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStructureFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStructureFactory(UStructureFactory&&); \
	UStructureFactory(const UStructureFactory&); \
public: \
	UNREALED_API virtual ~UStructureFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UStructureFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
