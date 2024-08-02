#pragma once
#include <iostream>

/*
    Class should have:
    [x] name : string
    [x] pure virtual function attack(): void
    [x] get and set name
    [x] default constructor
    [x] constructor that takes name
*/

class Class
{
private:
    std::string name;

public:
    Class();
    Class(std::string n);
    std::string getName() const;
    void setName(std::string n);
    virtual void attack() = 0;
};