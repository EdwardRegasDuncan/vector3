#ifndef VECTOR3_H
#define VECTOR3_H

#include <iostream>
#include <math.h>

template<typename T>

class Vector3
{
public:
    Vector3() = default;
    Vector3<T>(T xyz) : x(xyz), y(xyz), z(xyz) {};
    Vector3<T>(T x, T y, T z) : x(x), y(y), z(z) {};

    float GetX() const {return x;}
    float GetY() const {return y;}
    float GetZ() const {return z;}
private:
    T x, y, z;

};

#endif