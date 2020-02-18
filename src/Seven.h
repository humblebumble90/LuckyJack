/*
 * Author: 'Phillip' Hyungseok lee.
 * Reference: Provided several templates from the professor Tom Tsiliopoulos's 2020 Winter COMP397 course.
 * StudentNumber: 301011097
 * Written date : 02-17-2020
 * Description: The header file of 7 symbol.
 */
#pragma once
#ifndef __SEVEN__
#define __SEVEN__

#include "DisplayObject.h"
#include <SDL_hints.h>
#include "Config.h"

class Seven :public DisplayObject
{
public:

	Seven(std::string imagePath = "../Assets/textures/Slot Machine/Seven.png",
		std::string name = "Seven",
		GameObjectType type = SEVEN,
		glm::vec2 position = glm::vec2(Config::SCREEN_WIDTH * 0.5f, Config::SCREEN_HEIGHT * 0.4f), bool isCentered = false);
	~Seven();
	void draw() override;
	void update() override;
	void clean() override;

private:
	std::string m_name;
	Uint8 m_alpha;
	bool m_isCentered;
};
#endif /*Defined(__SEVEN__)*/