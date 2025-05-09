// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldFolders.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_WorldFolders_generated_h
#error "WorldFolders.generated.h already included, missing '#pragma once' in WorldFolders.h"
#endif
#define UNREALED_WorldFolders_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorFolderProps_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FActorFolderProps>();

#define FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorPlacementFolder_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FActorPlacementFolder>();

#define FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h_73_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWorldFolders, UNREALED_API)


#define FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldFolders(); \
	friend struct Z_Construct_UClass_UWorldFolders_Statics; \
public: \
	DECLARE_CLASS(UWorldFolders, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UWorldFolders) \
	FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h_73_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UWorldFolders(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldFolders(UWorldFolders&&); \
	UWorldFolders(const UWorldFolders&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UWorldFolders); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldFolders); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldFolders) \
	UNREALED_API virtual ~UWorldFolders();


#define FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h_69_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h_73_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UWorldFolders>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
