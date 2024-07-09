// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class SIMPLESHOOTER_API SSS_Widget_win_screen : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SSS_Widget_win_screen)
	{}
	SLATE_END_ARGS()

	/// @brief: Constructs this widget with InArgs
	auto Construct(const FArguments& InArgs) -> void;

private:
	/// @brief: Text for countdown display at start of game
	TSharedPtr<STextBlock> win_text_;

	/// @brief: Value for Start Game Text
	FString win_game_text_{ "You WIN!!!" };

	/// @brief: Size to set the win text
	int font_size_{ 70 };

	/// @brief: Color to set the win text
	FLinearColor win_text_color_{ FLinearColor(0, 1.0, 0.087717, 1) };

	/// @brief: Color to set the win text shadow
	FLinearColor win_text_shadow_color_{ FLinearColor(0, 0, 0, 1) };

	/// @brief: needed to set the widget text to Roboto
	inline const static FString roboto_path_{ "Slate/Fonts/Roboto-Bold.ttf" };
};
