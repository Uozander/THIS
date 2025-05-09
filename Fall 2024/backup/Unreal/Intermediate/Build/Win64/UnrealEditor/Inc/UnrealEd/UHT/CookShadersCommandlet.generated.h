// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/CookShadersCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_CookShadersCommandlet_generated_h
#error "CookShadersCommandlet.generated.h already included, missing '#pragma once' in CookShadersCommandlet.h"
#endif
#define UNREALED_CookShadersCommandlet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookShadersCommandlet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCookShadersCommandlet(); \
	friend struct Z_Construct_UClass_UCookShadersCommandlet_Statics; \
public: \
	DECLARE_CLASS(UCookShadersCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UCookShadersCommandlet) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookShadersCommandlet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCookShadersCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookShadersCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookShadersCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookShadersCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCookShadersCommandlet(UCookShadersCommandlet&&); \
	UCookShadersCommandlet(const UCookShadersCommandlet&); \
public: \
	NO_API virtual ~UCookShadersCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookShadersCommandlet_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookShadersCommandlet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookShadersCommandlet_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookShadersCommandlet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UCookShadersCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookShadersCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
