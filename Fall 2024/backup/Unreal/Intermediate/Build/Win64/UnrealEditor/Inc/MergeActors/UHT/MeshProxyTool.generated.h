// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshProxyTool/MeshProxyTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MERGEACTORS_MeshProxyTool_generated_h
#error "MeshProxyTool.generated.h already included, missing '#pragma once' in MeshProxyTool.h"
#endif
#define MERGEACTORS_MeshProxyTool_generated_h

#define FID_Engine_Source_Editor_MergeActors_Private_MeshProxyTool_MeshProxyTool_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshProxySettingsObject(); \
	friend struct Z_Construct_UClass_UMeshProxySettingsObject_Statics; \
public: \
	DECLARE_CLASS(UMeshProxySettingsObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MergeActors"), NO_API) \
	DECLARE_SERIALIZER(UMeshProxySettingsObject) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Editor_MergeActors_Private_MeshProxyTool_MeshProxyTool_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeshProxySettingsObject(UMeshProxySettingsObject&&); \
	UMeshProxySettingsObject(const UMeshProxySettingsObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshProxySettingsObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshProxySettingsObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeshProxySettingsObject) \
	NO_API virtual ~UMeshProxySettingsObject();


#define FID_Engine_Source_Editor_MergeActors_Private_MeshProxyTool_MeshProxyTool_h_14_PROLOG
#define FID_Engine_Source_Editor_MergeActors_Private_MeshProxyTool_MeshProxyTool_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MergeActors_Private_MeshProxyTool_MeshProxyTool_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MergeActors_Private_MeshProxyTool_MeshProxyTool_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MERGEACTORS_API UClass* StaticClass<class UMeshProxySettingsObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MergeActors_Private_MeshProxyTool_MeshProxyTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
