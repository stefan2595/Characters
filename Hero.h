#ifndef HERO_H
#define HERO_H

#include "Character.h"

class Hero : public Character
{
private:
	Hero() {}
public:
	static Hero& getInstance();

	void setName(const std::string&);
	const std::string& getName();

	void setPosition(uint32_t, uint32_t);
	const Position& getPosition();

	void operator=(Hero const&) = delete;
	Hero(Hero const&) = delete;

	void printPosition();
private:
    std::string name;
	Position scenePos;
};

#endif //HERO_H