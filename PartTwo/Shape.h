#pragma once
#include <iostream>

class Shape
{
private:
    std::string name;
    Shape *innerShape;

public:
    Shape();
    Shape(std::string n, Shape* type);
    virtual ~Shape();
    std::string getName() const;
    Shape* getInnerShape() const;
    void setName(std::string n);
    void setShape(Shape* type);
    virtual void describe();
};