// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SplineMetadataDetailsFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DETAILCUSTOMIZATIONS_SplineMetadataDetailsFactory_generated_h
#error "SplineMetadataDetailsFactory.generated.h already included, missing '#pragma once' in SplineMetadataDetailsFactory.h"
#endif
#define DETAILCUSTOMIZATIONS_SplineMetadataDetailsFactory_generated_h

#define FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUSplineMetadataDetailsFactoryBase(); \
	friend struct Z_Construct_UClass_USplineMetadataDetailsFactoryBase_Statics; \
public: \
	DECLARE_CLASS(USplineMetadataDetailsFactoryBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DetailCustomizations"), NO_API) \
	DECLARE_SERIALIZER(USplineMetadataDetailsFactoryBase)


#define FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineMetadataDetailsFactoryBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineMetadataDetailsFactoryBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineMetadataDetailsFactoryBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineMetadataDetailsFactoryBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USplineMetadataDetailsFactoryBase(USplineMetadataDetailsFactoryBase&&); \
	USplineMetadataDetailsFactoryBase(const USplineMetadataDetailsFactoryBase&); \
public: \
	NO_API virtual ~USplineMetadataDetailsFactoryBase();


#define FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h_21_PROLOG
#define FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h_24_INCLASS \
	FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DETAILCUSTOMIZATIONS_API UClass* StaticClass<class USplineMetadataDetailsFactoryBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
