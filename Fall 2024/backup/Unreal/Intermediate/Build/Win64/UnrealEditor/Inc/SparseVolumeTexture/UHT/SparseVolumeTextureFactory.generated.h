// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SparseVolumeTextureFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPARSEVOLUMETEXTURE_SparseVolumeTextureFactory_generated_h
#error "SparseVolumeTextureFactory.generated.h already included, missing '#pragma once' in SparseVolumeTextureFactory.h"
#endif
#define SPARSEVOLUMETEXTURE_SparseVolumeTextureFactory_generated_h

#define FID_Engine_Source_Editor_SparseVolumeTexture_Public_SparseVolumeTextureFactory_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSparseVolumeTextureFactory(); \
	friend struct Z_Construct_UClass_USparseVolumeTextureFactory_Statics; \
public: \
	DECLARE_CLASS(USparseVolumeTextureFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SparseVolumeTexture"), SPARSEVOLUMETEXTURE_API) \
	DECLARE_SERIALIZER(USparseVolumeTextureFactory)


#define FID_Engine_Source_Editor_SparseVolumeTexture_Public_SparseVolumeTextureFactory_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SPARSEVOLUMETEXTURE_API USparseVolumeTextureFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USparseVolumeTextureFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SPARSEVOLUMETEXTURE_API, USparseVolumeTextureFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USparseVolumeTextureFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USparseVolumeTextureFactory(USparseVolumeTextureFactory&&); \
	USparseVolumeTextureFactory(const USparseVolumeTextureFactory&); \
public: \
	SPARSEVOLUMETEXTURE_API virtual ~USparseVolumeTextureFactory();


#define FID_Engine_Source_Editor_SparseVolumeTexture_Public_SparseVolumeTextureFactory_h_16_PROLOG
#define FID_Engine_Source_Editor_SparseVolumeTexture_Public_SparseVolumeTextureFactory_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SparseVolumeTexture_Public_SparseVolumeTextureFactory_h_19_INCLASS \
	FID_Engine_Source_Editor_SparseVolumeTexture_Public_SparseVolumeTextureFactory_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARSEVOLUMETEXTURE_API UClass* StaticClass<class USparseVolumeTextureFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SparseVolumeTexture_Public_SparseVolumeTextureFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
