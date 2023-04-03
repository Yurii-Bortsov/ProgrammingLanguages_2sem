#include "point.h"

Point::Point(double valueX, double valueY)
{
    this -> x = valueX;
    this -> y = valueY;
}


void Point::Print()
{
    std::cout << "(" << x << "; " << y << ")\n";
}