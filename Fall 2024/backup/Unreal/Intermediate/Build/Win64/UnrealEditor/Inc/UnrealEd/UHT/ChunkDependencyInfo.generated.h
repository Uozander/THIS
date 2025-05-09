// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/ChunkDependencyInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ChunkDependencyInfo_generated_h
#error "ChunkDependencyInfo.generated.h already included, missing '#pragma once' in ChunkDependencyInfo.h"
#endif
#define UNREALED_ChunkDependencyInfo_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ChunkDependencyInfo_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChunkDependency_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FChunkDependency>();

#define FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ChunkDependencyInfo_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUChunkDependencyInfo(); \
	friend struct Z_Construct_UClass_UChunkDependencyInfo_Statics; \
public: \
	DECLARE_CLASS(UChunkDependencyInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UChunkDependencyInfo) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ChunkDependencyInfo_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UChunkDependencyInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChunkDependencyInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UChunkDependencyInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChunkDependencyInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChunkDependencyInfo(UChunkDependencyInfo&&); \
	UChunkDependencyInfo(const UChunkDependencyInfo&); \
public: \
	UNREALED_API virtual ~UChunkDependencyInfo();


#define FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ChunkDependencyInfo_h_50_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ChunkDependencyInfo_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ChunkDependencyInfo_h_53_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ChunkDependencyInfo_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UChunkDependencyInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ChunkDependencyInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
