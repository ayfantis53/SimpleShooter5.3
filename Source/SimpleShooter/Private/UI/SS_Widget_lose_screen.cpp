// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/SS_Widget_lose_screen.h"

// Unreal includes
#include "SlateBasics.h"
#include "SlateOptMacros.h"
#include "Widgets/Layout/SConstraintCanvas.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
auto SSS_Widget_lose_screen::Construct(const FArguments& InArgs)-> void
{

	ChildSlot
	[
		// Populate the widget
		SNew(SConstraintCanvas)
			+ SConstraintCanvas::Slot()
			.AutoSize(true)
			.Anchors(FAnchors(0.5, 0.5, 0.5, 0.5))
			.Offset(FVector2d(0, -100))
			[
				// Our text for widget.
				SAssignNew(lose_text_, STextBlock)
					.Font(FSlateFontInfo(FPaths::EngineContentDir() / roboto_path_, 70))
					.ColorAndOpacity(lose_text_color_)
					.ShadowColorAndOpacity(lose_text_shadow_color_)
					.ShadowOffset(text_shadow_offset_)
					.Text(FText::FromString(lose_game_text_))
			]
			+ SConstraintCanvas::Slot()
			.AutoSize(true)
			.Anchors(FAnchors(0.5, 0.5, 0.5, 0.5))
			.Offset(FVector2d(0, 25))
			[
				// Our text for widget.
				SAssignNew(restart_text_, STextBlock)
					.Font(FSlateFontInfo(FPaths::EngineContentDir() / roboto_path_, 50))
					.ColorAndOpacity(lose_text_color_)
					.ShadowColorAndOpacity(lose_text_shadow_color_)
					.ShadowOffset(text_shadow_offset_)
					.Text(FText::FromString(level_restart_text_))
			]
	];

}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION
