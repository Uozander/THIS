// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VisualLoggerCameraController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOGVISUALIZER_VisualLoggerCameraController_generated_h
#error "VisualLoggerCameraController.generated.h already included, missing '#pragma once' in VisualLoggerCameraController.h"
#endif
#define LOGVISUALIZER_VisualLoggerCameraController_generated_h

#define FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerCameraController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAVisualLoggerCameraController(); \
	friend struct Z_Construct_UClass_AVisualLoggerCameraController_Statics; \
public: \
	DECLARE_CLASS(AVisualLoggerCameraController, ADebugCameraController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LogVisualizer"), NO_API) \
	DECLARE_SERIALIZER(AVisualLoggerCameraController) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerCameraController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVisualLoggerCameraController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVisualLoggerCameraController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVisualLoggerCameraController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVisualLoggerCameraController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVisualLoggerCameraController(AVisualLoggerCameraController&&); \
	AVisualLoggerCameraController(const AVisualLoggerCameraController&); \
public: \
	NO_API virtual ~AVisualLoggerCameraController();


#define FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerCameraController_h_11_PROLOG
#define FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerCameraController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerCameraController_h_18_INCLASS \
	FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerCameraController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOGVISUALIZER_API UClass* StaticClass<class AVisualLoggerCameraController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerCameraController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
