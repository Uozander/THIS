// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/VolumeTextureFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_VolumeTextureFactory_generated_h
#error "VolumeTextureFactory.generated.h already included, missing '#pragma once' in VolumeTextureFactory.h"
#endif
#define UNREALED_VolumeTextureFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUVolumeTextureFactory(); \
	friend struct Z_Construct_UClass_UVolumeTextureFactory_Statics; \
public: \
	DECLARE_CLASS(UVolumeTextureFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UVolumeTextureFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UVolumeTextureFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumeTextureFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UVolumeTextureFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumeTextureFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVolumeTextureFactory(UVolumeTextureFactory&&); \
	UVolumeTextureFactory(const UVolumeTextureFactory&); \
public: \
	UNREALED_API virtual ~UVolumeTextureFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UVolumeTextureFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
