/*
 * Author: 'Phillip' Hyungseok lee.
 * Reference: Provided several templates from the professor Tom Tsiliopoulos's 2020 Winter COMP397 course.
 * StudentNumber: 301011097
 * Written date : 02-17-2020
 * Description: The header file of reset-button that resets all values to at the start of the game.
 */
#pragma once
#ifndef __RESET_BUTTON__
#define __RESET_BUTTON__

#include "Button.h"

class ResetButton : public Button
{
public:
	ResetButton();
	~ResetButton();


	bool ButtonClick() override;
private:
	bool m_isClicked;
};

#endif /* defined (__RESET_BUTTON__) */