#include "Warrior.h"

Warrior::Warrior() : Warrior("sword")
{
}
Warrior::Warrior(std::string w) : Class("Warrior"), weapon(w) {}
std::string Warrior::getWeapon()
{
    return weapon;
}
void Warrior::setWeapon(std::string w)
{
    weapon = w;
}
void Warrior::attack()
{
    std::cout << ", the Warrior, swings their " << weapon;
}