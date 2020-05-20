#include "circle.hpp"
#include <cmath>

float Circle::circumference(){
    float result = 2 * M_PI * radius_;
    return result;
}