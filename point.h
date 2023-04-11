#pragma once
#include <iostream>

struct Point {  
        double x;
        double y;

        /**
        * @brief Конструктор класса Point.
        * @param valueX Координата X точки.
        * @param valueY Координата Y точки.
        */
        Point(double valueX, double valueY);
        
        /**
         * @brief Оператор вывода объекта Point в поток.
         * @param os Поток вывода.
         * @param point Объект Point, который нужно вывести.
         * @return Поток вывода.
         */
        friend std::ostream& operator << (std::ostream& os, const Point& point);

        /**
         * @brief Оператор ввода объекта Point.
         * @param in Поток ввода.
         * @param point Объект Point, в который нужно считать данные.
         * @return Поток ввода.
         */
        friend std::istream& operator >> (std::istream& in, Point& point);
};