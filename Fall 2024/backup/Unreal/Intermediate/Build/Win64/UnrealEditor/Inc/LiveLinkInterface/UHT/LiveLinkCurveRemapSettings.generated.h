// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkCurveRemapSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKINTERFACE_LiveLinkCurveRemapSettings_generated_h
#error "LiveLinkCurveRemapSettings.generated.h already included, missing '#pragma once' in LiveLinkCurveRemapSettings.h"
#endif
#define LIVELINKINTERFACE_LiveLinkCurveRemapSettings_generated_h

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics; \
	LIVELINKINTERFACE_API static class UScriptStruct* StaticStruct();


template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<struct FLiveLinkCurveConversionSettings>();

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkCurveRemapSettings(); \
	friend struct Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkCurveRemapSettings, ULiveLinkSourceSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), LIVELINKINTERFACE_API) \
	DECLARE_SERIALIZER(ULiveLinkCurveRemapSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKINTERFACE_API ULiveLinkCurveRemapSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkCurveRemapSettings(ULiveLinkCurveRemapSettings&&); \
	ULiveLinkCurveRemapSettings(const ULiveLinkCurveRemapSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKINTERFACE_API, ULiveLinkCurveRemapSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkCurveRemapSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkCurveRemapSettings) \
	LIVELINKINTERFACE_API virtual ~ULiveLinkCurveRemapSettings();


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_27_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h_31_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKINTERFACE_API UClass* StaticClass<class ULiveLinkCurveRemapSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
