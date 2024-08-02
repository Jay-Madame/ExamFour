#pragma once
#include "Shape.h"

class Circle : public Shape
{
    Circle(Shape* inner = nullptr);
    virtual void describe() override;
};