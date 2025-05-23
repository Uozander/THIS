// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLayer/DataLayerFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATALAYEREDITOR_DataLayerFactory_generated_h
#error "DataLayerFactory.generated.h already included, missing '#pragma once' in DataLayerFactory.h"
#endif
#define DATALAYEREDITOR_DataLayerFactory_generated_h

#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUDataLayerFactory(); \
	friend struct Z_Construct_UClass_UDataLayerFactory_Statics; \
public: \
	DECLARE_CLASS(UDataLayerFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLayerEditor"), DATALAYEREDITOR_API) \
	DECLARE_SERIALIZER(UDataLayerFactory)


#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALAYEREDITOR_API UDataLayerFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayerFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALAYEREDITOR_API, UDataLayerFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataLayerFactory(UDataLayerFactory&&); \
	UDataLayerFactory(const UDataLayerFactory&); \
public: \
	DATALAYEREDITOR_API virtual ~UDataLayerFactory();


#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h_18_PROLOG
#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h_21_INCLASS \
	FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATALAYEREDITOR_API UClass* StaticClass<class UDataLayerFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
