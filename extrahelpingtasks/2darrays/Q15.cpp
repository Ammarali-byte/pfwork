#include <iostream>
using namespace std;
void inputmatrix(int arr[][100], int m, int n);
void printboundary(int arr[][100], int m, int n);
main()
{
    int m, n;
    cout << "Enter the number of rows : ";
    cin >> m;
    cout << "Enter the number of columns : ";
    cin >> n;
    int arr[m][100];
    inputmatrix(arr, m, n);
    printboundary(arr, m, n);
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
void printboundary(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The boundary elements are : \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}