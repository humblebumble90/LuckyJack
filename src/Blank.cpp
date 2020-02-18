#include "Blank.h"
#include "Game.h"

Blank::Blank(std::string name, GameObjectType type, glm::vec2 position, bool isCentered)
	: m_name(name), m_isCentered(isCentered)
{

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize(m_name);
	setWidth(size.x);
	setHeight(size.y);
	setPosition(position);
	setType(type);
}

Blank::~Blank()
{
}

void Blank::draw()
{
}

void Blank::update()
{
}

void Blank::clean()
{
}
