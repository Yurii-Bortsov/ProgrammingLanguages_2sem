#pragma once
#include "point.h"
#include <vector>

class Hexagon {
    private:
        const double lenght; // длина ребра
        const Point centre; // координаты центра гексагона
        std::vector<Point> hexagon_top; // список вершин гексагона
    public:
        /**
         * @brief Конструктор класса Hexagon.
         * @param centre Координаты центра шестиугольника.
         * @param lenght Длина ребра шестиугольника.
         */
        Hexagon(const Point centre, const double lenght);

        /**
         * @brief Вычисляет координаты вершин гексагона и добавляет их в vector.
        */
        void Math();
        
        /**
         * @brief Вычисление площади шестиугольника.
         * @return Площадь шестиугольника.
         */
        double Area();

        /**
         * @brief Вычисление периметра шестиугольника.
         * @return Периметр шестиугольника.
         */
        double Perimeter();

        /**
         * @brief Вычисление радиуса описанной окружности.
         * @return Радиус описанной окружности.
         */
        double RadiusOfCircle();

        /**
         * @brief Оператор вывода объекта Hexagon в поток.
         * @param os Поток вывода.
         * @param hexagon Объект типа Hexagon, который нужно вывести.
         * @return Поток вывода.
         */
        friend std::ostream& operator << (std::ostream& os, const Hexagon& hexagon);
};
