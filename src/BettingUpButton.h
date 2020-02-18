/*
 * Author: 'Phillip' Hyungseok lee.
 * Reference: Provided several templates from the professor Tom Tsiliopoulos's 2020 Winter COMP397 course.
 * StudentNumber: 301011097
 * Written date : 02-17-2020
 * Description: The header file of betting-up button.
 */
#pragma once
#ifndef __BETTING_UP_BUTTON__
#define __BETTING_UP_BUTTON__

#include "Button.h"

class BettingUpButton : public Button
{
public:
	BettingUpButton();
	~BettingUpButton();
	bool ButtonClick() override;
private:
	bool m_isClicked;
};
#endif /*Defined (__BETTING_UP_BUTTON__)*/
