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

const void Hexagon::Math()
{
    for (unsigned int i = 0; i < vertexes; i++)
    {
        double angle = Angle(i);
        double x = VertexX(angle);
        double y = VertexY(angle);
        Point a(x, y);
        hexagon_top.push_back(a);
    }
}

const double Hexagon::Angle(const unsigned int i)
{
    double  angle = ((90 + 60 * i) * M_PI) / 180;
    return angle;
}

const double Hexagon::VertexX(double angle)
{
    double x = lenght * cos(angle) + centre.x;
    return x;
}

const double Hexagon::VertexY(double angle)
{
    double y = lenght * sin(angle) + centre.y;
    return y;
}

const double Hexagon::Area()
{
    return (3 * sqrt(3) * lenght * lenght /2);
}

const double Hexagon::Perimeter()
{
    return (lenght * 6);
}

const double Hexagon::RadiusOfCircle()
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