// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceControlViewportUtils.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOURCECONTROLVIEWPORT_SourceControlViewportUtils_generated_h
#error "SourceControlViewportUtils.generated.h already included, missing '#pragma once' in SourceControlViewportUtils.h"
#endif
#define SOURCECONTROLVIEWPORT_SourceControlViewportUtils_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_SourceControlViewport_Private_SourceControlViewportUtils_h


#define FOREACH_ENUM_ESOURCECONTROLSTATUS(op) \
	op(ESourceControlStatus::CheckedOutByOtherUser) \
	op(ESourceControlStatus::NotAtHeadRevision) \
	op(ESourceControlStatus::CheckedOut) \
	op(ESourceControlStatus::OpenForAdd) 

enum class ESourceControlStatus : uint8;
template<> struct TIsUEnumClass<ESourceControlStatus> { enum { Value = true }; };
template<> SOURCECONTROLVIEWPORT_API UEnum* StaticEnum<ESourceControlStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
