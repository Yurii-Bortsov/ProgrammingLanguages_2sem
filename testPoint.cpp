#include <iostream>
#include <gtest/gtest.h>
#include "hexagon.h"

TEST(point, equality)
{
    // arrange
    Point first_point(-3.2, 3.14);
    Point second_point(-3.2, 3.14);

    // act 
    bool act = (first_point == second_point);

    // assert
    ASSERT_EQ(true, act);
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