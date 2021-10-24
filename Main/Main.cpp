#include <iostream>
#include "Vector3.h"

int main()
{
    float x = 1;
    float y = 1;
    float z = 1;

    Vector3<float> v1(x, y, z);
    Vector3<float> v2(2, 2, 2);
    Vector3<float> v3(0, 0, 0);

    std::cout <<"Vector3 #1: "<<v1.GetX()<<", "<<v1.GetY()<<", "<<v1.GetZ()<<std::endl;
    std::cout <<"Vector3 #2: "<<v2.GetX()<<", "<<v2.GetY()<<", "<<v2.GetZ()<<std::endl;
    std::cout <<"Vector3 #3: "<<v3.GetX()<<", "<<v3.GetY()<<", "<<v3.GetZ()<<std::endl;



    return 0;
}