#include <iostream>
using namespace std;
void swap(int arr[][5], int n);
main()
{
    int n;
    cout << "Enter the number of rows ";
    cin >> n;
    int arr[n][5];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter the element at position [" << i << "]" << "[" << j << "]";
            cin >> arr[i][j];
        }
    }
    cout<<"Orignal array \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    swap(arr, n);
    cout<<"Array after swapping \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void swap(int arr[][5], int n)
{
    int largest = 0;
    for (int i = 0; i < 5; i++)
    {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < n; j++)
        {
            sum1 = sum1 + arr[j][largest];
        }
        for (int j = 0; j < n; j++)
        {
            sum2 = sum2 + arr[j][i];
        }
        if (sum2 > sum1)
        {
            largest = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i][0];
        arr[i][0] = arr[i][largest];
        arr[i][largest] = temp;
    }
}