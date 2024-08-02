#include "Circle.h"

Circle::Circle(Shape *inner) : Shape("circle", inner) {}
void Circle::describe()
{
    std::cout << "a perfect circle surrounding a ";
    getInnerShape()->describe();
}