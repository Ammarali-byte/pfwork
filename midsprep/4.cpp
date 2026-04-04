#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    cout << "THE sum of individuals digit of a number is : " << sum;
}