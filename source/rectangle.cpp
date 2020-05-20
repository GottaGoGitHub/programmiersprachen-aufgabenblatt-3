#include "rectangle.hpp"

float Rectangle::circumference(){
    float a = max_.x - min_.x;
    float b = max_.y - min_.y;
    float result = 2 * a * b;
    return result;
}