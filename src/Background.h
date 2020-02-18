/*
 * Author: 'Phillip' Hyungseok lee.
 * Reference: Provided several templates from the professor Tom Tsiliopoulos's 2020 Winter COMP397 course.
 * StudentNumber: 301011097
 * Written date : 02-17-2020
 * Description: The header file of the start scene's background.
 */
#pragma once
#ifndef __BACKGROUND__
#define __BACKGROUND__
#include "DisplayObject.h"
#include <SDL_hints.h>
#include "Config.h"

class Background :public DisplayObject
{
public:
	Background(std::string imagePath = "../Assets/textures/Game_Bg.png",
		std::string name = "Background",
		GameObjectType type = BACKGROUND,
		glm::vec2 position = glm::vec2(Config::SCREEN_WIDTH * 0.5f, Config::SCREEN_HEIGHT * 0.5f), bool isCentered = true);
	~Background();
	void draw() override;
	void update() override;
	void clean() override;
private:
	std::string m_name;
	Uint8 m_alpha;
	bool m_isCentered;
	
};
#endif /*Defiend __BACKGROUND__*/