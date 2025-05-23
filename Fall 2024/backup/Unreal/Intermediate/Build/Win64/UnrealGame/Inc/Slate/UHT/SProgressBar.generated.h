// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Notifications/SProgressBar.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATE_SProgressBar_generated_h
#error "SProgressBar.generated.h already included, missing '#pragma once' in SProgressBar.h"
#endif
#define SLATE_SProgressBar_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Slate_Public_Widgets_Notifications_SProgressBar_h


#define FOREACH_ENUM_EPROGRESSBARFILLTYPE(op) \
	op(EProgressBarFillType::LeftToRight) \
	op(EProgressBarFillType::RightToLeft) \
	op(EProgressBarFillType::FillFromCenter) \
	op(EProgressBarFillType::FillFromCenterHorizontal) \
	op(EProgressBarFillType::FillFromCenterVertical) \
	op(EProgressBarFillType::TopToBottom) \
	op(EProgressBarFillType::BottomToTop) 

namespace EProgressBarFillType { enum Type : int; }
template<> SLATE_API UEnum* StaticEnum<EProgressBarFillType::Type>();

#define FOREACH_ENUM_EPROGRESSBARFILLSTYLE(op) \
	op(EProgressBarFillStyle::Mask) \
	op(EProgressBarFillStyle::Scale) 

namespace EProgressBarFillStyle { enum Type : int; }
template<> SLATE_API UEnum* StaticEnum<EProgressBarFillStyle::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
