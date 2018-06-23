#include "Hero.h"

Hero& Hero::getInstance()
{
	static Hero hero;
	return hero;
}

void Hero::setName(const std::string& newName)
{
	if (newName != "")
	{
		name = newName;
	}
	else
	{
		name = "DefaultName";
	}
}

const std::string& Hero::getName()
{
	return name;
}

void Hero::setPosition(uint32_t newX, uint32_t newY)
{
	scenePos.setPosition(newX, newY);
}

const Position& Hero::getPosition()
{
	return scenePos;
}

void Hero::printPosition()
{
	std::cout << "DoomGuy Position:" << std::endl;
	std::cout << "X: " << scenePos.getX() << std::endl;
	std::cout << "Y: " << scenePos.getX() << std::endl;
}