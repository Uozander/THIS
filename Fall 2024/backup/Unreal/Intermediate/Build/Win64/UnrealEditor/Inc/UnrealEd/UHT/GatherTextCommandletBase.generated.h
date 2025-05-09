// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/GatherTextCommandletBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_GatherTextCommandletBase_generated_h
#error "GatherTextCommandletBase.generated.h already included, missing '#pragma once' in GatherTextCommandletBase.h"
#endif
#define UNREALED_GatherTextCommandletBase_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUGatherTextCommandletBase(); \
	friend struct Z_Construct_UClass_UGatherTextCommandletBase_Statics; \
public: \
	DECLARE_CLASS(UGatherTextCommandletBase, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UGatherTextCommandletBase)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UGatherTextCommandletBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGatherTextCommandletBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UGatherTextCommandletBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGatherTextCommandletBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGatherTextCommandletBase(UGatherTextCommandletBase&&); \
	UGatherTextCommandletBase(const UGatherTextCommandletBase&); \
public: \
	UNREALED_API virtual ~UGatherTextCommandletBase();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h_61_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h_64_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UGatherTextCommandletBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandletBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
