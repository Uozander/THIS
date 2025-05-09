// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FbxAssetImportData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FbxAssetImportData_generated_h
#error "FbxAssetImportData.generated.h already included, missing '#pragma once' in FbxAssetImportData.h"
#endif
#define UNREALED_FbxAssetImportData_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFbxAssetImportData(); \
	friend struct Z_Construct_UClass_UFbxAssetImportData_Statics; \
public: \
	DECLARE_CLASS(UFbxAssetImportData, UAssetImportData, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UFbxAssetImportData) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxAssetImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxAssetImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxAssetImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxAssetImportData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFbxAssetImportData(UFbxAssetImportData&&); \
	UFbxAssetImportData(const UFbxAssetImportData&); \
public: \
	UNREALED_API virtual ~UFbxAssetImportData();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFbxAssetImportData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
