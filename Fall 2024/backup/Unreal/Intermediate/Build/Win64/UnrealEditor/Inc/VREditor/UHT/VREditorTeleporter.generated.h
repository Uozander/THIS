// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Teleporter/VREditorTeleporter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UViewportInteractor;
class UVREditorInteractor;
class UVREditorMode;
struct FLinearColor;
#ifdef VREDITOR_VREditorTeleporter_generated_h
#error "VREditorTeleporter.generated.h already included, missing '#pragma once' in VREditorTeleporter.h"
#endif
#define VREDITOR_VREditorTeleporter_generated_h

#define FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetSlideDelta_Implementation(UVREditorInteractor* Interactor, bool Axis); \
	virtual void TeleportDone_Implementation(); \
	virtual void StartTeleport_Implementation(); \
	virtual void Shutdown_Implementation(); \
	virtual void Init_Implementation(UVREditorMode* InMode); \
	DECLARE_FUNCTION(execGetInteractorTryingTeleport); \
	DECLARE_FUNCTION(execDoTeleport); \
	DECLARE_FUNCTION(execStopAiming); \
	DECLARE_FUNCTION(execStartAiming); \
	DECLARE_FUNCTION(execGetSlideDelta); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execTeleportDone); \
	DECLARE_FUNCTION(execStartTeleport); \
	DECLARE_FUNCTION(execGetVRMode); \
	DECLARE_FUNCTION(execIsTeleporting); \
	DECLARE_FUNCTION(execIsAiming); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execInit);


#define FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_24_CALLBACK_WRAPPERS
#define FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVREditorTeleporter(); \
	friend struct Z_Construct_UClass_AVREditorTeleporter_Statics; \
public: \
	DECLARE_CLASS(AVREditorTeleporter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(AVREditorTeleporter)


#define FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVREditorTeleporter(AVREditorTeleporter&&); \
	AVREditorTeleporter(const AVREditorTeleporter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREditorTeleporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorTeleporter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVREditorTeleporter) \
	NO_API virtual ~AVREditorTeleporter();


#define FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_21_PROLOG
#define FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_24_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class AVREditorTeleporter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
