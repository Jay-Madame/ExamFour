#include "Shape.h"
#include "Shape.cpp"
#include "Circle.h"
#include "Circle.cpp"
#include "Polygon.h"
#include "Polygon.cpp"
#include <iostream>

int main()
{
    Shape *shapes[2];
    shapes[0] = Polygon newPolygon("square", 4, Circle newCircle(Circle newCircle(Shape())));
    shapes[1] = Polygon newPolygon("pentagon", 5, Polygon sqaure("square", 4, Polygon triangle("Triangle", 3, Circle newCirce(Shape()))));

    for (Shape *&shape : shapes)
    {
        shape->describe();
    }
    return 0;
}
