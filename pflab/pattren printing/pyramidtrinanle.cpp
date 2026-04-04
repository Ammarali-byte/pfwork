#include <iostream>
using namespace std;
main()
{
    cout << "enter the size of triangle  : ";
    int n;
    cin >> n;
    // system("Color 07");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}