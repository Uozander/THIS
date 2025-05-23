// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/BlueprintMacroFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_BlueprintMacroFactory_generated_h
#error "BlueprintMacroFactory.generated.h already included, missing '#pragma once' in BlueprintMacroFactory.h"
#endif
#define UNREALED_BlueprintMacroFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintMacroFactory(); \
	friend struct Z_Construct_UClass_UBlueprintMacroFactory_Statics; \
public: \
	DECLARE_CLASS(UBlueprintMacroFactory, UBlueprintFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UBlueprintMacroFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UBlueprintMacroFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintMacroFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UBlueprintMacroFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintMacroFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintMacroFactory(UBlueprintMacroFactory&&); \
	UBlueprintMacroFactory(const UBlueprintMacroFactory&); \
public: \
	UNREALED_API virtual ~UBlueprintMacroFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UBlueprintMacroFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintMacroFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
