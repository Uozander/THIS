// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/ExportTextContainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ExportTextContainer_generated_h
#error "ExportTextContainer.generated.h already included, missing '#pragma once' in ExportTextContainer.h"
#endif
#define UNREALED_ExportTextContainer_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUExportTextContainer(); \
	friend struct Z_Construct_UClass_UExportTextContainer_Statics; \
public: \
	DECLARE_CLASS(UExportTextContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UExportTextContainer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UExportTextContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExportTextContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UExportTextContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExportTextContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UExportTextContainer(UExportTextContainer&&); \
	UExportTextContainer(const UExportTextContainer&); \
public: \
	UNREALED_API virtual ~UExportTextContainer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UExportTextContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
