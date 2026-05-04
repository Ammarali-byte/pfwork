#include <iostream>
using namespace std;

bool isGoal(char field[7][16])
{
    int ballRow = -1, ballCol = -1;
    int leftPost = -1, rightPost = -1;
    int crossbarRow = -1;

    // Step 1: Find ball
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            if (field[i][j] == '0')
            {
                ballRow = i;
                ballCol = j;
            }
        }
    }

    // Step 2: Find posts and crossbar
    for (int j = 0; j < 16; j++)
    {
        if (field[0][j] == '|')
        {
            if (leftPost == -1)
                leftPost = j;
            else
                rightPost = j;
        }

        if (field[1][j] == '-')
        {
            crossbarRow = 1;
        }
    }

    // Step 3: Check condition
    if (ballRow < crossbarRow &&
        ballCol > leftPost &&
        ballCol < rightPost)
    {
        return true;
    }

    return false;
}
main()
{
    char field[7][16] = {
        {' ', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' '},
        {' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', ' '},
        {' ', ' ', ' ', ' ', '0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    if (isGoal(field))
        cout << "GOAL!\n";
    else
        cout << "MISS!\n";

    return 0;
}