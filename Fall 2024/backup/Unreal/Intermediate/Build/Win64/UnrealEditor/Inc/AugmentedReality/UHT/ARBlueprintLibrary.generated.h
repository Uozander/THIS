// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class UARPin;
class UARCandidateImage;
class UARLightEstimate;
class UARPin;
class UARSessionConfig;
class UARTexture;
class UARTrackedGeometry;
class UARTrackedPoint;
class UObject;
class USceneComponent;
class UTexture2D;
enum class EARCaptureType : uint8;
enum class EARLineTraceChannels : uint8;
enum class EARObjectClassification : uint8;
enum class EARSceneReconstruction : uint8;
enum class EARSessionTrackingFeature : uint8;
enum class EARSessionType : uint8;
enum class EARTextureType : uint8;
enum class EARTrackingQuality : uint8;
enum class EARTrackingQualityReason : uint8;
enum class EARWorldMappingState : uint8;
struct FARCameraIntrinsics;
struct FARPose2D;
struct FARSessionStatus;
struct FARTraceResult;
struct FARVideoFormat;
struct FLinearColor;
#ifdef AUGMENTEDREALITY_ARBlueprintLibrary_generated_h
#error "ARBlueprintLibrary.generated.h already included, missing '#pragma once' in ARBlueprintLibrary.h"
#endif
#define AUGMENTEDREALITY_ARBlueprintLibrary_generated_h

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCameraIntrinsics); \
	DECLARE_FUNCTION(execGetNumberOfTrackedFacesSupported); \
	DECLARE_FUNCTION(execCalculateAlignmentTransform); \
	DECLARE_FUNCTION(execCalculateClosestIntersection); \
	DECLARE_FUNCTION(execFindTrackedPointsByName); \
	DECLARE_FUNCTION(execAddTrackedPointWithName); \
	DECLARE_FUNCTION(execGetAlignmentTransform); \
	DECLARE_FUNCTION(execGetARWorldScale); \
	DECLARE_FUNCTION(execSetARWorldScale); \
	DECLARE_FUNCTION(execSetARWorldOriginLocationAndRotation); \
	DECLARE_FUNCTION(execGetObjectClassificationAtLocation); \
	DECLARE_FUNCTION(execGetAllTracked2DPoses); \
	DECLARE_FUNCTION(execIsSceneReconstructionSupported); \
	DECLARE_FUNCTION(execIsSessionTrackingFeatureSupported); \
	DECLARE_FUNCTION(execAddRuntimeCandidateImage); \
	DECLARE_FUNCTION(execGetSupportedVideoFormats); \
	DECLARE_FUNCTION(execGetPointCloud); \
	DECLARE_FUNCTION(execGetWorldMappingStatus); \
	DECLARE_FUNCTION(execAddManualEnvironmentCaptureProbe); \
	DECLARE_FUNCTION(execRemoveAllARPinsFromLocalStore); \
	DECLARE_FUNCTION(execRemoveARPinFromLocalStore); \
	DECLARE_FUNCTION(execSaveARPinToLocalStore); \
	DECLARE_FUNCTION(execLoadARPinsFromLocalStore); \
	DECLARE_FUNCTION(execIsARPinLocalStoreReady); \
	DECLARE_FUNCTION(execIsARPinLocalStoreSupported); \
	DECLARE_FUNCTION(execGetAllPins); \
	DECLARE_FUNCTION(execRemovePin); \
	DECLARE_FUNCTION(execUnpinComponent); \
	DECLARE_FUNCTION(execPinComponentToARPin); \
	DECLARE_FUNCTION(execPinComponentToTraceResult); \
	DECLARE_FUNCTION(execPinComponent); \
	DECLARE_FUNCTION(execGetCurrentLightEstimate); \
	DECLARE_FUNCTION(execDebugDrawPin); \
	DECLARE_FUNCTION(execDebugDrawTrackedGeometry); \
	DECLARE_FUNCTION(execIsSessionTypeSupported); \
	DECLARE_FUNCTION(execGetARTexture); \
	DECLARE_FUNCTION(execGetAllGeometriesByClass); \
	DECLARE_FUNCTION(execGetAllGeometries); \
	DECLARE_FUNCTION(execGetTrackingQualityReason); \
	DECLARE_FUNCTION(execGetTrackingQuality); \
	DECLARE_FUNCTION(execLineTraceTrackedObjects3D); \
	DECLARE_FUNCTION(execLineTraceTrackedObjects); \
	DECLARE_FUNCTION(execSetAlignmentTransform); \
	DECLARE_FUNCTION(execResizeXRCamera); \
	DECLARE_FUNCTION(execSetEnabledXRCamera); \
	DECLARE_FUNCTION(execToggleARCapture); \
	DECLARE_FUNCTION(execGetSessionConfig); \
	DECLARE_FUNCTION(execGetARSessionStatus); \
	DECLARE_FUNCTION(execStopARSession); \
	DECLARE_FUNCTION(execPauseARSession); \
	DECLARE_FUNCTION(execStartARSession); \
	DECLARE_FUNCTION(execIsARSupported);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UARBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UARBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARBlueprintLibrary)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UARBlueprintLibrary(UARBlueprintLibrary&&); \
	UARBlueprintLibrary(const UARBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARBlueprintLibrary) \
	NO_API virtual ~UARBlueprintLibrary();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_49_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARBlueprintLibrary>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_434_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTraceChannel); \
	DECLARE_FUNCTION(execGetTrackedGeometry); \
	DECLARE_FUNCTION(execGetLocalTransform); \
	DECLARE_FUNCTION(execGetLocalToWorldTransform); \
	DECLARE_FUNCTION(execGetLocalToTrackingTransform); \
	DECLARE_FUNCTION(execGetDistanceFromCamera);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_434_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTraceResultLibrary(); \
	friend struct Z_Construct_UClass_UARTraceResultLibrary_Statics; \
public: \
	DECLARE_CLASS(UARTraceResultLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTraceResultLibrary)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_434_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTraceResultLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UARTraceResultLibrary(UARTraceResultLibrary&&); \
	UARTraceResultLibrary(const UARTraceResultLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTraceResultLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTraceResultLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTraceResultLibrary) \
	NO_API virtual ~UARTraceResultLibrary();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_431_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_434_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_434_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_434_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_434_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTraceResultLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
