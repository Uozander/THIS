// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ReimportFbxSceneFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef UNREALED_ReimportFbxSceneFactory_generated_h
#error "ReimportFbxSceneFactory.generated.h already included, missing '#pragma once' in ReimportFbxSceneFactory.h"
#endif
#define UNREALED_ReimportFbxSceneFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_26_RPC_WRAPPERS \
	DECLARE_FUNCTION(execScriptReimportHelper);


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUReimportFbxSceneFactory(); \
	friend struct Z_Construct_UClass_UReimportFbxSceneFactory_Statics; \
public: \
	DECLARE_CLASS(UReimportFbxSceneFactory, UFbxSceneImportFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UReimportFbxSceneFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReimportFbxSceneFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReimportFbxSceneFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReimportFbxSceneFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReimportFbxSceneFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UReimportFbxSceneFactory(UReimportFbxSceneFactory&&); \
	UReimportFbxSceneFactory(const UReimportFbxSceneFactory&); \
public: \
	NO_API virtual ~UReimportFbxSceneFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_23_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_26_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UReimportFbxSceneFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
