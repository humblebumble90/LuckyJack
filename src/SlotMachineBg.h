/*
 * Author: 'Phillip' Hyungseok lee.
 * Reference: Provided several templates from the professor Tom Tsiliopoulos's 2020 Winter COMP397 course.
 * StudentNumber: 301011097
 * Written date : 02-17-2020
 * Description: The header file of the slot machine background.
 */
#pragma once
#ifndef __SLOT_MACHINE_BG__
#define __SLOT_MACHINE_BG__
#include "DisplayObject.h"
#include <SDL_hints.h>
#include "Config.h"

class SlotMachineBg:public DisplayObject
{
public:
	SlotMachineBg(std::string imagePath = "../Assets/textures/SlotMachine_Bg.png",
		std::string name = "Slot_Machine_Bg",
		GameObjectType type = SLOT_MACHINE_BG,
		glm::vec2 position = glm::vec2(Config::SCREEN_WIDTH * 0.5f, Config::SCREEN_HEIGHT * 0.25f), bool isCentered = true);
	~SlotMachineBg();
	void draw() override;
	void update() override;
	void clean() override;
private:
	std::string m_name;
	Uint8 m_alpha;
	bool m_isCentered;
};
#endif /*Defined __SLOT_MACHINE_BG__*/
