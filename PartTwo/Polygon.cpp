#include "Polygon.h"

Polygon::Polygon(Shape *inner) : Shape("polygon", inner) {}
Polygon::Polygon(std::string n, int sides, Shape* type) : name(n), numSides(sides), Shape(n, type) {}
void Polygon::describe()
{
    std::cout << "a " << numSides << "-sided " << name << " surrounding a ";
    getInnerShape()
        ->describe();
}