// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ClassViewerSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ClassViewerSettings_generated_h
#error "ClassViewerSettings.generated.h already included, missing '#pragma once' in ClassViewerSettings.h"
#endif
#define UNREALED_ClassViewerSettings_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUClassViewerSettings(); \
	friend struct Z_Construct_UClass_UClassViewerSettings_Statics; \
public: \
	DECLARE_CLASS(UClassViewerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UClassViewerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UClassViewerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClassViewerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UClassViewerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassViewerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UClassViewerSettings(UClassViewerSettings&&); \
	UClassViewerSettings(const UClassViewerSettings&); \
public: \
	UNREALED_API virtual ~UClassViewerSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_30_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UClassViewerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h


#define FOREACH_ENUM_ECLASSVIEWERDEVELOPERTYPE(op) \
	op(EClassViewerDeveloperType::CVDT_None) \
	op(EClassViewerDeveloperType::CVDT_CurrentUser) \
	op(EClassViewerDeveloperType::CVDT_All) \
	op(EClassViewerDeveloperType::CVDT_Max) 

enum class EClassViewerDeveloperType : uint8;
template<> struct TIsUEnumClass<EClassViewerDeveloperType> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EClassViewerDeveloperType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
