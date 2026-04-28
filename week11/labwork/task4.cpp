#include <iostream>
using namespace std;
int returnsum(int matrix[][3], int);
main()
{
    cout << "Enter the size of rows ";
    int r;
    cin >> r;
    int matrix[r][3];
    int sum = returnsum(matrix, r);
    cout << sum;
}
int returnsum(int matrix[][3], int r)
{

    cout << "Enter the element of position \n";
    int sum = 0;
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the element at position ["<<i<<"]"<<"["<<j<<"]" ;
            cin >> matrix[i][j];
            sum = sum + matrix[i][j];
        }
    }
    return sum;
}