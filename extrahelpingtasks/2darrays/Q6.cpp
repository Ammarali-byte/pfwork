#include <iostream>
using namespace std;
void inputmatrix(int arr[][100], int m, int n);
int secondarydigonalsum(int arr[][100], int m, int n);
main()
{
    int m, n;
    cout << "Enter the number of rows : ";
    cin >> m;
    cout << "Enter the number of columns : ";
    cin >> n;
    int arr[m][100];
    inputmatrix(arr, m, n);
    int sum = secondarydigonalsum(arr, m, n);
    cout << "the sum of secondary digonal is : " << sum;
}
void inputmatrix(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the element [" << i << "][" << j << " :";
            cin >> arr[i][j];
        }
    }
}
int secondarydigonalsum(int arr[][100], int m, int n)
{
    int sum = 0;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (i + j == n - 1)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    return sum;
}
// int secondarydigonalsum(int arr[][100], int m, int n)
// {
//     int sum = 0;
//     for (int j = 0; j < m; j++)
//     {
//                 sum = sum + arr[j][n-j-1];
//     }
//     return sum;
// }