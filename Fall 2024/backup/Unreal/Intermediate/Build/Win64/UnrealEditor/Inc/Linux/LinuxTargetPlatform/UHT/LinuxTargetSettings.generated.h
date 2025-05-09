// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LinuxTargetSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LINUXTARGETPLATFORM_LinuxTargetSettings_generated_h
#error "LinuxTargetSettings.generated.h already included, missing '#pragma once' in LinuxTargetSettings.h"
#endif
#define LINUXTARGETPLATFORM_LinuxTargetSettings_generated_h

#define FID_Engine_Source_Developer_Linux_LinuxTargetPlatform_Classes_LinuxTargetSettings_h_24_INCLASS \
private: \
	static void StaticRegisterNativesULinuxTargetSettings(); \
	friend struct Z_Construct_UClass_ULinuxTargetSettings_Statics; \
public: \
	DECLARE_CLASS(ULinuxTargetSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LinuxTargetPlatform"), NO_API) \
	DECLARE_SERIALIZER(ULinuxTargetSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Developer_Linux_LinuxTargetPlatform_Classes_LinuxTargetSettings_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULinuxTargetSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinuxTargetSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULinuxTargetSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinuxTargetSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULinuxTargetSettings(ULinuxTargetSettings&&); \
	ULinuxTargetSettings(const ULinuxTargetSettings&); \
public: \
	NO_API virtual ~ULinuxTargetSettings();


#define FID_Engine_Source_Developer_Linux_LinuxTargetPlatform_Classes_LinuxTargetSettings_h_18_PROLOG
#define FID_Engine_Source_Developer_Linux_LinuxTargetPlatform_Classes_LinuxTargetSettings_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_Linux_LinuxTargetPlatform_Classes_LinuxTargetSettings_h_24_INCLASS \
	FID_Engine_Source_Developer_Linux_LinuxTargetPlatform_Classes_LinuxTargetSettings_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LINUXTARGETPLATFORM_API UClass* StaticClass<class ULinuxTargetSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_Linux_LinuxTargetPlatform_Classes_LinuxTargetSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
