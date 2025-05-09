// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/ImportSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFactory;
class UObject;
#ifdef UNREALED_ImportSubsystem_generated_h
#error "ImportSubsystem.generated.h already included, missing '#pragma once' in ImportSubsystem.h"
#endif
#define UNREALED_ImportSubsystem_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_79_DELEGATE \
static UNREALED_API void FOnAssetPreImport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetPreImport_Dyn, UFactory* InFactory, UClass* InClass, UObject* InParent, FName const& Name, const FString& Type);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_81_DELEGATE \
static UNREALED_API void FOnAssetPostImport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetPostImport_Dyn, UFactory* InFactory, UObject* InCreatedObject);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_83_DELEGATE \
static UNREALED_API void FOnAssetReimport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetReimport_Dyn, UObject* InCreatedObject);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_85_DELEGATE \
static UNREALED_API void FOnAssetPostLODImport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetPostLODImport_Dyn, UObject* InObject, int32 InLODIndex);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImportSubsystem(); \
	friend struct Z_Construct_UClass_UImportSubsystem_Statics; \
public: \
	DECLARE_CLASS(UImportSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UImportSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UImportSubsystem(UImportSubsystem&&); \
	UImportSubsystem(const UImportSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UImportSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UImportSubsystem) \
	UNREALED_API virtual ~UImportSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_32_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UImportSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
