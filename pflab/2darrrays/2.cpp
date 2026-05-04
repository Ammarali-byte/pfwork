#include <iostream>
using namespace std;
int countidentical(int arr[][3], int n);
main()
{
    int n;
    cout << "Enter the number of rows ";
    cin >> n;
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the element at position [" << i << "]" << "[" << j << "]";
            cin >> arr[i][j];
        }
    }
    int count = countidentical(arr,n);
    cout<<"identical Rows : "<<count;
}
int countidentical(int arr[][3], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i][0] == arr[j][0] && arr[i][1] == arr[j][1] && arr[i][2] == arr[j][2])
            {
                count++;
            }
        }
    }
    return count;
}