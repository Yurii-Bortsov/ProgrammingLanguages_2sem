#include "point.h"

Point::Point(double valueX, double valueY):x(valueX), y(valueY){}


std::ostream& operator << (std::ostream& os, const Point& point)
{
    os << "(" << point.x << "; " << point.y << ")\n";
    return os;
}

bool Point::operator == (const Point& point)
{
        return (point.x == x && point.y == y);
}
