#include <iostream>
using namespace std;
void reverse();

main()
{
 reverse();  
}
void reverse()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter numbers one per line ";
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
}
