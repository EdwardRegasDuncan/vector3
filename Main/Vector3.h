#ifndef VECTOR3_H
#define VECTOR3_H

#include <iostream>
#include <math.h>
#include <sstream>


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
    void Subtract(const Vector3<T>& vec);

    float DistanceTo(const Vector3<T>& target);
    float DotProduct(const Vector3<T>& target);
    Vector3<float> CrossProduct(const Vector3<T>& target);
    float AngleBetween(const Vector3<T>& target);


    std::string ToString();
private:
    T x, y, z;

};


#endif