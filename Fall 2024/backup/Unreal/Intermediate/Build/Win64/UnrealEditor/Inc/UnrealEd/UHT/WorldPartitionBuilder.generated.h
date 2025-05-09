// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionBuilder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_WorldPartitionBuilder_generated_h
#error "WorldPartitionBuilder.generated.h already included, missing '#pragma once' in WorldPartitionBuilder.h"
#endif
#define UNREALED_WorldPartitionBuilder_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuilder_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionBuilder(); \
	friend struct Z_Construct_UClass_UWorldPartitionBuilder_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionBuilder, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UWorldPartitionBuilder) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuilder_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UWorldPartitionBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UWorldPartitionBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionBuilder(UWorldPartitionBuilder&&); \
	UWorldPartitionBuilder(const UWorldPartitionBuilder&); \
public: \
	UNREALED_API virtual ~UWorldPartitionBuilder();


#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuilder_h_37_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuilder_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuilder_h_40_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuilder_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UWorldPartitionBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
