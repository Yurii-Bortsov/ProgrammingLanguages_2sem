#pragma once
#include "point.h"

class Hexagon {
    private:
        double lenght; // edge lenght
        Point centre = {0 , 0};// y coordinate of centre
    public:
        void Print_Hex_Points();
        Hexagon(const Point centre, const double lenght);
        double Area(const double lenght);
        double Perimeter(const double lenght);
        double RadiusOfCircle(const double lenght);
};
