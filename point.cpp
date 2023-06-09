#include "point.h"

Point::Point(double valueX, double valueY):x(valueX), y(valueY){}


std::ostream& operator << (std::ostream& os, const Point& point)
{
    os << "(" << point.x << "; " << point.y << ")\n";
    return os;
}

/* bool Point::operator == (const Point& lha, const Point& rha)
{
        return (doubleAreEqual(lha.x, rha.x) && doubleAreEqual(lha.y, rha.y));
} */

bool Point::operator == (const Point& point)
{
        return (doubleAreEqual(x, point.x) && doubleAreEqual(y, point.y));
}

bool Point::operator != (const Point& point)
{
        return !(*this == point);
}