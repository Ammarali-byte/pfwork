#include <iostream>
using namespace std;
void inputMatrix(int arr[][100], int m, int n);
void transposeMatrix(int arr[][100],int transpose[][100] ,int m, int n);
void printMatrix(int arr[][100], int m, int n);
main()
{
    int m, n;
    cout << "Enter the number of rows : ";
    cin >> m;
    cout << "Enter the number of columns : ";
    cin >> n;
    int arr[m][100];
    int transpose[m][100];
    inputMatrix(arr , m , n);
    transposeMatrix(arr,transpose,m ,n);
    cout<<"after transposed \n";
    printMatrix(transpose , m , n);

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
void transposeMatrix(int arr[][100], int transpose[][100], int m, int n)
{
  
    for(int i = 0 ; i < m ; i++ ){
        for (int j = 0 ; j < n ; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    }

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