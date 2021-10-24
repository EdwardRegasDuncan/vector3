#include <iostream>
#include "Vector3.h"

int main()
{
    

    

    // test types
    float x = 0;
    float y = 0;
    float z = 0;
    Vector3<float> v1(x, y, z);
    Vector3<int> v2(1, 1, 1);
    Vector3<double> v3(2, 2, 2);
    Vector3<char> v4(3, 3, 3);
    Vector3<unsigned int> v5(-4, -4, -4);
    Vector3<unsigned int> v6(4, 4, 4);
    std::cout <<"Vector3 #1: "<<v1.ToString()<<std::endl;
    std::cout <<"Vector3 #2: "<<v2.ToString()<<std::endl;
    std::cout <<"Vector3 #3: "<<v3.ToString()<<std::endl;
    std::cout <<"Vector3 #4: "<<v4.ToString()<<std::endl;
    std::cout <<"Vector3 #5: "<<v5.ToString()<<std::endl;
    std::cout <<"Vector3 #6: "<<v6.ToString()<<std::endl;

    // test nomralization
    Vector3<float> normalizeVec(1, 1, 1);
    std::cout <<"Before Normalisation: "<<normalizeVec.GetX()<<", "<<normalizeVec.GetY()<<", "<<normalizeVec.GetZ()<<std::endl;
    normalizeVec.Normalize();
    std::cout <<"After Normalisation: "<<normalizeVec.GetX()<<", "<<normalizeVec.GetY()<<", "<<normalizeVec.GetZ()<<std::endl;

    // test Adding vectors
    /* Vector3<float> addVec(1, 1, 1);
    addVec.Add(addVec); */


    return 0;
}