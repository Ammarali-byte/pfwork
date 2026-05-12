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
    largest( arr, m, n);
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
    int largest = arr[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if (arr[i][j] > largest )
           {
            largest  = arr[i][j];
           }
        }
    }
   cout<<"The largest element is : "<<largest;
}