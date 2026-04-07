#include <iostream>
using namespace std;
main()
{
    int n, count = 0;
    cout << "Enter the number ";
    cin >> n;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    cout << "TOtal digits = " << count;
}