/*
 * Author: 'Phillip' Hyungseok lee.
 * Reference: Provided several templates from the professor Tom Tsiliopoulos's 2020 Winter COMP397 course.
 * StudentNumber: 301011097
 * Written date : 02-17-2020
 * Description: The header file of bar symbol.
 */
#pragma once
#ifndef __BAR__
#define __BAR__
#include "DisplayObject.h"
#include <SDL_hints.h>
#include "Config.h"
class Bar : public DisplayObject
{
public:

	Bar(std::string imagePath = "../Assets/textures/Slot Machine/Bar1.png",
		std::string name = "Bar",
		GameObjectType type = BAR,
		glm::vec2 position = glm::vec2(Config::SCREEN_WIDTH * 0.5f, Config::SCREEN_HEIGHT * 0.1f), bool isCentered = false);
	~Bar();
	
	void draw() override;
	void update() override;
	void clean() override;

private:
	std::string m_name;
	Uint8 m_alpha;
	bool m_isCentered;
};

#endif /*Defined (__BAR__)*/
