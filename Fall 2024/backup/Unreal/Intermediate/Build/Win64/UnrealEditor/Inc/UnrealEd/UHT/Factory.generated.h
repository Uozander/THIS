// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/Factory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAssetImportTask;
#ifdef UNREALED_Factory_generated_h
#error "Factory.generated.h already included, missing '#pragma once' in Factory.h"
#endif
#define UNREALED_Factory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_24_CALLBACK_WRAPPERS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUFactory(); \
	friend struct Z_Construct_UClass_UFactory_Statics; \
public: \
	DECLARE_CLASS(UFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFactory(UFactory&&); \
	UFactory(const UFactory&); \
public: \
	UNREALED_API virtual ~UFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_21_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_24_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_24_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
