// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/BlueprintInterfaceFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_BlueprintInterfaceFactory_generated_h
#error "BlueprintInterfaceFactory.generated.h already included, missing '#pragma once' in BlueprintInterfaceFactory.h"
#endif
#define UNREALED_BlueprintInterfaceFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintInterfaceFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintInterfaceFactory(); \
	friend struct Z_Construct_UClass_UBlueprintInterfaceFactory_Statics; \
public: \
	DECLARE_CLASS(UBlueprintInterfaceFactory, UBlueprintFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintInterfaceFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintInterfaceFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintInterfaceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintInterfaceFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintInterfaceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintInterfaceFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintInterfaceFactory(UBlueprintInterfaceFactory&&); \
	UBlueprintInterfaceFactory(const UBlueprintInterfaceFactory&); \
public: \
	NO_API virtual ~UBlueprintInterfaceFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintInterfaceFactory_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintInterfaceFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintInterfaceFactory_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintInterfaceFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UBlueprintInterfaceFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintInterfaceFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
