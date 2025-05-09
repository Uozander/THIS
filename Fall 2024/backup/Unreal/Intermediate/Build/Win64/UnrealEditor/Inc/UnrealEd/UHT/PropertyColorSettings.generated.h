// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertyColorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_PropertyColorSettings_generated_h
#error "PropertyColorSettings.generated.h already included, missing '#pragma once' in PropertyColorSettings.h"
#endif
#define UNREALED_PropertyColorSettings_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Private_PropertyColorSettings_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyColorCustomProperty_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FPropertyColorCustomProperty>();

#define FID_Engine_Source_Editor_UnrealEd_Private_PropertyColorSettings_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyColorSettings(); \
	friend struct Z_Construct_UClass_UPropertyColorSettings_Statics; \
public: \
	DECLARE_CLASS(UPropertyColorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UPropertyColorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Private_PropertyColorSettings_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPropertyColorSettings(UPropertyColorSettings&&); \
	UPropertyColorSettings(const UPropertyColorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyColorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyColorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyColorSettings) \
	NO_API virtual ~UPropertyColorSettings();


#define FID_Engine_Source_Editor_UnrealEd_Private_PropertyColorSettings_h_37_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Private_PropertyColorSettings_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Private_PropertyColorSettings_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Private_PropertyColorSettings_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UPropertyColorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Private_PropertyColorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
