#include "CharacterFactory.h"

Character* CharacterFactory::createCharacter(std::string characterType)
{
    if (characterType == "Hero")
    {
        Hero::getInstance().setName("DoomGuy");
        return &Hero::getInstance();
    }
    else if (characterType == "Demon")
    {
        Demon* demon = new Demon();
        demon->setName("Demon1");
        return demon;
    }
}