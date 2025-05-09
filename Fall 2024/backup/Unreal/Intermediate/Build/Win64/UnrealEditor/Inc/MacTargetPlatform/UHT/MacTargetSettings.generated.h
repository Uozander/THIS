// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MacTargetSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MACTARGETPLATFORM_MacTargetSettings_generated_h
#error "MacTargetSettings.generated.h already included, missing '#pragma once' in MacTargetSettings.h"
#endif
#define MACTARGETPLATFORM_MacTargetSettings_generated_h

#define FID_Engine_Source_Developer_Mac_MacTargetPlatform_Classes_MacTargetSettings_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUMacTargetSettings(); \
	friend struct Z_Construct_UClass_UMacTargetSettings_Statics; \
public: \
	DECLARE_CLASS(UMacTargetSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MacTargetPlatform"), NO_API) \
	DECLARE_SERIALIZER(UMacTargetSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Developer_Mac_MacTargetPlatform_Classes_MacTargetSettings_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMacTargetSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMacTargetSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMacTargetSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMacTargetSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMacTargetSettings(UMacTargetSettings&&); \
	UMacTargetSettings(const UMacTargetSettings&); \
public: \
	NO_API virtual ~UMacTargetSettings();


#define FID_Engine_Source_Developer_Mac_MacTargetPlatform_Classes_MacTargetSettings_h_49_PROLOG
#define FID_Engine_Source_Developer_Mac_MacTargetPlatform_Classes_MacTargetSettings_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_Mac_MacTargetPlatform_Classes_MacTargetSettings_h_55_INCLASS \
	FID_Engine_Source_Developer_Mac_MacTargetPlatform_Classes_MacTargetSettings_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MACTARGETPLATFORM_API UClass* StaticClass<class UMacTargetSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_Mac_MacTargetPlatform_Classes_MacTargetSettings_h


#define FOREACH_ENUM_EMACMETALSHADERSTANDARD(op) \
	op(EMacMetalShaderStandard::MacMetalSLStandard_Minimum) \
	op(EMacMetalShaderStandard::MacMetalSLStandard_2_2) \
	op(EMacMetalShaderStandard::MacMetalSLStandard_2_3) \
	op(EMacMetalShaderStandard::MacMetalSLStandard_2_4) \
	op(EMacMetalShaderStandard::MacMetalSLStandard_3_0) 

enum class EMacMetalShaderStandard : uint8;
template<> struct TIsUEnumClass<EMacMetalShaderStandard> { enum { Value = true }; };
template<> MACTARGETPLATFORM_API UEnum* StaticEnum<EMacMetalShaderStandard>();

#define FOREACH_ENUM_EMACTARGETARCHITECTURE(op) \
	op(EMacTargetArchitecture::MacTargetArchitectureIntel) \
	op(EMacTargetArchitecture::MacTargetArchitectureUniversal) \
	op(EMacTargetArchitecture::MacTargetArchitectureAppleSilicon) \
	op(EMacTargetArchitecture::MacTargetArchitectureHost) 

enum class EMacTargetArchitecture : uint8;
template<> struct TIsUEnumClass<EMacTargetArchitecture> { enum { Value = true }; };
template<> MACTARGETPLATFORM_API UEnum* StaticEnum<EMacTargetArchitecture>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
