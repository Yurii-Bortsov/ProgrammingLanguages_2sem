#pragma once
#include "point.h"
#include <vector>

class Hexagon {
    private:
        const double lenght;
        const Point centre;
        std::vector<Point> hexagon_top;
        const int vertexes = 6;

        /**
         * @brief Функция рассчитывает, на какой угол надо повернуть радиус-вектор, чтобы перейти к следующей вершине шестиугольника.
         * @param i Порядковый номер вершины.
         * @return Угол, на который нужно поворачивать радиус-вектор.
        */
        const double Angle(const unsigned int i);

        /**
         * @brief Функция рассчитывает координату оси X вершины шестиугольника.
         * @param angle Угол, на который поворачивается радиус-вектор.
         * @return Координата оси X вершины.
        */
        const double VertexX(double angle);

        /**
         * @brief Функция рассчитывает координату оси Y вершины шестиугольника.
         * @param angle Угол, на который поворачивается радиус-вектор.
         * @return Координата оси Y вершины.
        */
        const double VertexY(double angle);
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
        const void Math();
        
        /**
         * @brief Вычисление площади шестиугольника.
         * @return Площадь шестиугольника.
         */
        const double Area();

        /**
         * @brief Вычисление периметра шестиугольника.
         * @return Периметр шестиугольника.
         */
        const double Perimeter();

        /**
         * @brief Вычисление радиуса описанной окружности.
         * @return Радиус описанной окружности.
         */
        const double RadiusOfCircle();

        /**
         * @brief Оператор вывода объекта Hexagon в поток.
         * @param os Поток вывода.
         * @param hexagon Объект типа Hexagon, который нужно вывести.
         * @return Поток вывода.
         */
        friend std::ostream& operator << (std::ostream& os, const Hexagon& hexagon);
};
