#include "rectangle.hpp"

float Rectangle::circumference(){
    float a = max_.x - min_.x;
    float b = max_.y - min_.y;
    float result = 4 * a + 4 * b;
    return result;
}


void Rectangle::draw(Window const& w, float thickness) const{
    w.draw_line(min_.x, min_.y, max_.x, min_.y, color_.r, color_.g, color_.b, thickness);
    w.draw_line(max_.x, min_.y, max_.x, max_.y, color_.r, color_.g, color_.b, thickness);
    w.draw_line(min_.x, min_.y, min_.x, max_.y, color_.r, color_.g, color_.b, thickness);
    w.draw_line(min_.x, max_.y, max_.x, max_.y, color_.r, color_.g, color_.b, thickness);
    return;
}
