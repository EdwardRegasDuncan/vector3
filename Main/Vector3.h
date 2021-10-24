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

    T GetX() const {return (T)x;}
    T GetY() const {return (T)y;}
    T GetZ() const {return (T)z;}

    float Magnitude();
    void Normalize();

    void Add(const Vector3<T>& vec);
    void Subtract(const Vector3& vec);
private:
    T x, y, z;

};


#endif