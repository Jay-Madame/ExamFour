#include "Hero.h"

Hero::Hero() : Hero("", nullptr) {}
Hero::Hero(std::string n, Class *type) : name(n), typeOfHero(type) {}
Hero::~Hero()
{
    delete typeOfHero;
}
std::string Hero::getName() const
{
    return name;
}
Class *Hero::getTypeOfHero() const
{
    return typeOfHero;
}
void Hero::setName(std::string n)
{
    name = n;
}
void Hero::setTypeOfHero(Class *type)
{
    delete typeOfHero;
    typeOfHero = type;
}
void Hero::act()
{
    std::cout << name;
    typeOfHero->attack();
}