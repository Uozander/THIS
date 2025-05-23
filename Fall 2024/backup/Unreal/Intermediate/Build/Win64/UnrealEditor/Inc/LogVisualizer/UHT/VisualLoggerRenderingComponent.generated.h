// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VisualLoggerRenderingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOGVISUALIZER_VisualLoggerRenderingComponent_generated_h
#error "VisualLoggerRenderingComponent.generated.h already included, missing '#pragma once' in VisualLoggerRenderingComponent.h"
#endif
#define LOGVISUALIZER_VisualLoggerRenderingComponent_generated_h

#define FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUVisualLoggerRenderingComponent(); \
	friend struct Z_Construct_UClass_UVisualLoggerRenderingComponent_Statics; \
public: \
	DECLARE_CLASS(UVisualLoggerRenderingComponent, UDebugDrawComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LogVisualizer"), NO_API) \
	DECLARE_SERIALIZER(UVisualLoggerRenderingComponent)


#define FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVisualLoggerRenderingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisualLoggerRenderingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVisualLoggerRenderingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisualLoggerRenderingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVisualLoggerRenderingComponent(UVisualLoggerRenderingComponent&&); \
	UVisualLoggerRenderingComponent(const UVisualLoggerRenderingComponent&); \
public: \
	NO_API virtual ~UVisualLoggerRenderingComponent();


#define FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingComponent_h_11_PROLOG
#define FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingComponent_h_15_INCLASS \
	FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOGVISUALIZER_API UClass* StaticClass<class UVisualLoggerRenderingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
