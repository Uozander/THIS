// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CollectionSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLLECTIONMANAGER_CollectionSettings_generated_h
#error "CollectionSettings.generated.h already included, missing '#pragma once' in CollectionSettings.h"
#endif
#define COLLECTIONMANAGER_CollectionSettings_generated_h

#define FID_Engine_Source_Developer_CollectionManager_Public_CollectionSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCollectionSettings(); \
	friend struct Z_Construct_UClass_UCollectionSettings_Statics; \
public: \
	DECLARE_CLASS(UCollectionSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CollectionManager"), COLLECTIONMANAGER_API) \
	DECLARE_SERIALIZER(UCollectionSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Developer_CollectionManager_Public_CollectionSettings_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COLLECTIONMANAGER_API UCollectionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCollectionSettings(UCollectionSettings&&); \
	UCollectionSettings(const UCollectionSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLLECTIONMANAGER_API, UCollectionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollectionSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollectionSettings) \
	COLLECTIONMANAGER_API virtual ~UCollectionSettings();


#define FID_Engine_Source_Developer_CollectionManager_Public_CollectionSettings_h_8_PROLOG
#define FID_Engine_Source_Developer_CollectionManager_Public_CollectionSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_CollectionManager_Public_CollectionSettings_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_CollectionManager_Public_CollectionSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLLECTIONMANAGER_API UClass* StaticClass<class UCollectionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_CollectionManager_Public_CollectionSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
