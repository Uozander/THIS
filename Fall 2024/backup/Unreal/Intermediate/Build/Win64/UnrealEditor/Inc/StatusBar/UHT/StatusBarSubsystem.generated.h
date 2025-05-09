// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatusBarSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATUSBAR_StatusBarSubsystem_generated_h
#error "StatusBarSubsystem.generated.h already included, missing '#pragma once' in StatusBarSubsystem.h"
#endif
#define STATUSBAR_StatusBarSubsystem_generated_h

#define FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatusBarSubsystem(); \
	friend struct Z_Construct_UClass_UStatusBarSubsystem_Statics; \
public: \
	DECLARE_CLASS(UStatusBarSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatusBar"), NO_API) \
	DECLARE_SERIALIZER(UStatusBarSubsystem)


#define FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatusBarSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStatusBarSubsystem(UStatusBarSubsystem&&); \
	UStatusBarSubsystem(const UStatusBarSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatusBarSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatusBarSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatusBarSubsystem) \
	NO_API virtual ~UStatusBarSubsystem();


#define FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h_56_PROLOG
#define FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATUSBAR_API UClass* StaticClass<class UStatusBarSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
