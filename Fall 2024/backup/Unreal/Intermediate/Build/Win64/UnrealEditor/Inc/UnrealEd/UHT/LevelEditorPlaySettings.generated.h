// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/LevelEditorPlaySettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_LevelEditorPlaySettings_generated_h
#error "LevelEditorPlaySettings.generated.h already included, missing '#pragma once' in LevelEditorPlaySettings.h"
#endif
#define UNREALED_LevelEditorPlaySettings_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_158_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayScreenResolution_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FPlayScreenResolution>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_202_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonResolutionMenuContext(); \
	friend struct Z_Construct_UClass_UCommonResolutionMenuContext_Statics; \
public: \
	DECLARE_CLASS(UCommonResolutionMenuContext, UToolMenuContextBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UCommonResolutionMenuContext)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_202_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UCommonResolutionMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCommonResolutionMenuContext(UCommonResolutionMenuContext&&); \
	UCommonResolutionMenuContext(const UCommonResolutionMenuContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UCommonResolutionMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonResolutionMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonResolutionMenuContext) \
	UNREALED_API virtual ~UCommonResolutionMenuContext();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_198_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_202_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_202_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_202_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UCommonResolutionMenuContext>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_216_INCLASS \
private: \
	static void StaticRegisterNativesULevelEditorPlaySettings(); \
	friend struct Z_Construct_UClass_ULevelEditorPlaySettings_Statics; \
public: \
	DECLARE_CLASS(ULevelEditorPlaySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(ULevelEditorPlaySettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_216_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API ULevelEditorPlaySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorPlaySettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, ULevelEditorPlaySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorPlaySettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelEditorPlaySettings(ULevelEditorPlaySettings&&); \
	ULevelEditorPlaySettings(const ULevelEditorPlaySettings&); \
public: \
	UNREALED_API virtual ~ULevelEditorPlaySettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_212_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_216_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_216_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_216_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class ULevelEditorPlaySettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h


#define FOREACH_ENUM_ELABELANCHORMODE(op) \
	op(LabelAnchorMode_TopLeft) \
	op(LabelAnchorMode_TopCenter) \
	op(LabelAnchorMode_TopRight) \
	op(LabelAnchorMode_CenterLeft) \
	op(LabelAnchorMode_Centered) \
	op(LabelAnchorMode_CenterRight) \
	op(LabelAnchorMode_BottomLeft) \
	op(LabelAnchorMode_BottomCenter) \
	op(LabelAnchorMode_BottomRight) 

enum ELabelAnchorMode : int;
template<> UNREALED_API UEnum* StaticEnum<ELabelAnchorMode>();

#define FOREACH_ENUM_ELAUNCHMODETYPE(op) \
	op(LaunchMode_OnDevice) 

enum ELaunchModeType : int;
template<> UNREALED_API UEnum* StaticEnum<ELaunchModeType>();

#define FOREACH_ENUM_EPLAYMODELOCATIONS(op) \
	op(PlayLocation_CurrentCameraLocation) \
	op(PlayLocation_DefaultPlayerStart) 

enum EPlayModeLocations : int;
template<> UNREALED_API UEnum* StaticEnum<EPlayModeLocations>();

#define FOREACH_ENUM_EPLAYMODETYPE(op) \
	op(PlayMode_InViewPort) \
	op(PlayMode_InEditorFloating) \
	op(PlayMode_InMobilePreview) \
	op(PlayMode_InTargetedMobilePreview) \
	op(PlayMode_InVulkanPreview) \
	op(PlayMode_InNewProcess) \
	op(PlayMode_InVR) \
	op(PlayMode_Simulate) \
	op(PlayMode_QuickLaunch) \
	op(PlayMode_Count) 

enum EPlayModeType : int;
template<> UNREALED_API UEnum* StaticEnum<EPlayModeType>();

#define FOREACH_ENUM_EPLAYNETMODE(op) \
	op(PIE_Standalone) \
	op(PIE_ListenServer) \
	op(PIE_Client) 

enum EPlayNetMode : int;
template<> UNREALED_API UEnum* StaticEnum<EPlayNetMode>();

#define FOREACH_ENUM_EPLAYONBUILDMODE(op) \
	op(PlayOnBuild_Always) \
	op(PlayOnBuild_Never) \
	op(PlayOnBuild_Default) \
	op(PlayOnBuild_IfEditorBuiltLocally) 

enum EPlayOnBuildMode : int;
template<> UNREALED_API UEnum* StaticEnum<EPlayOnBuildMode>();

#define FOREACH_ENUM_EPLAYONLAUNCHCONFIGURATION(op) \
	op(LaunchConfig_Default) \
	op(LaunchConfig_Debug) \
	op(LaunchConfig_Development) \
	op(LaunchConfig_Test) \
	op(LaunchConfig_Shipping) 

enum EPlayOnLaunchConfiguration : int;
template<> UNREALED_API UEnum* StaticEnum<EPlayOnLaunchConfiguration>();

#define FOREACH_ENUM_EPLAYONPAKFILEMODE(op) \
	op(EPlayOnPakFileMode::NoPak) \
	op(EPlayOnPakFileMode::PakNoCompress) \
	op(EPlayOnPakFileMode::PakCompress) 

enum class EPlayOnPakFileMode : uint8;
template<> struct TIsUEnumClass<EPlayOnPakFileMode> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EPlayOnPakFileMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
