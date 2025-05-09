// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/WorldPartitionBuilderCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_WorldPartitionBuilderCommandlet_generated_h
#error "WorldPartitionBuilderCommandlet.generated.h already included, missing '#pragma once' in WorldPartitionBuilderCommandlet.h"
#endif
#define UNREALED_WorldPartitionBuilderCommandlet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionBuilderCommandlet(); \
	friend struct Z_Construct_UClass_UWorldPartitionBuilderCommandlet_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionBuilderCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UWorldPartitionBuilderCommandlet) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPartitionBuilderCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionBuilderCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionBuilderCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionBuilderCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionBuilderCommandlet(UWorldPartitionBuilderCommandlet&&); \
	UWorldPartitionBuilderCommandlet(const UWorldPartitionBuilderCommandlet&); \
public: \
	NO_API virtual ~UWorldPartitionBuilderCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_12_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_15_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UWorldPartitionBuilderCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
