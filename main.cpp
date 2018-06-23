#include "CharacterFactory.h"

void main()
{
    Character* DoomGuy = CharacterFactory::getInstance().createCharacter("Hero");
    std::cout << DoomGuy->getName() << std::endl;
	DoomGuy->setPosition(10, 10);
	DoomGuy->printPosition();

    Character* Demon = CharacterFactory::getInstance().createCharacter("Demon");
    std::cout << Demon->getName() << std::endl;
	Demon->printPosition();
    system("pause");
}