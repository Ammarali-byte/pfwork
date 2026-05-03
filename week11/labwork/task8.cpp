#include <iostream>
using namespace std;
void swaplargest(int arr[][5], int n);
main()
{
    int n;
    cout << "Enter the number of rows : ";
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
    cout<<"Orignal matrix\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    swaplargest(arr, n);
    cout<<"Matrix after swapping \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void swaplargest(int arr[][5], int n)
{
    int largestCol = 0;
    for (int j = 1; j < 5; j++)
    {
        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < n; i++)
            sum1 += arr[i][largestCol];

        for (int i = 0; i < n; i++)
            sum2 += arr[i][j];

        if (sum2 > sum1)
            largestCol = j;
    }
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i][0];
        arr[i][0] = arr[i][largestCol];
        arr[i][largestCol] = temp;
    }
}
