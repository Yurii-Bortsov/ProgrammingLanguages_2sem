#include "point.h"

Point::Point(double valueX, double valueY)
{
    this -> x = valueX;
    this -> y = valueY;
}

std::ostream& operator << (std::ostream& os, const Point& point)
{
    os << "(" << point.x << "; " << point.y << ")\n";
    return os;
}

std::istream& operator >> (std::istream& in, Point& point)
{
    double x, y;    
    in >> x >> y;
    point.x = x;
    point.y = y;
    return in;
}