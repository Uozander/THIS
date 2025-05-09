// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/CookCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_CookCommandlet_generated_h
#error "CookCommandlet.generated.h already included, missing '#pragma once' in CookCommandlet.h"
#endif
#define UNREALED_CookCommandlet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUCookCommandlet(); \
	friend struct Z_Construct_UClass_UCookCommandlet_Statics; \
public: \
	DECLARE_CLASS(UCookCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UCookCommandlet) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCookCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCookCommandlet(UCookCommandlet&&); \
	UCookCommandlet(const UCookCommandlet&); \
public: \
	NO_API virtual ~UCookCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_24_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_28_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UCookCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
