// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstanceActorFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEVELINSTANCEEDITOR_LevelInstanceActorFactory_generated_h
#error "LevelInstanceActorFactory.generated.h already included, missing '#pragma once' in LevelInstanceActorFactory.h"
#endif
#define LEVELINSTANCEEDITOR_LevelInstanceActorFactory_generated_h

#define FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceActorFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesULevelInstanceActorFactory(); \
	friend struct Z_Construct_UClass_ULevelInstanceActorFactory_Statics; \
public: \
	DECLARE_CLASS(ULevelInstanceActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelInstanceEditor"), LEVELINSTANCEEDITOR_API) \
	DECLARE_SERIALIZER(ULevelInstanceActorFactory)


#define FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceActorFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEVELINSTANCEEDITOR_API ULevelInstanceActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelInstanceActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELINSTANCEEDITOR_API, ULevelInstanceActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelInstanceActorFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelInstanceActorFactory(ULevelInstanceActorFactory&&); \
	ULevelInstanceActorFactory(const ULevelInstanceActorFactory&); \
public: \
	LEVELINSTANCEEDITOR_API virtual ~ULevelInstanceActorFactory();


#define FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceActorFactory_h_10_PROLOG
#define FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceActorFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceActorFactory_h_13_INCLASS \
	FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceActorFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELINSTANCEEDITOR_API UClass* StaticClass<class ULevelInstanceActorFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceActorFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
