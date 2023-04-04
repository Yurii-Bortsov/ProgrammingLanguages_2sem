#include "hexagon.h"
#include <cmath>
#include <vector>

std::vector <Point> hexagon_top;

Hexagon::Hexagon(Point centre, const double lenght)
{
    this->centre = centre;
    this->lenght = lenght;
    
    if (lenght > 0)
    {
        for (int i = 0; i < 6; i++)
        {
        double  angle = ((90 + 60 * i) * M_PI) / 180;
        double x = round((lenght * cos(angle) + centre.x) * 10) / 10;
        double y = round((lenght * sin(angle) + centre.y) * 10) / 10;
        Point a(x, y);
        hexagon_top.push_back(a);
        }
    }
    else
    {
        std::cerr << "Error; edge length can't be negative";
    }
}

void Hexagon::Print_Hex_Points()
{
    for (int i = 0; i < 6; i++)
    {
        std::cout << "Точка " << char(i+65) << " = ";
        hexagon_top.at(i).Print();
    }
}

double Hexagon::Area(const double lenght)
{
    return (round((3 * sqrt(3) * lenght * lenght /2) * 10) / 10);
}

double Hexagon::Perimeter(const double lenght)
{
    return (lenght * 6);
}

double Hexagon::RadiusOfCircle(const double lenght)
{
    return lenght;
}