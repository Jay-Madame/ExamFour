#include "Mage.h"
#include <iostream>

Mage::Mage() : Class("Mage")
{
    spellbook.push_back("Heal wounds");
    spellbook.push_back("Animal Messenger");
    spellbook.push_back("Bane");
    spellbook.push_back("Heat Metal");
}
void Mage::castSpell(std::string spell)
{
    std::cout << "casts a(n) " << spell;
}
std::string Mage::pickSpell()
{
    srand(time(0));
    int whichSpell = (0 + rand() % (spellbook.size() - 0 + 1));
    return spellbook[whichSpell];
}
void Mage::attack()
{
    std::cout << ", the Mage, ";
    castSpell(pickSpell());
}