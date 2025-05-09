// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintComponentNodeSpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_BlueprintComponentNodeSpawner_generated_h
#error "BlueprintComponentNodeSpawner.generated.h already included, missing '#pragma once' in BlueprintComponentNodeSpawner.h"
#endif
#define BLUEPRINTGRAPH_BlueprintComponentNodeSpawner_generated_h

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintComponentNodeSpawner(); \
	friend struct Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics; \
public: \
	DECLARE_CLASS(UBlueprintComponentNodeSpawner, UBlueprintNodeSpawner, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintComponentNodeSpawner)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintComponentNodeSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintComponentNodeSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintComponentNodeSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintComponentNodeSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintComponentNodeSpawner(UBlueprintComponentNodeSpawner&&); \
	UBlueprintComponentNodeSpawner(const UBlueprintComponentNodeSpawner&); \
public: \
	NO_API virtual ~UBlueprintComponentNodeSpawner();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_30_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_33_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGRAPH_API UClass* StaticClass<class UBlueprintComponentNodeSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
