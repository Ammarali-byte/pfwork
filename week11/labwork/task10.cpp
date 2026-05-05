
#include <iostream>
using namespace std;
void displayworld();
void setgravitystatus(bool status);
void timetick(int times);

char world[5][5] = {
    {'-', '#', '-', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}};
bool gravity = false;
main()
{
    displayworld();
    setgravitystatus(true);
    timetick(1);
    displayworld();
}

void displayworld()
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
void setgravitystatus(bool status)
{
    gravity = true;
}
void timetick(int times)
{
    if (!gravity)
    {
        return;
    }
    else
    {
        for (int i = 0; i < times; i++)
        {
            for (int i = 3; i >= 0; i--)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (world[i][j] == '#' && world[i + 1][j] == '-')
                    {
                        world[i + 1][j] = '#';
                        world[i][j] = '-';
                    }
                }
            }
        }
    }
}