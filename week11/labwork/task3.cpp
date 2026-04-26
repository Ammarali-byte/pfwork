#include <iostream>
using namespace std;
int bluecars(int cars[][5], int column);
main()
{
    int cars[5][5] = {{10, 7, 12, 10, 4},
                      {18, 11, 15, 17, 2},
                      {23, 19, 12, 16, 14},
                      {7, 12, 0, 6, 2},
                      {3, 5, 6, 2, 1}};
    int column;
    cout << "Enter the col no of blue car ";
    cin >> column;
    int sum = bluecars(cars, column);
    cout<<"sum of blue cars is "<<sum;
}
int bluecars(int cars[][5], int column)
{
int sum = 0;
    for (int j = 0; j < 5; j++)
    {
        sum = sum + cars[j][column] ;
    }
    return sum;
}