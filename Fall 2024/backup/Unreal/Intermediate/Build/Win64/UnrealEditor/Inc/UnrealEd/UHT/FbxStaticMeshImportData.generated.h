// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FbxStaticMeshImportData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FbxStaticMeshImportData_generated_h
#error "FbxStaticMeshImportData.generated.h already included, missing '#pragma once' in FbxStaticMeshImportData.h"
#endif
#define UNREALED_FbxStaticMeshImportData_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxStaticMeshImportData_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUFbxStaticMeshImportData(); \
	friend struct Z_Construct_UClass_UFbxStaticMeshImportData_Statics; \
public: \
	DECLARE_CLASS(UFbxStaticMeshImportData, UFbxMeshImportData, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UFbxStaticMeshImportData)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxStaticMeshImportData_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxStaticMeshImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxStaticMeshImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxStaticMeshImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxStaticMeshImportData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFbxStaticMeshImportData(UFbxStaticMeshImportData&&); \
	UFbxStaticMeshImportData(const UFbxStaticMeshImportData&); \
public: \
	UNREALED_API virtual ~UFbxStaticMeshImportData();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxStaticMeshImportData_h_16_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxStaticMeshImportData_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxStaticMeshImportData_h_19_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxStaticMeshImportData_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFbxStaticMeshImportData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxStaticMeshImportData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
