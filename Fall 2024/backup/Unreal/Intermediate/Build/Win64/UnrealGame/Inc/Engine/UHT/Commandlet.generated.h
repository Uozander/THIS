// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/Commandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Commandlet_generated_h
#error "Commandlet.generated.h already included, missing '#pragma once' in Commandlet.h"
#endif
#define ENGINE_Commandlet_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUCommandlet(); \
	friend struct Z_Construct_UClass_UCommandlet_Statics; \
public: \
	DECLARE_CLASS(UCommandlet, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCommandlet)


#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCommandlet(UCommandlet&&); \
	UCommandlet(const UCommandlet&); \
public: \
	ENGINE_API virtual ~UCommandlet();


#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_39_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_42_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
