// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/StringTableFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_StringTableFactory_generated_h
#error "StringTableFactory.generated.h already included, missing '#pragma once' in StringTableFactory.h"
#endif
#define UNREALED_StringTableFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUStringTableFactory(); \
	friend struct Z_Construct_UClass_UStringTableFactory_Statics; \
public: \
	DECLARE_CLASS(UStringTableFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UStringTableFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UStringTableFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStringTableFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UStringTableFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStringTableFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStringTableFactory(UStringTableFactory&&); \
	UStringTableFactory(const UStringTableFactory&); \
public: \
	UNREALED_API virtual ~UStringTableFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UStringTableFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
