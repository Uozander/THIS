// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralFoliageSpawnerFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOLIAGEEDIT_ProceduralFoliageSpawnerFactory_generated_h
#error "ProceduralFoliageSpawnerFactory.generated.h already included, missing '#pragma once' in ProceduralFoliageSpawnerFactory.h"
#endif
#define FOLIAGEEDIT_ProceduralFoliageSpawnerFactory_generated_h

#define FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUProceduralFoliageSpawnerFactory(); \
	friend struct Z_Construct_UClass_UProceduralFoliageSpawnerFactory_Statics; \
public: \
	DECLARE_CLASS(UProceduralFoliageSpawnerFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FoliageEdit"), NO_API) \
	DECLARE_SERIALIZER(UProceduralFoliageSpawnerFactory)


#define FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProceduralFoliageSpawnerFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFoliageSpawnerFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralFoliageSpawnerFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFoliageSpawnerFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UProceduralFoliageSpawnerFactory(UProceduralFoliageSpawnerFactory&&); \
	UProceduralFoliageSpawnerFactory(const UProceduralFoliageSpawnerFactory&); \
public: \
	NO_API virtual ~UProceduralFoliageSpawnerFactory();


#define FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h_20_PROLOG
#define FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h_23_INCLASS \
	FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGEEDIT_API UClass* StaticClass<class UProceduralFoliageSpawnerFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_FoliageEdit_Private_ProceduralFoliageSpawnerFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
