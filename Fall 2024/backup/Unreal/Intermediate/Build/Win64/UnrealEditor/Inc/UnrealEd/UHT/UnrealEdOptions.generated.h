// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Preferences/UnrealEdOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_UnrealEdOptions_generated_h
#error "UnrealEdOptions.generated.h already included, missing '#pragma once' in UnrealEdOptions.h"
#endif
#define UNREALED_UnrealEdOptions_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorCommandCategory_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FEditorCommandCategory>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorCommand_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FEditorCommand>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClassPickerDefaults_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FClassPickerDefaults>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnrealEdOptions(); \
	friend struct Z_Construct_UClass_UUnrealEdOptions_Statics; \
public: \
	DECLARE_CLASS(UUnrealEdOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UUnrealEdOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UUnrealEdOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUnrealEdOptions(UUnrealEdOptions&&); \
	UUnrealEdOptions(const UUnrealEdOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UUnrealEdOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealEdOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealEdOptions) \
	UNREALED_API virtual ~UUnrealEdOptions();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_84_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UUnrealEdOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
