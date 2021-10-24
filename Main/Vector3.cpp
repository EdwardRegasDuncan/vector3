#include "Vector3.h"

template<typename T>
float Vector3<T>::Magnitude(){
    return std::sqrt((x*x) + (y*y) + (z*z));
}

template<typename T>
void Vector3<T>::Normalize(){
    float magnitude = Vector3<T>::Magnitude();
    x /= magnitude;
    y /= magnitude;
    z /= magnitude;
}

template<typename T>
void Vector3<T>::Add(const Vector3& vec){
    x += vec.GetX();
    y += vec.GetY();
    z += vec.GetZ();
}
template<typename T>
void Vector3<T>::Subtract(const Vector3& vec){
    x -= vec.GetX();
    y -= vec.GetY();
    z -= vec.GetZ();
}

template<typename T>
std::string Vector3<T>::ToString(){
    std::stringstream ss;
    ss << "x: "<<x<<" y: "<<y<<" z: "<<z;
    return std::string(ss.str());
}

template<typename T>
float Vector3<T>::DistanceTo(const Vector3<T>& target){
    Vector3<float> diff(this->GetX()-target.GetX(), this->GetY()-target.GetY(), this->GetZ()-target.GetZ());
    return diff.Magnitude();
}

template<typename T>
float Vector3<T>::DotProduct(const Vector3<T>& target){
    Vector3<float> dProd(this->GetX()*target.GetX(), this->GetY()*target.GetY(), this->GetZ()*target.GetZ());
    return dProd.GetX()+dProd.GetY()+dProd.GetZ();
}

template<typename T>
Vector3<float> Vector3<T>::CrossProduct(const Vector3<T>& target){
    Vector3<float> cProd(
        (this->GetY() * target.GetZ()) - (this->GetZ() * target.GetY()),
        (this->GetZ() * target.GetX()) - (this->GetX() * target.GetZ()),
        (this->GetX() * target.GetY()) - (this->GetY() * target.GetX())
    );
    return cProd;
}

//template declarations
template void Vector3<float>::Normalize();
template void Vector3<int>::Normalize();

template void Vector3<float>::Add(const Vector3<float>& vec);
template void Vector3<int>::Add(const Vector3<int>& vec);

template void Vector3<float>::Subtract(const Vector3<float>& vec);
template void Vector3<int>::Subtract(const Vector3<int>& vec);

template float Vector3<float>::DistanceTo(const Vector3<float>& target);
template float Vector3<int>::DistanceTo(const Vector3<int>& target);

template float Vector3<float>::DotProduct(const Vector3<float>& target);

template Vector3<float> Vector3<float>::CrossProduct(const Vector3<float>& target);
//string output
template std::string Vector3<float>::ToString();
template std::string Vector3<int>::ToString();
template std::string Vector3<double>::ToString();
template std::string Vector3<char>::ToString();
template std::string Vector3<unsigned int>::ToString();
