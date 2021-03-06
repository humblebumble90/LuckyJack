/*
 * Author: 'Phillip' Hyungseok lee.
 * Reference: Provided several templates from the professor Tom Tsiliopoulos's 2020 Winter COMP397 course.
 * StudentNumber: 301011097
 * Written date : 02-17-2020
 * Description: The cpp file of bell symbol.
 */
#include "Bell.h"
#include "TextureManager.h"
#include "Game.h"

Bell::Bell(std::string imagePath, std::string name, GameObjectType type, glm::vec2 position, bool isCentered)
	: m_name(name), m_isCentered(isCentered), m_alpha(255)
{
	TheTextureManager::Instance()->load(imagePath,
		m_name, TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize(m_name);
	setWidth(size.x);
	setHeight(size.y);
	setPosition(position);
	setType(type);
}

Bell::~Bell()
{
}

void Bell::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	TheTextureManager::Instance()->draw(m_name, xComponent, yComponent,
	TheGame::Instance()->getRenderer(), 0, m_alpha, true);
}

void Bell::update()
{
}

void Bell::clean()
{
	TheTextureManager::Instance()->removeTexture(m_name);
}
