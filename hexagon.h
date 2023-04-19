#pragma once
#include "point.h"
#include <vector>

class Hexagon {
    private:
        const int vertexes = 6;
        const double lenght;
        const Point centre;
        std::vector<Point> hexagon_top;

        /**
         * @brief Функция рассчитывает, на какой угол надо повернуть радиус-вектор, чтобы перейти к следующей вершине шестиугольника.
         * @param i Порядковый номер вершины.
         * @return Угол, на который нужно поворачивать радиус-вектор.
        */
        double Angle(const unsigned int i) const;

        /**
         * @brief Функция рассчитывает координату оси X вершины шестиугольника.
         * @param angle Угол, на который поворачивается радиус-вектор.
         * @return Координата оси X вершины.
        */
        double VertexX(double angle) const;

        /**
         * @brief Функция рассчитывает координату оси Y вершины шестиугольника.
         * @param angle Угол, на который поворачивается радиус-вектор.
         * @return Координата оси Y вершины.
        */
        double VertexY(double angle) const;

        /**
         * @brief Вычисляет координаты вершин гексагона и добавляет их в vector.
         */
        const void Math();
    public:

        /**
         * @brief Конструктор класса Hexagon.
         * @param centre Координаты центра шестиугольника.
         * @param lenght Длина ребра шестиугольника.
         */
        Hexagon(const Point centre, const double lenght);
        
        /**
         * @brief Вычисление площади шестиугольника.
         * @return Площадь шестиугольника.
         */
        double Area() const;

        /**
         * @brief Вычисление периметра шестиугольника.
         * @return Периметр шестиугольника.
         */
        double Perimeter() const;

        /**
         * @brief Вычисление радиуса описанной окружности.
         * @return Радиус описанной окружности.
         */
        double RadiusOfCircle() const;

        /**
         * @brief Оператор вывода объекта Hexagon в поток.
         * @param os Поток вывода.
         * @param hexagon Объект типа Hexagon, который нужно вывести.
         * @return Поток вывода.
         */
        friend std::ostream& operator << (std::ostream& os, const Hexagon& hexagon);
};
