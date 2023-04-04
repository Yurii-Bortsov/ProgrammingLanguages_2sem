#include "point.h"

Point::Point(double valueX, double valueY)
{
    this -> y = valueY;
    this -> x = valueX;
}


void Point::Print()
{
    std::cout << "(" << x << "; " << y << ")\n";
}