// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRScoutingInteractor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UInputComponent;
enum class EGizmoHandleTypes : uint8;
#ifdef VREDITOR_VRScoutingInteractor_generated_h
#error "VRScoutingInteractor.generated.h already included, missing '#pragma once' in VRScoutingInteractor.h"
#endif
#define VREDITOR_VRScoutingInteractor_generated_h

#define FID_Engine_Source_Editor_VREditor_Public_VRScoutingInteractor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetReceivesEditorInput); \
	DECLARE_FUNCTION(execSetReceivesEditorInput); \
	DECLARE_FUNCTION(execGetInputComponent); \
	DECLARE_FUNCTION(execGetSelectedActors); \
	DECLARE_FUNCTION(execGetGizmoMode); \
	DECLARE_FUNCTION(execSetGizmoMode);


#define FID_Engine_Source_Editor_VREditor_Public_VRScoutingInteractor_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRScoutingInteractor(); \
	friend struct Z_Construct_UClass_UVRScoutingInteractor_Statics; \
public: \
	DECLARE_CLASS(UVRScoutingInteractor, UVREditorInteractor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVRScoutingInteractor)


#define FID_Engine_Source_Editor_VREditor_Public_VRScoutingInteractor_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVRScoutingInteractor(UVRScoutingInteractor&&); \
	UVRScoutingInteractor(const UVRScoutingInteractor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRScoutingInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRScoutingInteractor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UVRScoutingInteractor) \
	NO_API virtual ~UVRScoutingInteractor();


#define FID_Engine_Source_Editor_VREditor_Public_VRScoutingInteractor_h_20_PROLOG
#define FID_Engine_Source_Editor_VREditor_Public_VRScoutingInteractor_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Public_VRScoutingInteractor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_VRScoutingInteractor_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_VRScoutingInteractor_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class UVRScoutingInteractor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Public_VRScoutingInteractor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
