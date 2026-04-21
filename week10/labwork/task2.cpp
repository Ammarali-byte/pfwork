#include <iostream>
#include <cmath>
using namespace std;

main()
{
    float num, exponent;
    cout << "Enter the  base number ";
    cin >> num;
    cout << "Enter the exponent ";
    cin >> exponent;
    float result = pow(num, exponent);
    cout << num << " raised to the power " << exponent << " is " << result;
}
