// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HierarchicalLOD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_HierarchicalLOD_generated_h
#error "HierarchicalLOD.generated.h already included, missing '#pragma once' in HierarchicalLOD.h"
#endif
#define UNREALED_HierarchicalLOD_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUHierarchicalLODSettings(); \
	friend struct Z_Construct_UClass_UHierarchicalLODSettings_Statics; \
public: \
	DECLARE_CLASS(UHierarchicalLODSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UHierarchicalLODSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UHierarchicalLODSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHierarchicalLODSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UHierarchicalLODSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHierarchicalLODSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHierarchicalLODSettings(UHierarchicalLODSettings&&); \
	UHierarchicalLODSettings(const UHierarchicalLODSettings&); \
public: \
	UNREALED_API virtual ~UHierarchicalLODSettings();


#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_27_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UHierarchicalLODSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
