// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GizmoEdModeInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_GizmoEdModeInterface_generated_h
#error "GizmoEdModeInterface.generated.h already included, missing '#pragma once' in GizmoEdModeInterface.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_GizmoEdModeInterface_generated_h

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORINTERACTIVETOOLSFRAMEWORK_API UGizmoEdModeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGizmoEdModeInterface(UGizmoEdModeInterface&&); \
	UGizmoEdModeInterface(const UGizmoEdModeInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UGizmoEdModeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoEdModeInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoEdModeInterface) \
	EDITORINTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoEdModeInterface();


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h_24_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoEdModeInterface(); \
	friend struct Z_Construct_UClass_UGizmoEdModeInterface_Statics; \
public: \
	DECLARE_CLASS(UGizmoEdModeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), EDITORINTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UGizmoEdModeInterface)


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h_24_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h_24_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h_24_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoEdModeInterface() {} \
public: \
	typedef UGizmoEdModeInterface UClassType; \
	typedef IGizmoEdModeInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h_21_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoEdModeInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_GizmoEdModeInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
