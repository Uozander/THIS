// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoReimport/AutoReimportManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_AutoReimportManager_generated_h
#error "AutoReimportManager.generated.h already included, missing '#pragma once' in AutoReimportManager.h"
#endif
#define UNREALED_AutoReimportManager_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUAutoReimportManager(); \
	friend struct Z_Construct_UClass_UAutoReimportManager_Statics; \
public: \
	DECLARE_CLASS(UAutoReimportManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UAutoReimportManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAutoReimportManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoReimportManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAutoReimportManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoReimportManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAutoReimportManager(UAutoReimportManager&&); \
	UAutoReimportManager(const UAutoReimportManager&); \
public:


#define FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h_26_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h_29_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UAutoReimportManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
