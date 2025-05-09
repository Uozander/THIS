// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PIEPreviewSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PIEPREVIEWDEVICEPROFILESELECTOR_PIEPreviewSettings_generated_h
#error "PIEPreviewSettings.generated.h already included, missing '#pragma once' in PIEPreviewSettings.h"
#endif
#define PIEPREVIEWDEVICEPROFILESELECTOR_PIEPreviewSettings_generated_h

#define FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewSettings_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPIEPreviewSettings(); \
	friend struct Z_Construct_UClass_UPIEPreviewSettings_Statics; \
public: \
	DECLARE_CLASS(UPIEPreviewSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PIEPreviewDeviceProfileSelector"), NO_API) \
	DECLARE_SERIALIZER(UPIEPreviewSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("PIEPreviewSettings");} \



#define FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewSettings_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPIEPreviewSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPIEPreviewSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPIEPreviewSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPIEPreviewSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPIEPreviewSettings(UPIEPreviewSettings&&); \
	UPIEPreviewSettings(const UPIEPreviewSettings&); \
public: \
	NO_API virtual ~UPIEPreviewSettings();


#define FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewSettings_h_16_PROLOG
#define FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewSettings_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewSettings_h_19_INCLASS \
	FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewSettings_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PIEPREVIEWDEVICEPROFILESELECTOR_API UClass* StaticClass<class UPIEPreviewSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
