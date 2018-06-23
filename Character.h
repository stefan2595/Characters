#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "Position.h"

class Character
{
public:
    virtual void setName(const std::string& name) = 0;

    virtual const std::string& getName() = 0;

	virtual void setPosition(uint32_t, uint32_t) = 0;

	virtual const Position& getPosition() = 0;

	virtual void printPosition() = 0;

private:
	Position scenePos;
};

#endif //CHARACTER_H