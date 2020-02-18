/*
 * Author: 'Phillip' Hyungseok lee.
 * Reference: Provided several templates from the professor Tom Tsiliopoulos's 2020 Winter COMP397 course.
 * StudentNumber: 301011097
 * Written date : 02-17-2020
 * Description: The cpp file of betting-up button.
 */
#include"BettingUpButton.h"

BettingUpButton::BettingUpButton()
// call super constructor
	:Button(
		"../Assets/textures/BettingUpButton.png",
		"BettingUpButton",
		BETTING_UP_BUTTON, glm::vec2(400.0f, 300.0f)), m_isClicked(false)
{

}

BettingUpButton::~BettingUpButton()
{
}

bool BettingUpButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			std::cout << "Clicked!\n";
			m_isClicked = true;
		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}

	return false;
}
