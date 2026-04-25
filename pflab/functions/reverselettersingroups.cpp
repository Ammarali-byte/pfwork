#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter how many numbers you want to store ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for ( int i = 2 ; i >= 0; i-- ){
        cout<<arr[i]<<" ";
    }
    for (int i = 5; i > 2; i--)
    {
        cout << arr[i]<<" ";
    }
    for (int i = 8; i > 5; i--)
    {
        cout << arr[i]<<" ";
    }
}