#include "Vector3.h"

template<typename T>
float Vector3<T>::Magnitude(){
    return std::sqrt((x*x) + (y*y) + (z*z));
}

template<typename T>
void Vector3<T>::Normalize(){
    float mag = Vector3<T>::Magnitude();
    x /= mag;
    y /= mag;
    z /= mag;
}

template<typename T>
void Vector3<T>::Add(const Vector3& vec){
    x += vec.GetX();
    y += vec.getY();
    z += vec.GetZ();
}
template<typename T>
void Vector3<T>::Subtract(const Vector3& vec){
    x -= vec.GetX();
    y -= vec.getY();
    z -= vec.GetZ();
}


//template declarations
template void Vector3<float>::Normalize();
template void Vector3<int>::Normalize();
template void Vector3<float>::Add(const Vector3<float>& vec);
template void Vector3<int>::Add(const Vector3<int>& vec);
template void Vector3<float>::Subtract(const Vector3<float>& vec);
template void Vector3<int>::Subtract(const Vector3<int>& vec);
