#include "Class.h"

Class::Class() : Class("") {}
Class::Class(std::string n) : name(n) {}
std::string Class::getName() const
{
    return name;
}
void Class::setName(std::string n)
{
    name = n;
}