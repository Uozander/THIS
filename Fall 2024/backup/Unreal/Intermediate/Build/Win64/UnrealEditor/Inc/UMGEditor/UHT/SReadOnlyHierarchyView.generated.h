// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Hierarchy/SReadOnlyHierarchyView.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMGEDITOR_SReadOnlyHierarchyView_generated_h
#error "SReadOnlyHierarchyView.generated.h already included, missing '#pragma once' in SReadOnlyHierarchyView.h"
#endif
#define UMGEDITOR_SReadOnlyHierarchyView_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Public_Hierarchy_SReadOnlyHierarchyView_h


#define FOREACH_ENUM_EROOTSELECTIONMODE(op) \
	op(ERootSelectionMode::Disabled) \
	op(ERootSelectionMode::Enabled) \
	op(ERootSelectionMode::Self) 

enum class ERootSelectionMode : uint8;
template<> struct TIsUEnumClass<ERootSelectionMode> { enum { Value = true }; };
template<> UMGEDITOR_API UEnum* StaticEnum<ERootSelectionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
