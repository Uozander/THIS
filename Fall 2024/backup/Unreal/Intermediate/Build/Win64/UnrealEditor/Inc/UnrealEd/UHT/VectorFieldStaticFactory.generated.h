// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/VectorFieldStaticFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_VectorFieldStaticFactory_generated_h
#error "VectorFieldStaticFactory.generated.h already included, missing '#pragma once' in VectorFieldStaticFactory.h"
#endif
#define UNREALED_VectorFieldStaticFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VectorFieldStaticFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUVectorFieldStaticFactory(); \
	friend struct Z_Construct_UClass_UVectorFieldStaticFactory_Statics; \
public: \
	DECLARE_CLASS(UVectorFieldStaticFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UVectorFieldStaticFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VectorFieldStaticFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVectorFieldStaticFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVectorFieldStaticFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVectorFieldStaticFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVectorFieldStaticFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVectorFieldStaticFactory(UVectorFieldStaticFactory&&); \
	UVectorFieldStaticFactory(const UVectorFieldStaticFactory&); \
public: \
	NO_API virtual ~UVectorFieldStaticFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VectorFieldStaticFactory_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VectorFieldStaticFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VectorFieldStaticFactory_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VectorFieldStaticFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UVectorFieldStaticFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VectorFieldStaticFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
