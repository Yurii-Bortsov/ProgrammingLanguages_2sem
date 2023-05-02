#include "math.h"
#include <iostream>
#include <limits>

bool doubleAreEqual(const double value1, const double value2, const double accuracy)
{
    return ((value1 - value2) < accuracy);
}

bool doubleAreEqual(const double value1, const double value2)
{
    return ((value1 - value2) < std::numeric_limits<double>::min());
}