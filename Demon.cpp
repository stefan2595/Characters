#include "Demon.h"

void Demon::setName(const std::string& newName)
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

const std::string& Demon::getName()
{
	return name;
}

void Demon::setPosition(uint32_t newX, uint32_t newY)
{
	scenePos.setPosition(newX, newY);
}

const Position& Demon::getPosition()
{
	return scenePos;
}

void Demon::printPosition()
{
	std::cout << "Demon Position:" << std::endl;
	std::cout << "X: " << scenePos.getX() << std::endl;
	std::cout << "Y: " << scenePos.getX() << std::endl;
}