// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserDefinedStructure/UserDefinedStructEditorData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_UserDefinedStructEditorData_generated_h
#error "UserDefinedStructEditorData.generated.h already included, missing '#pragma once' in UserDefinedStructEditorData.h"
#endif
#define UNREALED_UserDefinedStructEditorData_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStructVariableDescription_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FStructVariableDescription>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_117_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UUserDefinedStructEditorData, UNREALED_API)


#define FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_117_INCLASS \
private: \
	static void StaticRegisterNativesUUserDefinedStructEditorData(); \
	friend struct Z_Construct_UClass_UUserDefinedStructEditorData_Statics; \
public: \
	DECLARE_CLASS(UUserDefinedStructEditorData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UUserDefinedStructEditorData) \
	FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_117_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_117_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UUserDefinedStructEditorData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedStructEditorData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UUserDefinedStructEditorData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedStructEditorData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUserDefinedStructEditorData(UUserDefinedStructEditorData&&); \
	UUserDefinedStructEditorData(const UUserDefinedStructEditorData&); \
public: \
	UNREALED_API virtual ~UUserDefinedStructEditorData();


#define FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_114_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_117_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_117_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h_117_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UUserDefinedStructEditorData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_UserDefinedStructure_UserDefinedStructEditorData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
