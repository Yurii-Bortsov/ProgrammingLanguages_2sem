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

double Hexagon::Angle(const unsigned int i) const
{
    double  angle = ((90 + 60 * i) * M_PI) / 180;
    return angle;
}

double Hexagon::VertexX(double angle) const
{
    double x = lenght * cos(angle) + centre.x;
    return x;
}

double Hexagon::VertexY(double angle) const
{
    double y = lenght * sin(angle) + centre.y;
    return y;
}

double Hexagon::Area() const
{
    return (3 * sqrt(3) * lenght * lenght /2);
}

double Hexagon::Perimeter() const
{
    return (lenght * 6);
}

double Hexagon::RadiusOfCircle() const
{
    return lenght;
}


std::ostream& operator << (std::ostream& os, const Hexagon& hexagon)
{
    for (int i = 0; i < hexagon.vertexes; i++)
    {
        os << "Точка " << char(i+65) << " = " << hexagon.hexagon_top.at(i);
    }
    return os;
}