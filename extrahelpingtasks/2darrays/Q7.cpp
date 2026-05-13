#include <iostream>
using namespace std;
void inputmatrix(int arr[][100], int arr2[][100],int row, int cols);
void outputmatrix(int arr[][100], int rows, int cols);
int addmatrix(int arr[][100], int arr2[][100], int rows, int cols);

main()
{
    int rows , cols ;
    cout<<"Enter the number of rows ";
    cin >> rows;
    cout << "Enter the number of columns ";
    cin >> cols;
    int arr[rows][100], arr2[rows][100];
    inputmatrix(arr , arr2 , rows ,cols);
    int result[rows][cols] = addmatrix(arr, arr2, rows, cols);
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
int  addmatrix(int arr[][100], int arr2[][100], int rows, int cols)
{
     int result[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    return result[rows][cols];
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
