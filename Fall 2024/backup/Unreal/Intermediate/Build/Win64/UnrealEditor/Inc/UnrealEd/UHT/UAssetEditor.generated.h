// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/UAssetEditor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_UAssetEditor_generated_h
#error "UAssetEditor.generated.h already included, missing '#pragma once' in UAssetEditor.h"
#endif
#define UNREALED_UAssetEditor_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetEditor(); \
	friend struct Z_Construct_UClass_UAssetEditor_Statics; \
public: \
	DECLARE_CLASS(UAssetEditor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UAssetEditor)


#define FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetEditor(UAssetEditor&&); \
	UAssetEditor(const UAssetEditor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAssetEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetEditor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAssetEditor) \
	UNREALED_API virtual ~UAssetEditor();


#define FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h_21_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UAssetEditor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
