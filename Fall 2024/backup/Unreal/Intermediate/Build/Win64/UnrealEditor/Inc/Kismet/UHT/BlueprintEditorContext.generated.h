// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintEditorContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlueprint;
#ifdef KISMET_BlueprintEditorContext_generated_h
#error "BlueprintEditorContext.generated.h already included, missing '#pragma once' in BlueprintEditorContext.h"
#endif
#define KISMET_BlueprintEditorContext_generated_h

#define FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBlueprintObj);


#define FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintEditorToolMenuContext(); \
	friend struct Z_Construct_UClass_UBlueprintEditorToolMenuContext_Statics; \
public: \
	DECLARE_CLASS(UBlueprintEditorToolMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kismet"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintEditorToolMenuContext)


#define FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintEditorToolMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintEditorToolMenuContext(UBlueprintEditorToolMenuContext&&); \
	UBlueprintEditorToolMenuContext(const UBlueprintEditorToolMenuContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintEditorToolMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEditorToolMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEditorToolMenuContext) \
	NO_API virtual ~UBlueprintEditorToolMenuContext();


#define FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_12_PROLOG
#define FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KISMET_API UClass* StaticClass<class UBlueprintEditorToolMenuContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Kismet_Public_BlueprintEditorContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
