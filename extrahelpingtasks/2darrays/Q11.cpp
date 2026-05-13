#include <iostream>
using namespace std;
void inputMatrix(int arr[][100], int m, int n);
void transposeMatrix(int arr[][100], int m, int n);
void printMatrix(int arr[][100], int m, int n);
main()
{
}
void inputMatrix(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the element at position [" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
    }
}
void transposeMatrix(int arr[][100], int m, int n)
{
}
void printMatrix(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}