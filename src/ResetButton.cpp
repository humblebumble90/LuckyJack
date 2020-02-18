/*
 * Author: 'Phillip' Hyungseok lee.
 * Reference: Provided several templates from the professor Tom Tsiliopoulos's 2020 Winter COMP397 course.
 * StudentNumber: 301011097
 * Written date : 02-17-2020
 * Description: The cpp file of reset-button that resets all values to at the start of the game.
 */
#include "ResetButton.h"
#include "Game.h"


ResetButton::ResetButton()
// call super constructor
	:Button(
		"../Assets/textures/ResetButton.png",
		"ResetButton",
		RESET_BUTTON, glm::vec2(400.0f, 300.0f)), m_isClicked(false)
{

}

ResetButton::~ResetButton()
{
}

bool ResetButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			std::cout << "Clicked!" << std::endl;
			getParent()->clean();
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