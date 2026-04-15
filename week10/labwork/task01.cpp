#include <iostream>
using namespace std;
float sum(float number1, float number2 );

main()
{
    float n1, n2;
    cout << "Enter first numbar : ";
    cin >> n1;
    cout << "Enter second numbar : ";
    cin >> n2;
    float add = sum(n1, n2);
    cout <<"Sum is : "<< add;
}
float sum(float number1, float number2)
{
    float add = number1 + number2;
    return add;
}
