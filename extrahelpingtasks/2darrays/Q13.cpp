#include <iostream>
using namespace std;
void inputmatrix(int arr[][100], int m, int n);
void search(int arr[][100], int m, int n, int target);
main()
{
    int rows, cols;
    cout << "Enter number of rows ";
    cin >> rows;
    cout << "Enter number of cols ";
    cin >> cols;
    int target;

    int arr[rows][100];
    inputmatrix(arr, rows, cols);
    cout << "Enter the number you want to search ";
    cin >> target;
    search(arr, rows, cols, target);
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
void search(int arr[][100], int m, int n, int target)
{
    bool found = false;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == target)
            {
                cout<<target<<" is fount at row no " <<i+1 <<"and column no  "<< j+1;
                found = true;
            }
        }
    }
   if (!found)
   {
    cout<<"Element not found ";
   }
}