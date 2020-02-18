#pragma once
#ifndef __BLANK__
#define __BLANK__


#include "DisplayObject.h"
#include "Config.h"
#include <SDL_hints.h>

#endif /*defined(__BLANK__)*/
class Blank:public DisplayObject
{
public:

	Blank(std::string name = "Blank",
		GameObjectType type = BLANK,
		glm::vec2 position = glm::vec2(Config::SCREEN_WIDTH * 0.25f, Config::SCREEN_HEIGHT * 0.25f),
		bool isCentered = false);
	~Blank();
	
	void draw() override;
	void update() override;
	void clean() override;

private:
	std::string m_name;
	bool m_isCentered;
};
