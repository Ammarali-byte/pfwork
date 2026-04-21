#include <iostream>
#include <cmath>
using namespace std;

float height(float distance, float elevation);
main()
{
    float distance, elevation, high;
    cout << "Enter the distance from the base of a tree ";
    cin >> distance;
    cout << "Enter the angle of elevation ( in degrees) ";
    cin >> elevation;
    high = height(distance, elevation);
    cout << "Height of tree is " << high;
}
float height(float distance, float elevation)
{
    float radian =  elevation/57.2958;
    float height = distance * tan(radian);
    return height;
}