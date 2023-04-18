#include "hexagon.h"
#include <cmath>

Hexagon::Hexagon(const Point centre, const double lenght):centre(centre), lenght(lenght)
{   
    if (lenght <= 0)
    {
        throw std::out_of_range("Введено неверное значение.");
    }
    Math();
}

void Hexagon::Math()
{
    for (int i = 0; i < 6; i++)
    {
    double  angle = ((90 + 60 * i) * M_PI) / 180;
    double x = lenght * cos(angle) + centre.x;
    double y = lenght * sin(angle) + centre.y;
    Point a(x, y);
    hexagon_top.push_back(a);
    }
}

double Hexagon::Area()
{
    return (3 * sqrt(3) * lenght * lenght /2);
}

double Hexagon::Perimeter()
{
    return (lenght * 6);
}

double Hexagon::RadiusOfCircle()
{
    return lenght;
}


std::ostream& operator << (std::ostream& os, const Hexagon& hexagon)
{
    for (int i = 0; i < 6; i++)
    {
        os << "Точка " << char(i+65) << " = " << hexagon.hexagon_top.at(i);
    }
    return os;
}