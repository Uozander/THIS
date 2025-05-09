// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FbxAnimSequenceImportData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FbxAnimSequenceImportData_generated_h
#error "FbxAnimSequenceImportData.generated.h already included, missing '#pragma once' in FbxAnimSequenceImportData.h"
#endif
#define UNREALED_FbxAnimSequenceImportData_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFbxAnimSequenceImportData, UNREALED_API)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUFbxAnimSequenceImportData(); \
	friend struct Z_Construct_UClass_UFbxAnimSequenceImportData_Statics; \
public: \
	DECLARE_CLASS(UFbxAnimSequenceImportData, UFbxAssetImportData, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UFbxAnimSequenceImportData) \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxAnimSequenceImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxAnimSequenceImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxAnimSequenceImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxAnimSequenceImportData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFbxAnimSequenceImportData(UFbxAnimSequenceImportData&&); \
	UFbxAnimSequenceImportData(const UFbxAnimSequenceImportData&); \
public: \
	UNREALED_API virtual ~UFbxAnimSequenceImportData();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_36_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFbxAnimSequenceImportData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h


#define FOREACH_ENUM_EFBXANIMATIONLENGTHIMPORTTYPE(op) \
	op(FBXALIT_ExportedTime) \
	op(FBXALIT_AnimatedKey) \
	op(FBXALIT_SetRange) 

enum EFBXAnimationLengthImportType : int;
template<> UNREALED_API UEnum* StaticEnum<EFBXAnimationLengthImportType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
