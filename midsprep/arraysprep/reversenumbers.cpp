#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "how many numbers you wan to enter ";
    cin >> n;
    int num[n];
    cout << "enter th number \n";
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cout << "Reversed numbers ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << num[i] << " ";
    }
}