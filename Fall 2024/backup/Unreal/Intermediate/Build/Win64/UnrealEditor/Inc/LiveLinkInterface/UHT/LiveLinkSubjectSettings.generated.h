// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkSubjectSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKINTERFACE_LiveLinkSubjectSettings_generated_h
#error "LiveLinkSubjectSettings.generated.h already included, missing '#pragma once' in LiveLinkSubjectSettings.h"
#endif
#define LIVELINKINTERFACE_LiveLinkSubjectSettings_generated_h

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkSubjectSettings(); \
	friend struct Z_Construct_UClass_ULiveLinkSubjectSettings_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkSubjectSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), LIVELINKINTERFACE_API) \
	DECLARE_SERIALIZER(ULiveLinkSubjectSettings)


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKINTERFACE_API ULiveLinkSubjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkSubjectSettings(ULiveLinkSubjectSettings&&); \
	ULiveLinkSubjectSettings(const ULiveLinkSubjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKINTERFACE_API, ULiveLinkSubjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkSubjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkSubjectSettings) \
	LIVELINKINTERFACE_API virtual ~ULiveLinkSubjectSettings();


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_24_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_28_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKINTERFACE_API UClass* StaticClass<class ULiveLinkSubjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
