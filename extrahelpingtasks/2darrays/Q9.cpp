#include <iostream>
using namespace std;
void inputmatrix(int arr[][100], int m, int n);
int largest(int arr[][100], int m, int n);
main()
{
    int m, n;
    cout << "Enter the number of rows : ";
    cin >> m;
    cout << "Enter the number of columns : ";
    cin >> n;
    int arr[m][100];
    inputmatrix(arr, m, n);
    int smallest = largest(arr, m, n);
    cout<<"The smallest element of matrix is : "<<smallest;
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
int largest(int arr[][100], int m, int n)
{
    int smallest = arr[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] < smallest )
            {
                smallest = arr[i][j];
            }
        }
    }
   return smallest;
}