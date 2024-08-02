#pragma once

#include "Class.h"
#include "Mage.h"
#include "Warrior.h"

class Hero : public Class
{
private:
    std::string name;
    Class *typeOfHero;

public:
    Hero();
    Hero(std::string n, Class *type);
    virtual ~Hero();
    std::string getName() const;
    Class *getTypeOfHero() const;
    void setName(std::string n);
    void setTypeOfHero(Class *type);
    void act();
};