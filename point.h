#pragma once
#include <iostream>
#include <string>

struct Point {
        Point();
        double x;
        double y;
        Point(double valueX, double valueY);
        void Print();
};