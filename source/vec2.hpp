#ifndef VEC2_HPP
#define VEC2_HPP

struct Vec2{
    float x = 0.0;
    float y = 0.0;

    Vec2& operator+=(Vec2 const& v);
    Vec2& operator-=(Vec2 const& v);
    Vec2& operator*=(float s);
    Vec2& operator/=(float s);

};

#endif //VEC2_HPP