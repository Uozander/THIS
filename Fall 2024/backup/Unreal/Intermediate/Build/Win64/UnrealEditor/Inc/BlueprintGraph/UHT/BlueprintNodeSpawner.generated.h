// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintNodeSpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_BlueprintNodeSpawner_generated_h
#error "BlueprintNodeSpawner.generated.h already included, missing '#pragma once' in BlueprintNodeSpawner.h"
#endif
#define BLUEPRINTGRAPH_BlueprintNodeSpawner_generated_h

#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h_116_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintNodeSpawner(); \
	friend struct Z_Construct_UClass_UBlueprintNodeSpawner_Statics; \
public: \
	DECLARE_CLASS(UBlueprintNodeSpawner, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintNodeSpawner)


#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintNodeSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintNodeSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintNodeSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintNodeSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintNodeSpawner(UBlueprintNodeSpawner&&); \
	UBlueprintNodeSpawner(const UBlueprintNodeSpawner&); \
public: \
	NO_API virtual ~UBlueprintNodeSpawner();


#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h_113_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h_116_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGRAPH_API UClass* StaticClass<class UBlueprintNodeSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
