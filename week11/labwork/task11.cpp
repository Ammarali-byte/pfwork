#include <iostream>
using namespace std;

char world[5][5] = {
    {'-', '#', '-', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}};

bool gravityOn = true;
bool isBlackHole = true;

// Display
void DisplayWorld()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << world[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

// Gravity ON/OFF
void SetGravityStatus(bool status)
{
    gravityOn = status;
}

// Apply one tick
void applyGravityOnce()
{
    for (int j = 0; j < 5; j++)
    {
        // 🔻 HANDLE BLACK HOLE FIRST (last row)
        if (isBlackHole && world[4][j] == '#')
        {
            if (world[0][j] == '-') // top empty
            {
                world[0][j] = '#';
                world[4][j] = '-';
            }
        }

        // 🔻 NORMAL FALL (bottom → up)
        for (int i = 3; i >= 0; i--)
        {
            if (world[i][j] == '#' && world[i + 1][j] == '-')
            {
                world[i + 1][j] = '#';
                world[i][j] = '-';
            }
        }
    }
}

// Time ticks
void TimeTick(int times)
{
    if (!gravityOn)
        return;

    for (int t = 0; t < times; t++)
        applyGravityOnce();
}

// DRIVER
int main()
{
    cout << "Initial World:\n";
    DisplayWorld();

    cout << "After 1 Tick:\n";
    TimeTick(1);
    DisplayWorld();

    cout << "After 3 More Ticks:\n";
    TimeTick(3);
    DisplayWorld();

    return 0;
}