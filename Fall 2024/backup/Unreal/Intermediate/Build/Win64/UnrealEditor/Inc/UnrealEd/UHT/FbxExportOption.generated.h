// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/FbxExportOption.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FbxExportOption_generated_h
#error "FbxExportOption.generated.h already included, missing '#pragma once' in FbxExportOption.h"
#endif
#define UNREALED_FbxExportOption_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUFbxExportOption(); \
	friend struct Z_Construct_UClass_UFbxExportOption_Statics; \
public: \
	DECLARE_CLASS(UFbxExportOption, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UFbxExportOption) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxExportOption(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxExportOption) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxExportOption); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxExportOption); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFbxExportOption(UFbxExportOption&&); \
	UFbxExportOption(const UFbxExportOption&); \
public: \
	UNREALED_API virtual ~UFbxExportOption();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_39_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_42_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFbxExportOption>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_FbxExportOption_h


#define FOREACH_ENUM_EFBXEXPORTCOMPATIBILITY(op) \
	op(EFbxExportCompatibility::FBX_2011) \
	op(EFbxExportCompatibility::FBX_2012) \
	op(EFbxExportCompatibility::FBX_2013) \
	op(EFbxExportCompatibility::FBX_2014) \
	op(EFbxExportCompatibility::FBX_2016) \
	op(EFbxExportCompatibility::FBX_2018) \
	op(EFbxExportCompatibility::FBX_2019) \
	op(EFbxExportCompatibility::FBX_2020) 

enum class EFbxExportCompatibility : uint8;
template<> struct TIsUEnumClass<EFbxExportCompatibility> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EFbxExportCompatibility>();

#define FOREACH_ENUM_EMOVIESCENEBAKETYPE(op) \
	op(EMovieSceneBakeType::None) \
	op(EMovieSceneBakeType::BakeChannels) \
	op(EMovieSceneBakeType::BakeTransforms) \
	op(EMovieSceneBakeType::BakeAll) 

enum class EMovieSceneBakeType : uint8;
template<> struct TIsUEnumClass<EMovieSceneBakeType> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EMovieSceneBakeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
