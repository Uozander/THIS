// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/PreviewMeshCollectionFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_PreviewMeshCollectionFactory_generated_h
#error "PreviewMeshCollectionFactory.generated.h already included, missing '#pragma once' in PreviewMeshCollectionFactory.h"
#endif
#define UNREALED_PreviewMeshCollectionFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PreviewMeshCollectionFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPreviewMeshCollectionFactory(); \
	friend struct Z_Construct_UClass_UPreviewMeshCollectionFactory_Statics; \
public: \
	DECLARE_CLASS(UPreviewMeshCollectionFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UPreviewMeshCollectionFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PreviewMeshCollectionFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UPreviewMeshCollectionFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPreviewMeshCollectionFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UPreviewMeshCollectionFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPreviewMeshCollectionFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPreviewMeshCollectionFactory(UPreviewMeshCollectionFactory&&); \
	UPreviewMeshCollectionFactory(const UPreviewMeshCollectionFactory&); \
public: \
	UNREALED_API virtual ~UPreviewMeshCollectionFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PreviewMeshCollectionFactory_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PreviewMeshCollectionFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PreviewMeshCollectionFactory_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PreviewMeshCollectionFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UPreviewMeshCollectionFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PreviewMeshCollectionFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
