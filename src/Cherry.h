/*
 * Author: 'Phillip' Hyungseok lee.
 * Reference: Provided several templates from the professor Tom Tsiliopoulos's 2020 Winter COMP397 course.
 * StudentNumber: 301011097
 * Written date : 02-17-2020
 * Description: The header file of cherry symbol.
 */
#pragma once
#ifndef __CHERRY__
#define __CHERRY__
#include "DisplayObject.h"
#include <SDL_hints.h>
#include "Config.h"
class Cherry: public DisplayObject	
{
public:
	Cherry(std::string imagePath = "../Assets/textures/Slot Machine/Cherry.png",
		std::string name = "Cherry",
		GameObjectType type = CHERRY,
		glm::vec2 position = glm::vec2(Config::SCREEN_WIDTH * 0.75f, Config::SCREEN_HEIGHT * 0.1f), bool isCentered = false);
	~Cherry();
	
	void draw() override;
	void update() override;
	void clean() override;
private:
	std::string m_name;
	Uint8 m_alpha;
	bool m_isCentered;
};
#endif /*Defined(__CHERRY__)*/
