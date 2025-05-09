// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncCaptureScene.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASceneCapture2D;
class UAsyncCaptureScene;
class UCameraComponent;
class UTextureRenderTarget2D;
#ifdef BLUTILITY_AsyncCaptureScene_generated_h
#error "AsyncCaptureScene.generated.h already included, missing '#pragma once' in AsyncCaptureScene.h"
#endif
#define BLUTILITY_AsyncCaptureScene_generated_h

#define FID_Engine_Source_Editor_Blutility_Public_AsyncCaptureScene_h_26_DELEGATE \
BLUTILITY_API void FOnAsyncCaptureSceneComplete_DelegateWrapper(const FMulticastScriptDelegate& OnAsyncCaptureSceneComplete, UTextureRenderTarget2D* Texture);


#define FID_Engine_Source_Editor_Blutility_Public_AsyncCaptureScene_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCaptureSceneWithWarmupAsync); \
	DECLARE_FUNCTION(execCaptureSceneAsync);


#define FID_Engine_Source_Editor_Blutility_Public_AsyncCaptureScene_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncCaptureScene(); \
	friend struct Z_Construct_UClass_UAsyncCaptureScene_Statics; \
public: \
	DECLARE_CLASS(UAsyncCaptureScene, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), BLUTILITY_API) \
	DECLARE_SERIALIZER(UAsyncCaptureScene)


#define FID_Engine_Source_Editor_Blutility_Public_AsyncCaptureScene_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncCaptureScene(UAsyncCaptureScene&&); \
	UAsyncCaptureScene(const UAsyncCaptureScene&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UAsyncCaptureScene); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncCaptureScene); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncCaptureScene) \
	BLUTILITY_API virtual ~UAsyncCaptureScene();


#define FID_Engine_Source_Editor_Blutility_Public_AsyncCaptureScene_h_28_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_AsyncCaptureScene_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_AsyncCaptureScene_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_AsyncCaptureScene_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_AsyncCaptureScene_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UAsyncCaptureScene>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Public_AsyncCaptureScene_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
