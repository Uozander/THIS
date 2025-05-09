// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODLayerFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WORLDPARTITIONEDITOR_HLODLayerFactory_generated_h
#error "HLODLayerFactory.generated.h already included, missing '#pragma once' in HLODLayerFactory.h"
#endif
#define WORLDPARTITIONEDITOR_HLODLayerFactory_generated_h

#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUHLODLayerFactory(); \
	friend struct Z_Construct_UClass_UHLODLayerFactory_Statics; \
public: \
	DECLARE_CLASS(UHLODLayerFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorldPartitionEditor"), NO_API) \
	DECLARE_SERIALIZER(UHLODLayerFactory)


#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHLODLayerFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHLODLayerFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHLODLayerFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHLODLayerFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHLODLayerFactory(UHLODLayerFactory&&); \
	UHLODLayerFactory(const UHLODLayerFactory&); \
public: \
	NO_API virtual ~UHLODLayerFactory();


#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h_15_PROLOG
#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h_18_INCLASS \
	FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDPARTITIONEDITOR_API UClass* StaticClass<class UHLODLayerFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
