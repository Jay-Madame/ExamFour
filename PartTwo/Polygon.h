#pragma once
#include "Shape.h"

class Polygon : public Shape
{
private:
    int numSides;
    std::string name;

public:
    Polygon(Shape *inner = nullptr);
    Polygon(std::string n, int sides, Shape* type);
    virtual void describe() override;
};