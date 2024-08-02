#include "Class.h"
#include "Class.cpp"
#include "Mage.h"
#include "Mage.cpp"
#include "Warrior.cpp"
#include "Warrior.h"
#include "Hero.h"
#include "Hero.cpp"

void testMage();
void testWarrior();

int main()
{
    /*testMage();
    std::cout << "\n";
    testWarrior();*/

    Hero *party[2];
    party[0] = new Mage;
    party[1] = new Warrior;

    for (Hero *hero : party)
    {
        hero->act();
    }
    return 0;
}

void testMage()
{
    Mage newMage;
    newMage.attack();
}

void testWarrior()
{
    Warrior newWarrior;
    newWarrior.attack();
}