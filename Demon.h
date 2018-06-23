#ifndef DEMON_H
#define DEMON_H

#include "Character.h"

class Demon : public Character
{
public:
	Demon() {}

	void setName(const std::string&);
	const std::string& getName();

	void setPosition(uint32_t, uint32_t);
	const Position& getPosition();

	void printPosition();

private:
	std::string name;
	Position scenePos;
};

#endif //DEMON_H