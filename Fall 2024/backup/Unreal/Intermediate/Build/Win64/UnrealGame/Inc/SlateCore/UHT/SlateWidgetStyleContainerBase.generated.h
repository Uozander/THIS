// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Styling/SlateWidgetStyleContainerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_SlateWidgetStyleContainerBase_generated_h
#error "SlateWidgetStyleContainerBase.generated.h already included, missing '#pragma once' in SlateWidgetStyleContainerBase.h"
#endif
#define SLATECORE_SlateWidgetStyleContainerBase_generated_h

#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlateWidgetStyleContainerBase(); \
	friend struct Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics; \
public: \
	DECLARE_CLASS(USlateWidgetStyleContainerBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SlateCore"), SLATECORE_API) \
	DECLARE_SERIALIZER(USlateWidgetStyleContainerBase) \
	virtual UObject* _getUObject() const override { return const_cast<USlateWidgetStyleContainerBase*>(this); }


#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATECORE_API USlateWidgetStyleContainerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USlateWidgetStyleContainerBase(USlateWidgetStyleContainerBase&&); \
	USlateWidgetStyleContainerBase(const USlateWidgetStyleContainerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATECORE_API, USlateWidgetStyleContainerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateWidgetStyleContainerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateWidgetStyleContainerBase) \
	SLATECORE_API virtual ~USlateWidgetStyleContainerBase();


#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerBase_h_19_PROLOG
#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLATECORE_API UClass* StaticClass<class USlateWidgetStyleContainerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
