#pragma once
#include "point.h"
#include <vector>

class Hexagon {
    private:
        double lenght; // длина ребра
        Point centre = {0 , 0}; // координаты центра гексагона
        std::vector<Point> hexagon_top; // список вершин гексагона
    public:
        /**
         * @brief Конструктор класса Hexagon.
         * @param centre Координаты центра шестиугольника.
         * @param lenght Длина ребра шестиугольника.
         */
        Hexagon(const Point centre, const double lenght);
        
        /**
         * @brief Вывод на экран координат вершин шестиугольника.
         */
        void PrintHexPoints();

        /**
         * @brief Вычисление площади шестиугольника.
         * @param lenght Длина ребра шестиугольника.
         * @return Площадь шестиугольника.
         */
        double Area(const double lenght);

        /**
         * @brief Вычисление периметра шестиугольника.
         * @param lenght Длина ребра шестиугольника.
         * @return Периметр шестиугольника.
         */
        double Perimeter(const double lenght);

        /**
         * @brief Вычисление радиуса описанной окружности.
         * @param lenght Длина ребра шестиугольника.
         * @return Радиус описанной окружности.
         */
        double RadiusOfCircle(const double lenght);

        /**
         * @brief Получение длины ребра шестиугольника.
         * @return Длина ребра шестиугольника.
         */
        const double Get_lenght();

};
