// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetEditingProjectSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMGEDITOR_WidgetEditingProjectSettings_generated_h
#error "WidgetEditingProjectSettings.generated.h already included, missing '#pragma once' in WidgetEditingProjectSettings.h"
#endif
#define UMGEDITOR_WidgetEditingProjectSettings_generated_h

#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDebugResolution_Statics; \
	UMGEDITOR_API static class UScriptStruct* StaticStruct();


template<> UMGEDITOR_API UScriptStruct* StaticStruct<struct FDebugResolution>();

#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics; \
	UMGEDITOR_API static class UScriptStruct* StaticStruct();


template<> UMGEDITOR_API UScriptStruct* StaticStruct<struct FWidgetCompilerOptions>();

#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics; \
	UMGEDITOR_API static class UScriptStruct* StaticStruct();


template<> UMGEDITOR_API UScriptStruct* StaticStruct<struct FDirectoryWidgetCompilerOptions>();

#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h_125_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetEditingProjectSettings(); \
	friend struct Z_Construct_UClass_UWidgetEditingProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UWidgetEditingProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMGEditor"), NO_API) \
	DECLARE_SERIALIZER(UWidgetEditingProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h_125_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWidgetEditingProjectSettings(UWidgetEditingProjectSettings&&); \
	UWidgetEditingProjectSettings(const UWidgetEditingProjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetEditingProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetEditingProjectSettings); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UWidgetEditingProjectSettings) \
	NO_API virtual ~UWidgetEditingProjectSettings();


#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h_122_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h_125_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h_125_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMGEDITOR_API UClass* StaticClass<class UWidgetEditingProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h


#define FOREACH_ENUM_EPROPERTYBINDINGPERMISSIONLEVEL(op) \
	op(EPropertyBindingPermissionLevel::Allow) \
	op(EPropertyBindingPermissionLevel::Prevent) \
	op(EPropertyBindingPermissionLevel::PreventAndWarn) \
	op(EPropertyBindingPermissionLevel::PreventAndError) 

enum class EPropertyBindingPermissionLevel : uint8;
template<> struct TIsUEnumClass<EPropertyBindingPermissionLevel> { enum { Value = true }; };
template<> UMGEDITOR_API UEnum* StaticEnum<EPropertyBindingPermissionLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
