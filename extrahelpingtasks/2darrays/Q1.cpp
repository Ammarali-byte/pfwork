#include <iostream>
using namespace std;
void inputmatrix(int arr[][100], int m, int n);
void printmatrix(int arr[][100], int m, int n);
main()
{
    int m, n;
    cout << "Enter the number of rows : ";
    cin >> m;
    cout << "Enter the number of columns : ";
    cin >> n;
    int arr[m][100];
    inputmatrix(arr, m, n);
    printmatrix(arr, m, n);
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
void printmatrix(int arr[][100], int m, int n)
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