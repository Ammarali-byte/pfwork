#include <iostream>
using namespace std;
int rotatearray(int arr[], int n, int k);

main()
{
    int n, r;
    cout << "enter the length of array ";
    cin >> n;
    int arr[n];
    cout << "How many times you want to rotate the arrray ";
    cin >> r;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rotatearray(arr, n, r);
    cout << "Array after rotaion ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
int rotatearray(int arr[], int n, int k)
{
    for (int i = 0; i < k; i++)
    {
        int last = arr[n - 1];
        for (int j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
    return arr[n];
}