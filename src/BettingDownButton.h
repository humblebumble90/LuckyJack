/*
 * Author: 'Phillip' Hyungseok lee.
 * Reference: Provided several templates from the professor Tom Tsiliopoulos's 2020 Winter COMP397 course.
 * StudentNumber: 301011097
 * Written date : 02-17-2020
 * Description: The header file of betting-down button.
 */
#pragma once
#ifndef __BETTING_DOWN_BUTTON__
#define __BETTING_DOWN_BUTTON__

#include "Button.h"

class BettingDownButton : public Button
{
public:
	BettingDownButton();
	~BettingDownButton();
	bool ButtonClick() override;
private:
	bool m_isClicked;
};
#endif /*Defined (__BETTING_DOWN_BUTTON__)*/
