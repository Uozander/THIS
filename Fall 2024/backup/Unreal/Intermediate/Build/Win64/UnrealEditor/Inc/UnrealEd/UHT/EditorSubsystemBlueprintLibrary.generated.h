// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/EditorSubsystemBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEditorSubsystem;
#ifdef UNREALED_EditorSubsystemBlueprintLibrary_generated_h
#error "EditorSubsystemBlueprintLibrary.generated.h already included, missing '#pragma once' in EditorSubsystemBlueprintLibrary.h"
#endif
#define UNREALED_EditorSubsystemBlueprintLibrary_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEditorSubsystem);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorSubsystemBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UEditorSubsystemBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorSubsystemBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEditorSubsystemBlueprintLibrary)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorSubsystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorSubsystemBlueprintLibrary(UEditorSubsystemBlueprintLibrary&&); \
	UEditorSubsystemBlueprintLibrary(const UEditorSubsystemBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorSubsystemBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorSubsystemBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorSubsystemBlueprintLibrary) \
	UNREALED_API virtual ~UEditorSubsystemBlueprintLibrary();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorSubsystemBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorSubsystemBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
