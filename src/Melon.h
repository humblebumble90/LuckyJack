/*
 * Author: 'Phillip' Hyungseok lee.
 * Reference: Provided several templates from the professor Tom Tsiliopoulos's 2020 Winter COMP397 course.
 * StudentNumber: 301011097
 * Written date : 02-17-2020
 * Description: The header file of melon symbol.
 */
#pragma once
#ifndef __MELON__
#define __MELON__

#include "DisplayObject.h"
#include <SDL_hints.h>
#include "Config.h"

class Melon: public DisplayObject
{
public:

	Melon(std::string imagePath = "../Assets/textures/Slot Machine/melon.png",
		std::string name = "Melon",
		GameObjectType type = MELON,
		glm::vec2 position = glm::vec2(Config::SCREEN_WIDTH * 0.25f, Config::SCREEN_HEIGHT * 0.4f), bool isCentered = false);
	
	~Melon();
	
	void draw() override;
	void update() override;
	void clean() override;

private:
	std::string m_name;
	Uint8 m_alpha;
	bool m_isCentered;
};
#endif /*Defined(__MELON__)*/

