// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/CompileAllBlueprintsCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_CompileAllBlueprintsCommandlet_generated_h
#error "CompileAllBlueprintsCommandlet.generated.h already included, missing '#pragma once' in CompileAllBlueprintsCommandlet.h"
#endif
#define UNREALED_CompileAllBlueprintsCommandlet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_CompileAllBlueprintsCommandlet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCompileAllBlueprintsCommandlet(); \
	friend struct Z_Construct_UClass_UCompileAllBlueprintsCommandlet_Statics; \
public: \
	DECLARE_CLASS(UCompileAllBlueprintsCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UCompileAllBlueprintsCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_CompileAllBlueprintsCommandlet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompileAllBlueprintsCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompileAllBlueprintsCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompileAllBlueprintsCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompileAllBlueprintsCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCompileAllBlueprintsCommandlet(UCompileAllBlueprintsCommandlet&&); \
	UCompileAllBlueprintsCommandlet(const UCompileAllBlueprintsCommandlet&); \
public: \
	NO_API virtual ~UCompileAllBlueprintsCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_CompileAllBlueprintsCommandlet_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_CompileAllBlueprintsCommandlet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_CompileAllBlueprintsCommandlet_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_CompileAllBlueprintsCommandlet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UCompileAllBlueprintsCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_CompileAllBlueprintsCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
