// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneToolsProjectSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETOOLS_MovieSceneToolsProjectSettings_generated_h
#error "MovieSceneToolsProjectSettings.generated.h already included, missing '#pragma once' in MovieSceneToolsProjectSettings.h"
#endif
#define MOVIESCENETOOLS_MovieSceneToolsProjectSettings_generated_h

#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics; \
	MOVIESCENETOOLS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETOOLS_API UScriptStruct* StaticStruct<struct FMovieSceneToolsPropertyTrackSettings>();

#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics; \
	MOVIESCENETOOLS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETOOLS_API UScriptStruct* StaticStruct<struct FMovieSceneToolsFbxSettings>();

#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneToolsProjectSettings(); \
	friend struct Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneToolsProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneTools"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneToolsProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneToolsProjectSettings(UMovieSceneToolsProjectSettings&&); \
	UMovieSceneToolsProjectSettings(const UMovieSceneToolsProjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneToolsProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneToolsProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneToolsProjectSettings) \
	NO_API virtual ~UMovieSceneToolsProjectSettings();


#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_55_PROLOG
#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETOOLS_API UClass* StaticClass<class UMovieSceneToolsProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h


#define FOREACH_ENUM_EMOVIESCENETOOLSPROPERTYTRACKTYPE(op) \
	op(EMovieSceneToolsPropertyTrackType::FloatTrack) \
	op(EMovieSceneToolsPropertyTrackType::DoubleTrack) 

enum class EMovieSceneToolsPropertyTrackType;
template<> struct TIsUEnumClass<EMovieSceneToolsPropertyTrackType> { enum { Value = true }; };
template<> MOVIESCENETOOLS_API UEnum* StaticEnum<EMovieSceneToolsPropertyTrackType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
