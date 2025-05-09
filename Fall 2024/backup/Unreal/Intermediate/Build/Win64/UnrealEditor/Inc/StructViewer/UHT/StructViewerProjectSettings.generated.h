// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StructViewerProjectSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STRUCTVIEWER_StructViewerProjectSettings_generated_h
#error "StructViewerProjectSettings.generated.h already included, missing '#pragma once' in StructViewerProjectSettings.h"
#endif
#define STRUCTVIEWER_StructViewerProjectSettings_generated_h

#define FID_Engine_Source_Editor_StructViewer_Public_StructViewerProjectSettings_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUStructViewerProjectSettings(); \
	friend struct Z_Construct_UClass_UStructViewerProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UStructViewerProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/StructViewer"), NO_API) \
	DECLARE_SERIALIZER(UStructViewerProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Editor_StructViewer_Public_StructViewerProjectSettings_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStructViewerProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStructViewerProjectSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStructViewerProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStructViewerProjectSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStructViewerProjectSettings(UStructViewerProjectSettings&&); \
	UStructViewerProjectSettings(const UStructViewerProjectSettings&); \
public: \
	NO_API virtual ~UStructViewerProjectSettings();


#define FID_Engine_Source_Editor_StructViewer_Public_StructViewerProjectSettings_h_22_PROLOG
#define FID_Engine_Source_Editor_StructViewer_Public_StructViewerProjectSettings_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StructViewer_Public_StructViewerProjectSettings_h_25_INCLASS \
	FID_Engine_Source_Editor_StructViewer_Public_StructViewerProjectSettings_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STRUCTVIEWER_API UClass* StaticClass<class UStructViewerProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StructViewer_Public_StructViewerProjectSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
