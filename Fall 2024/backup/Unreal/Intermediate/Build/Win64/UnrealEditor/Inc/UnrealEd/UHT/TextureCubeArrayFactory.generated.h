// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/TextureCubeArrayFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_TextureCubeArrayFactory_generated_h
#error "TextureCubeArrayFactory.generated.h already included, missing '#pragma once' in TextureCubeArrayFactory.h"
#endif
#define UNREALED_TextureCubeArrayFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeArrayFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTextureCubeArrayFactory(); \
	friend struct Z_Construct_UClass_UTextureCubeArrayFactory_Statics; \
public: \
	DECLARE_CLASS(UTextureCubeArrayFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UTextureCubeArrayFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeArrayFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UTextureCubeArrayFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureCubeArrayFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UTextureCubeArrayFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureCubeArrayFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTextureCubeArrayFactory(UTextureCubeArrayFactory&&); \
	UTextureCubeArrayFactory(const UTextureCubeArrayFactory&); \
public: \
	UNREALED_API virtual ~UTextureCubeArrayFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeArrayFactory_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeArrayFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeArrayFactory_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeArrayFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UTextureCubeArrayFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeArrayFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
