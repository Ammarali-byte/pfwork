#include <iostream>
using namespace std;

// Global world (5x5)
char world[5][5] = {
    {'-', '#', '-', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}};

bool gravityOn = true;
void DisplayWorld()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << world[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void SetGravityStatus(bool status)
{
    gravityOn = status;
}

void applyGravityOnce()
{
    for (int j = 0; j < 5; j++) // column-wise
    {
        for (int i = 3; i >= 0; i--) // bottom to top
        {
            if (world[i][j] == '#' && world[i + 1][j] == '-')
            {
                // swap
                world[i + 1][j] = '#';
                world[i][j] = '-';
            }
        }
    }
}


void TimeTick(int times)
{
    if (!gravityOn)
        return;

    for (int t = 0; t < times; t++)
    {
        applyGravityOnce();
    }
}


 main()
{
    cout << "Initial World:\n";
    DisplayWorld();

    cout << "Applying 1 Tick:\n";
    TimeTick(1);
    DisplayWorld();

    cout << "Applying 2 more Ticks:\n";
    TimeTick(2);
    DisplayWorld();

    cout << "Turning Gravity OFF and applying ticks:\n";
    SetGravityStatus(false);
    TimeTick(3);
    DisplayWorld(); // no change expected

    return 0;
}