#include <iostream>
#include <string>

#include "Character.h"
#include "Hero.h"
#include "Demon.h"

class CharacterFactory
{
public:
    static CharacterFactory& getInstance()
    {
        static CharacterFactory chFactory;
        return chFactory;
    }

    Character* createCharacter(std::string characterType);

    void operator=(CharacterFactory const&) = delete;
    CharacterFactory(CharacterFactory const&) = delete;

private:
    CharacterFactory(){}
};