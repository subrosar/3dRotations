#include <iostream>
#include "quaternion.h"


using namespace std;

int main()
{
    const double pi=3.14159;
    vector<double> test;
    test.push_back(1);
    test.push_back(0);
    test.push_back(0);
    vector<double> eulervector;
    eulervector.push_back(0);
    eulervector.push_back(1);
    eulervector.push_back(0);
    vector<double> newPoint=NewPoint(test,pi/2,eulervector);
    cout<<newPoint[0]<<" "<<newPoint[1]<<" "<<newPoint[2];

    return 0;
}
