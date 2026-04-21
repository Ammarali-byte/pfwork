#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int num1, num2;
    cout << "Enter 1st number : ";
    cin >> num1;
    cout << "Enter Second number ";
    cin >> num2;
    int greater = max(num1, num2);
    cout << "The greater number is " << greater;
}