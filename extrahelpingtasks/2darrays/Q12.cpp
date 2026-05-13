#include <iostream>
using namespace std;
void inputMatrix(int arr[][100], int m, int n);
bool symmetric(int arr[][100], int transpose[][100], int m, int n);

main()
{
    int m, n;
    cout << "Enter the number of rows : ";
    cin >> m;
    cout << "Enter the number of columns : ";
    cin >> n;
    int arr[m][100];
    int transpose[m][100];
    inputMatrix(arr, m, n);
    if(symmetric(arr, transpose, m, n))
    {
        cout<<"Matrix is symmetric ";
    }
    else{
        cout << "Matrix is not symmetric ";
    }
   
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
bool symmetric(int arr[][100], int transpose[][100], int m, int n)
{

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if( transpose[i][j] != arr[i][j])
           {
                return false;
           }
        }
    }
    return true;
}
