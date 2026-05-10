#include <iostream>
using namespace std;
void inputmatrix(int arr[][100], int m, int n);
void sumcolumns(int arr[][100], int m, int n);
main()
{
    int m, n;
    cout << "Enter the number of rows : ";
    cin >> m;
    cout << "Enter the number of columns : ";
    cin >> n;
    int arr[m][100];
    inputmatrix(arr, m, n);
    cout << "the sum of columns is " << endl;
    sumcolumns(arr, m, n);
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
void sumcolumns(int arr[][100], int m, int n)
{

    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i][j];
        }
        cout << "sum of column  " << j + 1 << " : " << sum << endl;
    }
}