#include <iostream>
using namespace std;
string check(char grid[5][5], string coordinate);
main()
{
    char grid[5][5] = {
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '*', '.'},
        {'.', '.', '.', '*', '.'},
        {'*', '*', '.', '.', '.'},
        {'.', '.', '.', '.', '*'}};
    string coordinate;
    cout << "Enter the cordinate (like A1 ,A2)";
    cin >> coordinate;
    cout<<check(grid, coordinate);
}
string check(char grid[5][5], string coordinate)
{
    int row = coordinate[0] - 'A';
    int cols = coordinate[1] - '1';
    if (grid[row][cols] == '*')
    {
        return "Boom";
    }
    else
    {
        return "Splash";
    }
}