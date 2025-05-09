// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/VREditorDockableWindow.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREDITOR_VREditorDockableWindow_generated_h
#error "VREditorDockableWindow.generated.h already included, missing '#pragma once' in VREditorDockableWindow.h"
#endif
#define VREDITOR_VREditorDockableWindow_generated_h

#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVREditorDockableWindow(); \
	friend struct Z_Construct_UClass_AVREditorDockableWindow_Statics; \
public: \
	DECLARE_CLASS(AVREditorDockableWindow, AVREditorFloatingUI, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(AVREditorDockableWindow) \
	virtual UObject* _getUObject() const override { return const_cast<AVREditorDockableWindow*>(this); }


#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVREditorDockableWindow(AVREditorDockableWindow&&); \
	AVREditorDockableWindow(const AVREditorDockableWindow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREditorDockableWindow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorDockableWindow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVREditorDockableWindow) \
	NO_API virtual ~AVREditorDockableWindow();


#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_18_PROLOG
#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class AVREditorDockableWindow>();

#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDockableWindowDragOperation(); \
	friend struct Z_Construct_UClass_UDockableWindowDragOperation_Statics; \
public: \
	DECLARE_CLASS(UDockableWindowDragOperation, UViewportDragOperation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UDockableWindowDragOperation)


#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_150_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDockableWindowDragOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDockableWindowDragOperation(UDockableWindowDragOperation&&); \
	UDockableWindowDragOperation(const UDockableWindowDragOperation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDockableWindowDragOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDockableWindowDragOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDockableWindowDragOperation) \
	NO_API virtual ~UDockableWindowDragOperation();


#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_147_PROLOG
#define FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_150_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class UDockableWindowDragOperation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Private_UI_VREditorDockableWindow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
