// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FbxSkeletalMeshImportData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FbxSkeletalMeshImportData_generated_h
#error "FbxSkeletalMeshImportData.generated.h already included, missing '#pragma once' in FbxSkeletalMeshImportData.h"
#endif
#define UNREALED_FbxSkeletalMeshImportData_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_47_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFbxSkeletalMeshImportData, UNREALED_API)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUFbxSkeletalMeshImportData(); \
	friend struct Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics; \
public: \
	DECLARE_CLASS(UFbxSkeletalMeshImportData, UFbxMeshImportData, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UFbxSkeletalMeshImportData) \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_47_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxSkeletalMeshImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxSkeletalMeshImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxSkeletalMeshImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxSkeletalMeshImportData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFbxSkeletalMeshImportData(UFbxSkeletalMeshImportData&&); \
	UFbxSkeletalMeshImportData(const UFbxSkeletalMeshImportData&); \
public: \
	UNREALED_API virtual ~UFbxSkeletalMeshImportData();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_44_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_47_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFbxSkeletalMeshImportData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h


#define FOREACH_ENUM_EFBXIMPORTCONTENTTYPE(op) \
	op(FBXICT_All) \
	op(FBXICT_Geometry) \
	op(FBXICT_SkinningWeights) 

enum EFBXImportContentType : int;
template<> UNREALED_API UEnum* StaticEnum<EFBXImportContentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
