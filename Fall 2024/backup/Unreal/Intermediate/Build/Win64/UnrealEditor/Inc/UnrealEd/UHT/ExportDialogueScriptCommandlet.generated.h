// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/ExportDialogueScriptCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ExportDialogueScriptCommandlet_generated_h
#error "ExportDialogueScriptCommandlet.generated.h already included, missing '#pragma once' in ExportDialogueScriptCommandlet.h"
#endif
#define UNREALED_ExportDialogueScriptCommandlet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExportDialogueScriptCommandlet_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FDialogueScriptEntry>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExportDialogueScriptCommandlet_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUExportDialogueScriptCommandlet(); \
	friend struct Z_Construct_UClass_UExportDialogueScriptCommandlet_Statics; \
public: \
	DECLARE_CLASS(UExportDialogueScriptCommandlet, UGatherTextCommandletBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UExportDialogueScriptCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExportDialogueScriptCommandlet_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExportDialogueScriptCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExportDialogueScriptCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExportDialogueScriptCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExportDialogueScriptCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UExportDialogueScriptCommandlet(UExportDialogueScriptCommandlet&&); \
	UExportDialogueScriptCommandlet(const UExportDialogueScriptCommandlet&); \
public: \
	NO_API virtual ~UExportDialogueScriptCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExportDialogueScriptCommandlet_h_55_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExportDialogueScriptCommandlet_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExportDialogueScriptCommandlet_h_58_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExportDialogueScriptCommandlet_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UExportDialogueScriptCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExportDialogueScriptCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
