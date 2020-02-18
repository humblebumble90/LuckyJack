/*
 * Author: 'Phillip' Hyungseok lee.
 * Reference: Provided several templates from the professor Tom Tsiliopoulos's 2020 Winter COMP397 course.
 * StudentNumber: 301011097
 * Written date : 02-17-2020
 * Description: The cpp file of the spin-button that starts spinning the slot machine.
 */
#include "SpinButton.h"
#include "Game.h"

SpinButton::SpinButton()
// call super constructor
	:Button(
		"../Assets/textures/SpinButton.png",
		"SpinButton",
		SPIN_BUTTON, glm::vec2(400.0f, 300.0f)), m_isClicked(false)
{

}

SpinButton::~SpinButton()
{
}

bool SpinButton::ButtonClick()
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
