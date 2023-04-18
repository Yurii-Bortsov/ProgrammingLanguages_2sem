#pragma once
#include <iostream>

struct Point {  
        const double x;
        const double y;

        /**
        * @brief Конструктор класса Point.
        * @param valueX Координата X точки.
        * @param valueY Координата Y точки.
        */
        Point(const double valueX, const double valueY);

        /**
         * @brief Оператор вывода объекта Point в поток.
         * @param os Поток вывода.
         * @param point Объект типа Point, который нужно вывести.
         * @return Поток вывода.
         */
        friend std::ostream& operator << (std::ostream& os, const Point& point);
};