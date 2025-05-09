// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/CSVImportFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_CSVImportFactory_generated_h
#error "CSVImportFactory.generated.h already included, missing '#pragma once' in CSVImportFactory.h"
#endif
#define UNREALED_CSVImportFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCSVImportSettings_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FCSVImportSettings>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUCSVImportFactory(); \
	friend struct Z_Construct_UClass_UCSVImportFactory_Statics; \
public: \
	DECLARE_CLASS(UCSVImportFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UCSVImportFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UCSVImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSVImportFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UCSVImportFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSVImportFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCSVImportFactory(UCSVImportFactory&&); \
	UCSVImportFactory(const UCSVImportFactory&); \
public: \
	UNREALED_API virtual ~UCSVImportFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_59_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_62_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UCSVImportFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h


#define FOREACH_ENUM_ECSVIMPORTTYPE(op) \
	op(ECSVImportType::ECSV_DataTable) \
	op(ECSVImportType::ECSV_CurveTable) \
	op(ECSVImportType::ECSV_CurveFloat) \
	op(ECSVImportType::ECSV_CurveVector) \
	op(ECSVImportType::ECSV_CurveLinearColor) 

enum class ECSVImportType : uint8;
template<> struct TIsUEnumClass<ECSVImportType> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<ECSVImportType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
