#include"mat2.hpp"

Mat2& Mat2::operator*=(Mat2 const& m){
    float e_00_temp = e_00;
    float e_01_temp = e_01;
    float e_10_temp = e_10;
    float e_11_temp = e_11;

    e_00_temp = e_00_temp * m.e_00 + e_10_temp * m.e_01;
    e_01_temp = e_01_temp * m.e_00 + e_11_temp * m.e_01;
    e_10_temp = e_00_temp * m.e_10 + e_10_temp * m.e_11;
    e_11_temp = e_01_temp * m.e_10 + e_11_temp * m.e_11;

    e_00 = e_00_temp;
    e_01 = e_01_temp;
    e_10 = e_10_temp;
    e_11 = e_11_temp;

    return *this;
}

Mat2 operator*(Mat2 const& m1, Mat2 const& m2){
    Mat2 temp{m1};
    temp *= m2;
    return temp;
}