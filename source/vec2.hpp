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

Vec2 operator+(Vec2 const& u, Vec2 const& v);
Vec2 operator-(Vec2 const& u, Vec2 const& v);
Vec2 operator*(Vec2 const& u, float s);
Vec2 operator/(Vec2 const& u, float s);
Vec2 operator*(float s, Vec2 const& v);

#endif //VEC2_HPP