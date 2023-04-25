#include <iostream>
#include <gtest/gtest.h>
#include "hexagon.h"

TEST(point, int_value_x)
{
    // arrange
    int i = -3;

    // act 
    Point point(i, 0);

    // assert
    ASSERT_EQ(point.x, i);
}

TEST(point, int_value_y)
{
    // arrange
    int j = -3;

    // act 
    Point point(0, j);

    // assert
    ASSERT_EQ(point.y, j);
}

TEST(point, double_value_x)
{
    // arrange
    double i = 3.14;

    // act 
    Point point(i, 0);

    // assert
    ASSERT_FLOAT_EQ(point.x, i);
}

TEST(point, double_value_y)
{
    // arrange
    double j = -3.144;

    // act 
    Point point(0, j);

    // assert
    ASSERT_FLOAT_EQ(point.y, j);
}

TEST(point, output)
{
    // arrange 
    Point point(-5, 3.14);
    std::stringstream buffer;
    std::string testString;

    // act
    buffer << point;
    testString = buffer.str();

    // assert
    ASSERT_EQ("(-5; 3.14)\n", testString);
}