#include <iostream>
using namespace std;

int multiply(int num);
main()
{
    int number, result;
    cout << "Enter the number :";
    cin >> number;
    result = multiply(number);
    cout << "The Result is " << result;
}
int multiply(int num)
{
    return num * 5;
}
