// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/Transactor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_Transactor_generated_h
#error "Transactor.generated.h already included, missing '#pragma once' in Transactor.h"
#endif
#define UNREALED_Transactor_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_Transactor_h_489_INCLASS \
private: \
	static void StaticRegisterNativesUTransactor(); \
	friend struct Z_Construct_UClass_UTransactor_Statics; \
public: \
	DECLARE_CLASS(UTransactor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UTransactor)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_Transactor_h_489_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UTransactor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransactor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UTransactor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransactor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTransactor(UTransactor&&); \
	UTransactor(const UTransactor&); \
public: \
	UNREALED_API virtual ~UTransactor();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_Transactor_h_486_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_Transactor_h_489_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_Transactor_h_489_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_Transactor_h_489_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UTransactor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Editor_Transactor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
