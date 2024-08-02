#pragma once
#include "Class.h"
#include "Hero.h"

class Warrior : public Class
{
private:
    std::string weapon;

public:
    Warrior();
    Warrior(std::string w);
    std::string getWeapon();
    void setWeapon(std::string w);
    virtual void attack() override;
};