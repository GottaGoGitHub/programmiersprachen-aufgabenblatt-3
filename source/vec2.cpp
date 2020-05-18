#include"vec2.hpp"
#include<iostream>

Vec2& Vec2::operator+=(Vec2 const& v){
    x += v.x;
    y += v.y;

    return *this;
}
Vec2& Vec2::operator-=(Vec2 const& v){
    x -= v.x;
    y -= v.y;

    return *this;
}
Vec2& Vec2::operator*=(float s){
    x *= s;
    y *= s;

    return *this;
}
Vec2& Vec2::operator/=(float s){
    if(s == 0.0){
        std::cout << "Error (can't divide by zero) \n";
        return *this;
    }
    else{
        x /= s;
        y /= s;

        return *this;
    }

}