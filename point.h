#pragma once
#include <iostream>
#include <string>

struct Point {
        Point();
        double x;
        double y;
        void Print();
        Point(double valueX, double valueY);
};