// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Preferences/PersonaOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_PersonaOptions_generated_h
#error "PersonaOptions.generated.h already included, missing '#pragma once' in PersonaOptions.h"
#endif
#define UNREALED_PersonaOptions_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FViewportConfigOptions_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FViewportConfigOptions>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetEditorOptions_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FAssetEditorOptions>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_110_INCLASS \
private: \
	static void StaticRegisterNativesUPersonaOptions(); \
	friend struct Z_Construct_UClass_UPersonaOptions_Statics; \
public: \
	DECLARE_CLASS(UPersonaOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UPersonaOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_110_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UPersonaOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersonaOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UPersonaOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersonaOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPersonaOptions(UPersonaOptions&&); \
	UPersonaOptions(const UPersonaOptions&); \
public: \
	UNREALED_API virtual ~UPersonaOptions();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_107_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_110_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_110_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UPersonaOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h


#define FOREACH_ENUM_EANIMATIONVIEWPORTCAMERAFOLLOWMODE(op) \
	op(EAnimationViewportCameraFollowMode::None) \
	op(EAnimationViewportCameraFollowMode::Bounds) \
	op(EAnimationViewportCameraFollowMode::Bone) \
	op(EAnimationViewportCameraFollowMode::Root) 

enum class EAnimationViewportCameraFollowMode : uint8;
template<> struct TIsUEnumClass<EAnimationViewportCameraFollowMode> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EAnimationViewportCameraFollowMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
