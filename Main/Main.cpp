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
    std::cout <<"Vector3 float: "<<v1.ToString()<<std::endl;
    std::cout <<"Vector3 int: "<<v2.ToString()<<std::endl;
    std::cout <<"Vector3 double: "<<v3.ToString()<<std::endl;
    std::cout <<"Vector3 char: "<<v4.ToString()<<std::endl;
    std::cout <<"Vector3 unsigned int of -4's: "<<v5.ToString()<<std::endl;
    std::cout <<"Vector3 unsigned int: "<<v6.ToString()<<std::endl;

    // test nomralization
    Vector3<float> normalizeVec(1, 1, 1);
    std::cout <<"Before Normalisation: "<<normalizeVec.ToString()<<std::endl;
    normalizeVec.Normalize();
    std::cout <<"After Normalisation: "<<normalizeVec.ToString()<<std::endl;

    // test Adding and subtracting vectors
    Vector3<float> addVec(1, 1, 1);
    std::cout << "Before Addition: "<<addVec.ToString()<<std::endl;
    addVec.Add(addVec);
    std::cout << "After adding itself: "<<addVec.ToString()<<std::endl;
    addVec.Subtract(addVec);
    std::cout << "After Subtracting itself: "<<addVec.ToString()<<std::endl;

    // test distance to
    Vector3<float> pos1(0, 0, 0);
    Vector3<float> pos2(1, 1, 1);
    std::cout << "Distance between pos1 & pos2: "<<pos1.DistanceTo(pos2)<<std::endl;

    // test dot product
    Vector3<float> pos3(1, 1, 1);
    Vector3<float> pos4(2, 2, 2);
    std::cout << "Dot product of pos3 & pos4: "<<pos3.DotProduct(pos4)<<std::endl;

    // test Cross product
    Vector3<float> pos5(1, 2, 3);
    Vector3<float> pos6(4, 5, 6);
    std::cout << "Cross product of Pos5 & pos6: "<<pos5.CrossProduct(pos6).ToString()<<std::endl;

    return 0;
}