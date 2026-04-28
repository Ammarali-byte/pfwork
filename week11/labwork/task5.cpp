#include <iostream>
using namespace std;
bool identity(int arr[3][3]);
main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the element at position [" << i << "]" << "[" << j << "]";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    if (identity(arr) == true)
    {
        cout << "Matrix is identity matrix ";
    }
    else
    {
        cout << "Matrix is not an identity matrix ";
    }
}
bool identity(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 1 && arr[0][2] == 1 && arr[2][0] == 1)
            {
                return true;
            }
        }
    }
    return false;
}