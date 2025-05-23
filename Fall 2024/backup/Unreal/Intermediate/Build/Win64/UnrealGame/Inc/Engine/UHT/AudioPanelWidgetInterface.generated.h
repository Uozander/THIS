// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/AudioPanelWidgetInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AudioPanelWidgetInterface_generated_h
#error "AudioPanelWidgetInterface.generated.h already included, missing '#pragma once' in AudioPanelWidgetInterface.h"
#endif
#define ENGINE_AudioPanelWidgetInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_16_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAudioPanelWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioPanelWidgetInterface(UAudioPanelWidgetInterface&&); \
	UAudioPanelWidgetInterface(const UAudioPanelWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAudioPanelWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioPanelWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioPanelWidgetInterface) \
	ENGINE_API virtual ~UAudioPanelWidgetInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAudioPanelWidgetInterface(); \
	friend struct Z_Construct_UClass_UAudioPanelWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(UAudioPanelWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAudioPanelWidgetInterface)


#define FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAudioPanelWidgetInterface() {} \
public: \
	typedef UAudioPanelWidgetInterface UClassType; \
	typedef IAudioPanelWidgetInterface ThisClass; \
	ENGINE_API static FText Execute_GetEditorName(UObject* O); \
	ENGINE_API static FName Execute_GetIconBrushName(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_16_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAudioPanelWidgetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
