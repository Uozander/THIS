// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorBrowsingModeSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCENEOUTLINER_ActorBrowsingModeSettings_generated_h
#error "ActorBrowsingModeSettings.generated.h already included, missing '#pragma once' in ActorBrowsingModeSettings.h"
#endif
#define SCENEOUTLINER_ActorBrowsingModeSettings_generated_h

#define FID_Engine_Source_Editor_SceneOutliner_Private_ActorBrowsingModeSettings_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics; \
	SCENEOUTLINER_API static class UScriptStruct* StaticStruct();


template<> SCENEOUTLINER_API UScriptStruct* StaticStruct<struct FActorBrowsingModeConfig>();

#define FID_Engine_Source_Editor_SceneOutliner_Private_ActorBrowsingModeSettings_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorBrowserConfig(); \
	friend struct Z_Construct_UClass_UActorBrowserConfig_Statics; \
public: \
	DECLARE_CLASS(UActorBrowserConfig, UEditorConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneOutliner"), NO_API) \
	DECLARE_SERIALIZER(UActorBrowserConfig)


#define FID_Engine_Source_Editor_SceneOutliner_Private_ActorBrowsingModeSettings_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorBrowserConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorBrowserConfig(UActorBrowserConfig&&); \
	UActorBrowserConfig(const UActorBrowserConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorBrowserConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorBrowserConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorBrowserConfig) \
	NO_API virtual ~UActorBrowserConfig();


#define FID_Engine_Source_Editor_SceneOutliner_Private_ActorBrowsingModeSettings_h_77_PROLOG
#define FID_Engine_Source_Editor_SceneOutliner_Private_ActorBrowsingModeSettings_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SceneOutliner_Private_ActorBrowsingModeSettings_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SceneOutliner_Private_ActorBrowsingModeSettings_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCENEOUTLINER_API UClass* StaticClass<class UActorBrowserConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SceneOutliner_Private_ActorBrowsingModeSettings_h


#define FOREACH_ENUM_EACTORBROWSINGFOLDERDOUBLECLICKMETHOD(op) \
	op(EActorBrowsingFolderDoubleClickMethod::ToggleExpansion) \
	op(EActorBrowsingFolderDoubleClickMethod::ToggleCurrentFolder) 

enum class EActorBrowsingFolderDoubleClickMethod : uint8;
template<> struct TIsUEnumClass<EActorBrowsingFolderDoubleClickMethod> { enum { Value = true }; };
template<> SCENEOUTLINER_API UEnum* StaticEnum<EActorBrowsingFolderDoubleClickMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
