#include <iostream>
using namespace std;
void inputmatrix(int arr[][100], int arr2[][100], int row, int cols);
void outputmatrix(int arr[][100], int rows, int cols);
void addmatrix(int arr[][100], int arr2[][100],int result[][100], int rows, int cols);

main()
{
    int rows, cols;
    cout << "Enter the number of rows ";
    cin >> rows;
    cout << "Enter the number of columns ";
    cin >> cols;
    int arr[100][100], arr2[100][100];
    inputmatrix(arr, arr2, rows, cols);
    int result[100][100];
    addmatrix(arr, arr2,result, rows, cols);
    outputmatrix(result, rows, cols);
}
void inputmatrix(int arr[][100], int arr2[][100], int row, int cols)
{
    cout << "Enter ist matrix \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter the element for location [" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
    }
    cout << "Enter second matrix \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter the element for location [" << i << "][" << j << "] : ";
            cin >> arr2[i][j];
        }
    }
}
void addmatrix(int arr[][100], int arr2[][100],int result[][100], int rows, int cols)
{
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = arr[i][j] + arr2[i][j];
        }
    }
   
}
void outputmatrix(int arr[][100], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
