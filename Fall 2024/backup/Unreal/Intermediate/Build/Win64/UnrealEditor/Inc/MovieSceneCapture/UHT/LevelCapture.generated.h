// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelCapture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENECAPTURE_LevelCapture_generated_h
#error "LevelCapture.generated.h already included, missing '#pragma once' in LevelCapture.h"
#endif
#define MOVIESCENECAPTURE_LevelCapture_generated_h

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelCapture(); \
	friend struct Z_Construct_UClass_ULevelCapture_Statics; \
public: \
	DECLARE_CLASS(ULevelCapture, UMovieSceneCapture, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), MOVIESCENECAPTURE_API) \
	DECLARE_SERIALIZER(ULevelCapture)


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelCapture(ULevelCapture&&); \
	ULevelCapture(const ULevelCapture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, ULevelCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelCapture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelCapture) \
	MOVIESCENECAPTURE_API virtual ~ULevelCapture();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class ULevelCapture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
