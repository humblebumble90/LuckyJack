/*
 * Author: 'Phillip' Hyungseok lee.
 * Reference: Provided several templates from the professor Tom Tsiliopoulos's 2020 Winter COMP397 course.
 * StudentNumber: 301011097
 * Written date : 02-17-2020
 * Description: The header file of clover symbol.
 */
#pragma once
#ifndef __CLOVER__
#define __CLOVER__
#include "DisplayObject.h"
#include <SDL_hints.h>
#include "Config.h"

class Clover:public DisplayObject
{
public:

	Clover(std::string imagePath = "../Assets/textures/Slot Machine/clover.png",
		std::string name = "Clover",
		GameObjectType type = CLOVER,
		glm::vec2 position = glm::vec2(Config::SCREEN_WIDTH * 0.25f, Config::SCREEN_HEIGHT * 0.25f), bool isCentered = false);
	~Clover();
	void draw() override;
	void update() override;
	void clean() override;

private:
	std::string m_name;
	Uint8 m_alpha;
	bool m_isCentered;
};

#endif /*Defined(__CLOVER__)*/