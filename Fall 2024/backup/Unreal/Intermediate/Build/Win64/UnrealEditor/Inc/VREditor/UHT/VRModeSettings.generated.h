// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRModeSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREDITOR_VRModeSettings_generated_h
#error "VRModeSettings.generated.h already included, missing '#pragma once' in VRModeSettings.h"
#endif
#define VREDITOR_VRModeSettings_generated_h

#define FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRModeSettings(); \
	friend struct Z_Construct_UClass_UVRModeSettings_Statics; \
public: \
	DECLARE_CLASS(UVRModeSettings, UVISettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVRModeSettings)


#define FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVRModeSettings(UVRModeSettings&&); \
	UVRModeSettings(const UVRModeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRModeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRModeSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVRModeSettings) \
	NO_API virtual ~UVRModeSettings();


#define FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_30_PROLOG
#define FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class UVRModeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h


#define FOREACH_ENUM_EINTERACTORHAND(op) \
	op(EInteractorHand::Right) \
	op(EInteractorHand::Left) 

enum class EInteractorHand : uint8;
template<> struct TIsUEnumClass<EInteractorHand> { enum { Value = true }; };
template<> VREDITOR_API UEnum* StaticEnum<EInteractorHand>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
