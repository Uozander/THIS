// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/LevelEditorViewportSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_LevelEditorViewportSettings_generated_h
#error "LevelEditorViewportSettings.generated.h already included, missing '#pragma once' in LevelEditorViewportSettings.h"
#endif
#define UNREALED_LevelEditorViewportSettings_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FLevelEditorViewportInstanceSettings>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_219_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FLevelEditorViewportInstanceSettingsKeyValuePair>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_237_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FSnapToSurfaceSettings>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_261_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelEditorViewporEditorViews_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FLevelEditorViewporEditorViews>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_274_INCLASS \
private: \
	static void StaticRegisterNativesULevelEditorViewportSettings(); \
	friend struct Z_Construct_UClass_ULevelEditorViewportSettings_Statics; \
public: \
	DECLARE_CLASS(ULevelEditorViewportSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(ULevelEditorViewportSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_274_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API ULevelEditorViewportSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorViewportSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, ULevelEditorViewportSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorViewportSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelEditorViewportSettings(ULevelEditorViewportSettings&&); \
	ULevelEditorViewportSettings(const ULevelEditorViewportSettings&); \
public: \
	UNREALED_API virtual ~ULevelEditorViewportSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_270_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_274_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_274_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_274_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class ULevelEditorViewportSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h


#define FOREACH_ENUM_EROTATIONGRIDMODE(op) \
	op(GridMode_DivisionsOf360) \
	op(GridMode_Common) 

enum ERotationGridMode : int;
template<> UNREALED_API UEnum* StaticEnum<ERotationGridMode>();

#define FOREACH_ENUM_EWASDTYPE(op) \
	op(WASD_Always) \
	op(WASD_RMBOnly) \
	op(WASD_Never) 

enum EWASDType : int;
template<> UNREALED_API UEnum* StaticEnum<EWASDType>();

#define FOREACH_ENUM_ELANDSCAPEFOLIAGEEDITORCONTROLTYPE(op) \
	op(ELandscapeFoliageEditorControlType::IgnoreCtrl) \
	op(ELandscapeFoliageEditorControlType::RequireCtrl) \
	op(ELandscapeFoliageEditorControlType::RequireNoCtrl) 

enum class ELandscapeFoliageEditorControlType : uint8;
template<> struct TIsUEnumClass<ELandscapeFoliageEditorControlType> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<ELandscapeFoliageEditorControlType>();

#define FOREACH_ENUM_EMEASURINGTOOLUNITS(op) \
	op(MeasureUnits_Centimeters) \
	op(MeasureUnits_Meters) \
	op(MeasureUnits_Kilometers) 

enum EMeasuringToolUnits : int;
template<> UNREALED_API UEnum* StaticEnum<EMeasuringToolUnits>();

#define FOREACH_ENUM_ESCROLLGESTUREDIRECTION(op) \
	op(EScrollGestureDirection::UseSystemSetting) \
	op(EScrollGestureDirection::Standard) \
	op(EScrollGestureDirection::Natural) 

enum class EScrollGestureDirection : uint8;
template<> struct TIsUEnumClass<EScrollGestureDirection> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EScrollGestureDirection>();

#define FOREACH_ENUM_EMATERIALKIND(op) \
	op(EMaterialKind::Unknown) \
	op(EMaterialKind::Base) \
	op(EMaterialKind::Normal) \
	op(EMaterialKind::Specular) \
	op(EMaterialKind::Emissive) 

enum class EMaterialKind : uint8;
template<> struct TIsUEnumClass<EMaterialKind> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EMaterialKind>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
