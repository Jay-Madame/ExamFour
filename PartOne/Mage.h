#pragma once
#include "Class.h"
#include <vector>
#include <cstdlib>
#include <ctime>

/*
    Mage should
    [x] be derived from class
    [x] Constructor to set name to Mage
    [x] instance variable: std::vector <std::string> spellbook
    [x] castSpell (spell: string): void
        [x] print out "casts a [spellName]"
    [x] pickSpell : string
        [x] selects a random spell from the spellbook and returns it
    [x] Override the attack function by picking a spell from vector,
        and printing out ", the Mage, [cast text]"
*/

class Mage : public Class
{
private:
    std::vector<std::string> spellbook;
    

public:
    Mage();
    void castSpell(std::string spell);
    std::string pickSpell();
    virtual void attack();
};