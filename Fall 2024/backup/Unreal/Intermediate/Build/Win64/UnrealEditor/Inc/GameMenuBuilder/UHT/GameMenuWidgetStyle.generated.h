// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMenuWidgetStyle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEMENUBUILDER_GameMenuWidgetStyle_generated_h
#error "GameMenuWidgetStyle.generated.h already included, missing '#pragma once' in GameMenuWidgetStyle.h"
#endif
#define GAMEMENUBUILDER_GameMenuWidgetStyle_generated_h

#define FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameMenuStyle_Statics; \
	GAMEMENUBUILDER_API static class UScriptStruct* StaticStruct(); \
	typedef FSlateWidgetStyle Super;


template<> GAMEMENUBUILDER_API UScriptStruct* StaticStruct<struct FGameMenuStyle>();

#define FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_INCLASS \
private: \
	static void StaticRegisterNativesUGameMenuWidgetStyle(); \
	friend struct Z_Construct_UClass_UGameMenuWidgetStyle_Statics; \
public: \
	DECLARE_CLASS(UGameMenuWidgetStyle, USlateWidgetStyleContainerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameMenuBuilder"), GAMEMENUBUILDER_API) \
	DECLARE_SERIALIZER(UGameMenuWidgetStyle)


#define FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEMENUBUILDER_API UGameMenuWidgetStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameMenuWidgetStyle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEMENUBUILDER_API, UGameMenuWidgetStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameMenuWidgetStyle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameMenuWidgetStyle(UGameMenuWidgetStyle&&); \
	UGameMenuWidgetStyle(const UGameMenuWidgetStyle&); \
public: \
	GAMEMENUBUILDER_API virtual ~UGameMenuWidgetStyle();


#define FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_186_PROLOG
#define FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_INCLASS \
	FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_189_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEMENUBUILDER_API UClass* StaticClass<class UGameMenuWidgetStyle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h


#define FOREACH_ENUM_GAMEMENULAYOUTTYPE(op) \
	op(GameMenuLayoutType::Single) \
	op(GameMenuLayoutType::SideBySide) 

namespace GameMenuLayoutType { enum Type : int; }
template<> GAMEMENUBUILDER_API UEnum* StaticEnum<GameMenuLayoutType::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
