// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNEEditorModelDataFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NNEEDITOR_NNEEditorModelDataFactory_generated_h
#error "NNEEditorModelDataFactory.generated.h already included, missing '#pragma once' in NNEEditorModelDataFactory.h"
#endif
#define NNEEDITOR_NNEEditorModelDataFactory_generated_h

#define FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorModelDataFactory_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNNEModelDataFactory(); \
	friend struct Z_Construct_UClass_UNNEModelDataFactory_Statics; \
public: \
	DECLARE_CLASS(UNNEModelDataFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NNEEditor"), NO_API) \
	DECLARE_SERIALIZER(UNNEModelDataFactory)


#define FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorModelDataFactory_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNNEModelDataFactory(UNNEModelDataFactory&&); \
	UNNEModelDataFactory(const UNNEModelDataFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNNEModelDataFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNEModelDataFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNNEModelDataFactory) \
	NO_API virtual ~UNNEModelDataFactory();


#define FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorModelDataFactory_h_15_PROLOG
#define FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorModelDataFactory_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorModelDataFactory_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorModelDataFactory_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NNEEDITOR_API UClass* StaticClass<class UNNEModelDataFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorModelDataFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
