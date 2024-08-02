#include "Shape.h"

Shape::Shape() : Shape("Dot", nullptr) {}
Shape::Shape(std::string n, Shape *type) : name(n), innerShape(type) {}
Shape::~Shape()
{
    delete innerShape;
}
std::string Shape::getName() const
{
    return name;
}
Shape *Shape::getInnerShape() const
{
    return innerShape;
}
void Shape::setName(std::string n)
{
    name = n;
}
void Shape::setShape(Shape *type)
{
    delete innerShape;
    innerShape = type;
}
void Shape::describe()
{
    std::cout << "a dot.";
}