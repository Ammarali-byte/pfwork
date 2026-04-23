#include <iostream>
using namespace std;
bool isStrong(int n);
main()
{
    int number;
    cout << "Enter the number :";
    cin >> number;
    isStrong(number);
    if (isStrong(number))
    {
        cout << " Number is strong ";
    }
    else
    {
        cout << "Number is not strong ";
    }
}
bool isStrong(int n)
{
    int factorial = 0;
    for (int i = n; i > 0; i /= 10)
    {
        int fact = i % 10;
        int factori = 1;
        for (int j = 1 ; j <= fact; j++)
        {
            factori = factori * j;
        }
        factorial = factorial + factori;
    }
    if (factorial == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}