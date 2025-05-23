// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/PolysFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_PolysFactory_generated_h
#error "PolysFactory.generated.h already included, missing '#pragma once' in PolysFactory.h"
#endif
#define UNREALED_PolysFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PolysFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPolysFactory(); \
	friend struct Z_Construct_UClass_UPolysFactory_Statics; \
public: \
	DECLARE_CLASS(UPolysFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UPolysFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PolysFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPolysFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPolysFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPolysFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPolysFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPolysFactory(UPolysFactory&&); \
	UPolysFactory(const UPolysFactory&); \
public: \
	NO_API virtual ~UPolysFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PolysFactory_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PolysFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PolysFactory_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PolysFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UPolysFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PolysFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
