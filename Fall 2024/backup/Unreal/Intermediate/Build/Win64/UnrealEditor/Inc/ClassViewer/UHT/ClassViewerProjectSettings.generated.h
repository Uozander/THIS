// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClassViewerProjectSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLASSVIEWER_ClassViewerProjectSettings_generated_h
#error "ClassViewerProjectSettings.generated.h already included, missing '#pragma once' in ClassViewerProjectSettings.h"
#endif
#define CLASSVIEWER_ClassViewerProjectSettings_generated_h

#define FID_Engine_Source_Editor_ClassViewer_Public_ClassViewerProjectSettings_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUClassViewerProjectSettings(); \
	friend struct Z_Construct_UClass_UClassViewerProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UClassViewerProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClassViewer"), NO_API) \
	DECLARE_SERIALIZER(UClassViewerProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Editor_ClassViewer_Public_ClassViewerProjectSettings_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClassViewerProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClassViewerProjectSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClassViewerProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassViewerProjectSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UClassViewerProjectSettings(UClassViewerProjectSettings&&); \
	UClassViewerProjectSettings(const UClassViewerProjectSettings&); \
public: \
	NO_API virtual ~UClassViewerProjectSettings();


#define FID_Engine_Source_Editor_ClassViewer_Public_ClassViewerProjectSettings_h_23_PROLOG
#define FID_Engine_Source_Editor_ClassViewer_Public_ClassViewerProjectSettings_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ClassViewer_Public_ClassViewerProjectSettings_h_26_INCLASS \
	FID_Engine_Source_Editor_ClassViewer_Public_ClassViewerProjectSettings_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLASSVIEWER_API UClass* StaticClass<class UClassViewerProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ClassViewer_Public_ClassViewerProjectSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
