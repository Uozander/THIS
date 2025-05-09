// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Selection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_Selection_generated_h
#error "Selection.generated.h already included, missing '#pragma once' in Selection.h"
#endif
#define UNREALED_Selection_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Selection_h_41_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USelection, UNREALED_API)


#define FID_Engine_Source_Editor_UnrealEd_Public_Selection_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSelection(); \
	friend struct Z_Construct_UClass_USelection_Statics; \
public: \
	DECLARE_CLASS(USelection, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(USelection) \
	FID_Engine_Source_Editor_UnrealEd_Public_Selection_h_41_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_UnrealEd_Public_Selection_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USelection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USelection(USelection&&); \
	USelection(const USelection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelection) \
	UNREALED_API virtual ~USelection();


#define FID_Engine_Source_Editor_UnrealEd_Public_Selection_h_38_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Selection_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Selection_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Selection_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class USelection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Selection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
