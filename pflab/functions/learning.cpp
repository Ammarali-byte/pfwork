#include <iostream>
// #include<cmath>
using namespace std;
float sum(float a, float b);

    main()
{
    float a, b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter its power : ";
    cin >> b;

    float add = sum(a, b);
    cout << "Add  : " << add;
}
float sum(float a, float b)
{
    return a + b;
}