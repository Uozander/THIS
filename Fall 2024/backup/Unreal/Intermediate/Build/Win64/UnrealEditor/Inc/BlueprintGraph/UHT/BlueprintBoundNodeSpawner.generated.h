// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintBoundNodeSpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_BlueprintBoundNodeSpawner_generated_h
#error "BlueprintBoundNodeSpawner.generated.h already included, missing '#pragma once' in BlueprintBoundNodeSpawner.h"
#endif
#define BLUEPRINTGRAPH_BlueprintBoundNodeSpawner_generated_h

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundNodeSpawner_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintBoundNodeSpawner(); \
	friend struct Z_Construct_UClass_UBlueprintBoundNodeSpawner_Statics; \
public: \
	DECLARE_CLASS(UBlueprintBoundNodeSpawner, UBlueprintNodeSpawner, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintBoundNodeSpawner)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundNodeSpawner_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintBoundNodeSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintBoundNodeSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintBoundNodeSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintBoundNodeSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintBoundNodeSpawner(UBlueprintBoundNodeSpawner&&); \
	UBlueprintBoundNodeSpawner(const UBlueprintBoundNodeSpawner&); \
public: \
	NO_API virtual ~UBlueprintBoundNodeSpawner();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundNodeSpawner_h_28_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundNodeSpawner_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundNodeSpawner_h_31_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundNodeSpawner_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGRAPH_API UClass* StaticClass<class UBlueprintBoundNodeSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundNodeSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
