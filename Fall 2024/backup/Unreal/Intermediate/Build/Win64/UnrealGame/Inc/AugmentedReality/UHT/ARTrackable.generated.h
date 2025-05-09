// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARTrackable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARCandidateImage;
class UARCandidateObject;
class UAREnvironmentCaptureProbeTexture;
class UARPlaneGeometry;
class UMRMeshComponent;
enum class EARAltitudeSource : uint8;
enum class EAREye : uint8;
enum class EARFaceBlendShape : uint8;
enum class EARFaceBlendShape : uint8; 
enum class EARObjectClassification : uint8;
enum class EARPlaneOrientation : uint8;
enum class EARSpatialMeshUsageFlags : uint8;
enum class EARTrackingState : uint8;
struct FARPose3D;
#ifdef AUGMENTEDREALITY_ARTrackable_generated_h
#error "ARTrackable.generated.h already included, missing '#pragma once' in ARTrackable.h"
#endif
#define AUGMENTEDREALITY_ARTrackable_generated_h

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasSpatialMeshUsageFlag); \
	DECLARE_FUNCTION(execGetObjectClassification); \
	DECLARE_FUNCTION(execGetUnderlyingMesh); \
	DECLARE_FUNCTION(execGetLastUpdateTimestamp); \
	DECLARE_FUNCTION(execGetLastUpdateFrameNumber); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetDebugName); \
	DECLARE_FUNCTION(execIsTracked); \
	DECLARE_FUNCTION(execGetTrackingState); \
	DECLARE_FUNCTION(execGetLocalToTrackingTransform); \
	DECLARE_FUNCTION(execGetLocalToWorldTransform);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedGeometry(); \
	friend struct Z_Construct_UClass_UARTrackedGeometry_Statics; \
public: \
	DECLARE_CLASS(UARTrackedGeometry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedGeometry)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UARTrackedGeometry(UARTrackedGeometry&&); \
	UARTrackedGeometry(const UARTrackedGeometry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedGeometry) \
	NO_API virtual ~UARTrackedGeometry();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_13_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTrackedGeometry>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOrientation); \
	DECLARE_FUNCTION(execGetSubsumedBy); \
	DECLARE_FUNCTION(execGetBoundaryPolygonInLocalSpace); \
	DECLARE_FUNCTION(execGetExtent); \
	DECLARE_FUNCTION(execGetCenter);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPlaneGeometry(); \
	friend struct Z_Construct_UClass_UARPlaneGeometry_Statics; \
public: \
	DECLARE_CLASS(UARPlaneGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPlaneGeometry)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPlaneGeometry(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UARPlaneGeometry(UARPlaneGeometry&&); \
	UARPlaneGeometry(const UARPlaneGeometry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPlaneGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPlaneGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARPlaneGeometry) \
	NO_API virtual ~UARPlaneGeometry();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_129_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_132_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARPlaneGeometry>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedPoint(); \
	friend struct Z_Construct_UClass_UARTrackedPoint_Statics; \
public: \
	DECLARE_CLASS(UARTrackedPoint, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedPoint)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedPoint(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UARTrackedPoint(UARTrackedPoint&&); \
	UARTrackedPoint(const UARTrackedPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedPoint) \
	NO_API virtual ~UARTrackedPoint();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_179_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTrackedPoint>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEstimateSize); \
	DECLARE_FUNCTION(execGetDetectedImage);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedImage(); \
	friend struct Z_Construct_UClass_UARTrackedImage_Statics; \
public: \
	DECLARE_CLASS(UARTrackedImage, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedImage)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedImage(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UARTrackedImage(UARTrackedImage&&); \
	UARTrackedImage(const UARTrackedImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedImage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedImage) \
	NO_API virtual ~UARTrackedImage();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_192_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_195_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTrackedImage>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedQRCode(); \
	friend struct Z_Construct_UClass_UARTrackedQRCode_Statics; \
public: \
	DECLARE_CLASS(UARTrackedQRCode, UARTrackedImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedQRCode)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedQRCode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UARTrackedQRCode(UARTrackedQRCode&&); \
	UARTrackedQRCode(const UARTrackedQRCode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedQRCode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedQRCode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedQRCode) \
	NO_API virtual ~UARTrackedQRCode();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_230_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_234_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTrackedQRCode>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWorldSpaceEyeTransform); \
	DECLARE_FUNCTION(execGetLocalSpaceEyeTransform); \
	DECLARE_FUNCTION(execGetBlendShapes); \
	DECLARE_FUNCTION(execGetBlendShapeValue);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARFaceGeometry(); \
	friend struct Z_Construct_UClass_UARFaceGeometry_Statics; \
public: \
	DECLARE_CLASS(UARFaceGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARFaceGeometry)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARFaceGeometry(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UARFaceGeometry(UARFaceGeometry&&); \
	UARFaceGeometry(const UARFaceGeometry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARFaceGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARFaceGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARFaceGeometry) \
	NO_API virtual ~UARFaceGeometry();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_344_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_347_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARFaceGeometry>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEnvironmentCaptureTexture); \
	DECLARE_FUNCTION(execGetExtent);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAREnvironmentCaptureProbe(); \
	friend struct Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics; \
public: \
	DECLARE_CLASS(UAREnvironmentCaptureProbe, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UAREnvironmentCaptureProbe)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAREnvironmentCaptureProbe(UAREnvironmentCaptureProbe&&); \
	UAREnvironmentCaptureProbe(const UAREnvironmentCaptureProbe&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAREnvironmentCaptureProbe); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAREnvironmentCaptureProbe); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAREnvironmentCaptureProbe) \
	NO_API virtual ~UAREnvironmentCaptureProbe();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_408_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UAREnvironmentCaptureProbe>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDetectedObject);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedObject(); \
	friend struct Z_Construct_UClass_UARTrackedObject_Statics; \
public: \
	DECLARE_CLASS(UARTrackedObject, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedObject)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedObject(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UARTrackedObject(UARTrackedObject&&); \
	UARTrackedObject(const UARTrackedObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedObject) \
	NO_API virtual ~UARTrackedObject();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_437_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_440_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTrackedObject>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTrackedPoseData);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedPose(); \
	friend struct Z_Construct_UClass_UARTrackedPose_Statics; \
public: \
	DECLARE_CLASS(UARTrackedPose, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedPose)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedPose(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UARTrackedPose(UARTrackedPose&&); \
	UARTrackedPose(const UARTrackedPose&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedPose); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedPose); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedPose) \
	NO_API virtual ~UARTrackedPose();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_459_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_462_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTrackedPose>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetObjectClassificationAtLocation);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARMeshGeometry(); \
	friend struct Z_Construct_UClass_UARMeshGeometry_Statics; \
public: \
	DECLARE_CLASS(UARMeshGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARMeshGeometry)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARMeshGeometry(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UARMeshGeometry(UARMeshGeometry&&); \
	UARMeshGeometry(const UARMeshGeometry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARMeshGeometry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARMeshGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARMeshGeometry) \
	NO_API virtual ~UARMeshGeometry();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_480_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_483_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARMeshGeometry>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAltitudeSource); \
	DECLARE_FUNCTION(execGetAltitudeMeters); \
	DECLARE_FUNCTION(execGetLatitude); \
	DECLARE_FUNCTION(execGetLongitude);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARGeoAnchor(); \
	friend struct Z_Construct_UClass_UARGeoAnchor_Statics; \
public: \
	DECLARE_CLASS(UARGeoAnchor, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARGeoAnchor)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARGeoAnchor(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UARGeoAnchor(UARGeoAnchor&&); \
	UARGeoAnchor(const UARGeoAnchor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARGeoAnchor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGeoAnchor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARGeoAnchor) \
	NO_API virtual ~UARGeoAnchor();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_502_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_505_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARGeoAnchor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h


#define FOREACH_ENUM_EARFACETRACKINGDIRECTION(op) \
	op(EARFaceTrackingDirection::FaceRelative) \
	op(EARFaceTrackingDirection::FaceMirrored) 

enum class EARFaceTrackingDirection : uint8;
template<> struct TIsUEnumClass<EARFaceTrackingDirection> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceTrackingDirection>();

#define FOREACH_ENUM_EARFACEBLENDSHAPE(op) \
	op(EARFaceBlendShape::EyeBlinkLeft) \
	op(EARFaceBlendShape::EyeLookDownLeft) \
	op(EARFaceBlendShape::EyeLookInLeft) \
	op(EARFaceBlendShape::EyeLookOutLeft) \
	op(EARFaceBlendShape::EyeLookUpLeft) \
	op(EARFaceBlendShape::EyeSquintLeft) \
	op(EARFaceBlendShape::EyeWideLeft) \
	op(EARFaceBlendShape::EyeBlinkRight) \
	op(EARFaceBlendShape::EyeLookDownRight) \
	op(EARFaceBlendShape::EyeLookInRight) \
	op(EARFaceBlendShape::EyeLookOutRight) \
	op(EARFaceBlendShape::EyeLookUpRight) \
	op(EARFaceBlendShape::EyeSquintRight) \
	op(EARFaceBlendShape::EyeWideRight) \
	op(EARFaceBlendShape::JawForward) \
	op(EARFaceBlendShape::JawLeft) \
	op(EARFaceBlendShape::JawRight) \
	op(EARFaceBlendShape::JawOpen) \
	op(EARFaceBlendShape::MouthClose) \
	op(EARFaceBlendShape::MouthFunnel) \
	op(EARFaceBlendShape::MouthPucker) \
	op(EARFaceBlendShape::MouthLeft) \
	op(EARFaceBlendShape::MouthRight) \
	op(EARFaceBlendShape::MouthSmileLeft) \
	op(EARFaceBlendShape::MouthSmileRight) \
	op(EARFaceBlendShape::MouthFrownLeft) \
	op(EARFaceBlendShape::MouthFrownRight) \
	op(EARFaceBlendShape::MouthDimpleLeft) \
	op(EARFaceBlendShape::MouthDimpleRight) \
	op(EARFaceBlendShape::MouthStretchLeft) \
	op(EARFaceBlendShape::MouthStretchRight) \
	op(EARFaceBlendShape::MouthRollLower) \
	op(EARFaceBlendShape::MouthRollUpper) \
	op(EARFaceBlendShape::MouthShrugLower) \
	op(EARFaceBlendShape::MouthShrugUpper) \
	op(EARFaceBlendShape::MouthPressLeft) \
	op(EARFaceBlendShape::MouthPressRight) \
	op(EARFaceBlendShape::MouthLowerDownLeft) \
	op(EARFaceBlendShape::MouthLowerDownRight) \
	op(EARFaceBlendShape::MouthUpperUpLeft) \
	op(EARFaceBlendShape::MouthUpperUpRight) \
	op(EARFaceBlendShape::BrowDownLeft) \
	op(EARFaceBlendShape::BrowDownRight) \
	op(EARFaceBlendShape::BrowInnerUp) \
	op(EARFaceBlendShape::BrowOuterUpLeft) \
	op(EARFaceBlendShape::BrowOuterUpRight) \
	op(EARFaceBlendShape::CheekPuff) \
	op(EARFaceBlendShape::CheekSquintLeft) \
	op(EARFaceBlendShape::CheekSquintRight) \
	op(EARFaceBlendShape::NoseSneerLeft) \
	op(EARFaceBlendShape::NoseSneerRight) \
	op(EARFaceBlendShape::TongueOut) \
	op(EARFaceBlendShape::HeadYaw) \
	op(EARFaceBlendShape::HeadPitch) \
	op(EARFaceBlendShape::HeadRoll) \
	op(EARFaceBlendShape::LeftEyeYaw) \
	op(EARFaceBlendShape::LeftEyePitch) \
	op(EARFaceBlendShape::LeftEyeRoll) \
	op(EARFaceBlendShape::RightEyeYaw) \
	op(EARFaceBlendShape::RightEyePitch) \
	op(EARFaceBlendShape::RightEyeRoll) 

enum class EARFaceBlendShape : uint8;
template<> struct TIsUEnumClass<EARFaceBlendShape> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceBlendShape>();

#define FOREACH_ENUM_EAREYE(op) \
	op(EAREye::LeftEye) \
	op(EAREye::RightEye) 

enum class EAREye : uint8;
template<> struct TIsUEnumClass<EAREye> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EAREye>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
