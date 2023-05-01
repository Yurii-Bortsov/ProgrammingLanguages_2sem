#include <math.h>
#include "hexagon.h"
#include "gtest/gtest.h"

TEST(hexagon, lenghtOutOfRange)
{
    // arrange
    Point centre(0, 0);
    double length = -5.1;
    
    // act & assert
    ASSERT_THROW(Hexagon hexagon(centre, length), std::out_of_range);
}

TEST(hexagon, area)
{
    // arrange
    Point centre(0, 0);
    double lenght = 3.14;
    Hexagon hexagon(centre, lenght);

    // act
    double area = hexagon.Area();
    double calcArea =  25.61599;

    // assert
    ASSERT_NEAR(calcArea, area, 0.00001);
}

TEST(hexagon, perimeter)
{
    // arrange
    Point centre(0, 0);
    double lenght = 3.14;
    Hexagon hexagon(centre, lenght);

    // act
    double perimeter = hexagon.Perimeter();
    double calcPerimeter = 18.84;

    // assert 
    ASSERT_EQ(calcPerimeter, perimeter);
}

TEST(hexagon, radiusOfCircle)
{
    // arrange
    Point centre(0, 0);
    double lenght = 3.14;
    Hexagon hexagon(centre, lenght);

    // act
    double radiusOfCircle = hexagon.RadiusOfCircle();
    double calcRadiusOfCircle = 3.14;

    // assert
    ASSERT_EQ(calcRadiusOfCircle, radiusOfCircle);
}

TEST(hexagon, output)
{
    // arrange 
    Point centre(0, 0);
    double lenght = 3.14;
    Hexagon hexagon(centre, lenght);
    std::stringstream buffer;
    std::string testString;

    // act
    buffer << hexagon;
    testString = buffer.str();

    // assert
    ASSERT_EQ("Точка A = (1.9227e-16; 3.14)\nТочка B = (-2.71932; 1.57)\nТочка C = (-2.71932; -1.57)\nТочка D = (-5.76809e-16; -3.14)\nТочка E = (2.71932; -1.57)\nТочка F = (2.71932; 1.57)\n", testString);
}