#include <iostream>
using namespace std;

int symmetrical(int number);
main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;
    if (symmetrical(number) == true)
    {
        cout << " The number is symmetrical ";
    }
    else
    {
        cout << "Number is not symmetrical";
    }
}
int symmetrical(int number)
{
    bool symmetrical = false;
    int lastdigit = number % 10;
    int firstdigit = number / 100;
    if (firstdigit == lastdigit)
    {
        return symmetrical = true;
    }
    else  
    {
        return symmetrical = false;
    }
}