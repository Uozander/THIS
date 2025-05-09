// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/UnrealEdEngine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_UnrealEdEngine_generated_h
#error "UnrealEdEngine.generated.h already included, missing '#pragma once' in UnrealEdEngine.h"
#endif
#define UNREALED_UnrealEdEngine_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClassMoveInfo_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FClassMoveInfo>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_90_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UUnrealEdEngine, UNREALED_API)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnrealEdEngine(); \
	friend struct Z_Construct_UClass_UUnrealEdEngine_Statics; \
public: \
	DECLARE_CLASS(UUnrealEdEngine, UEditorEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UUnrealEdEngine) \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_90_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UUnrealEdEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUnrealEdEngine(UUnrealEdEngine&&); \
	UUnrealEdEngine(const UUnrealEdEngine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UUnrealEdEngine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealEdEngine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealEdEngine)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_86_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_90_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h_90_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UUnrealEdEngine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdEngine_h


#define FOREACH_ENUM_EPACKAGENOTIFYSTATE(op) \
	op(NS_Updating) \
	op(NS_BalloonPrompted) \
	op(NS_DialogPrompted) \
	op(NS_PendingPrompt) \
	op(NS_PendingWarning) 

enum EPackageNotifyState : int;
template<> UNREALED_API UEnum* StaticEnum<EPackageNotifyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
