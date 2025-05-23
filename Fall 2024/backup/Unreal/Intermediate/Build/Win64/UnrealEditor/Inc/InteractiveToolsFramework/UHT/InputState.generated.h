// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_InputState_generated_h
#error "InputState.generated.h already included, missing '#pragma once' in InputState.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InputState_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputRayHit_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<struct FInputRayHit>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeviceButtonState_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<struct FDeviceButtonState>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKeyboardInputDeviceState_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<struct FKeyboardInputDeviceState>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_208_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMouseInputDeviceState_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<struct FMouseInputDeviceState>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_260_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputDeviceState_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<struct FInputDeviceState>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_363_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputDeviceRay_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<struct FInputDeviceRay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h


#define FOREACH_ENUM_EINPUTDEVICES(op) \
	op(EInputDevices::None) \
	op(EInputDevices::Keyboard) \
	op(EInputDevices::Mouse) \
	op(EInputDevices::Gamepad) \
	op(EInputDevices::OculusTouch) \
	op(EInputDevices::HTCViveWands) \
	op(EInputDevices::AnySpatialDevice) \
	op(EInputDevices::TabletFingers) 

enum class EInputDevices;
template<> struct TIsUEnumClass<EInputDevices> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EInputDevices>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
