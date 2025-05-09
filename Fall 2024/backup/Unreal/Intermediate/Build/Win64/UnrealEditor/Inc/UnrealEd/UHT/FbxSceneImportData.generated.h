// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FbxSceneImportData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FbxSceneImportData_generated_h
#error "FbxSceneImportData.generated.h already included, missing '#pragma once' in FbxSceneImportData.h"
#endif
#define UNREALED_FbxSceneImportData_generated_h

#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFbxSceneImportData, UNREALED_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUFbxSceneImportData(); \
	friend struct Z_Construct_UClass_UFbxSceneImportData_Statics; \
public: \
	DECLARE_CLASS(UFbxSceneImportData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UFbxSceneImportData) \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxSceneImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxSceneImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxSceneImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxSceneImportData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFbxSceneImportData(UFbxSceneImportData&&); \
	UFbxSceneImportData(const UFbxSceneImportData&); \
public: \
	UNREALED_API virtual ~UFbxSceneImportData();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_26_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFbxSceneImportData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h


#define FOREACH_ENUM_EFBXSCENEREIMPORTSTATUSFLAGS(op) \
	op(EFbxSceneReimportStatusFlags::None) \
	op(EFbxSceneReimportStatusFlags::Added) \
	op(EFbxSceneReimportStatusFlags::Removed) \
	op(EFbxSceneReimportStatusFlags::Same) \
	op(EFbxSceneReimportStatusFlags::FoundContentBrowserAsset) \
	op(EFbxSceneReimportStatusFlags::ReimportAsset) 

enum class EFbxSceneReimportStatusFlags : uint8;
template<> struct TIsUEnumClass<EFbxSceneReimportStatusFlags> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EFbxSceneReimportStatusFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
