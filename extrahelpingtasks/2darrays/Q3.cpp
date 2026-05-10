#include <iostream>
using namespace std;
void inputmatrix(int arr[][100], int m, int n);
void sumrows(int arr[][100], int m, int n);
main()
{
    int m, n;
    cout << "Enter the number of rows : ";
    cin >> m;
    cout << "Enter the number of columns : ";
    cin >> n;
    int arr[m][100];
    inputmatrix(arr, m, n);
    cout << "the sum of rows is " << endl;
    sumrows(arr,m,n);
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
void sumrows(int arr[][100], int m, int n)
{

    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "sum of row " << i + 1 <<" : "<<sum<<endl;
    }
}