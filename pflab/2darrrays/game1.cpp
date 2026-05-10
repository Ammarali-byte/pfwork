
#include <iostream>
#include <string>
using namespace std;

const int ROWS = 10;
const int COLS = 20;

char board[ROWS][COLS];

int playerX = 10;
int playerY = 8;

int enemyX = 10;
int enemyY = 2;

int fireX = -1;
int fireY = -1;

bool bulletActive = false;

void initializeBoard();
void printBoard();
void movePlayerLeft();
void movePlayerRight();
void fire();
void moveEnemy(char object, string direction);

int main()
{
    initializeBoard();

    char choice;

    while (true)
    {
        system("cls");

        printBoard();

        cout << endl;
        cout << "a = Left" << endl;
        cout << "d = Right" << endl;
        cout << "f = Fire" << endl;
        cout << "m = Move Enemy Left" << endl;
        cout << "n = Move Enemy Right" << endl;
        cout << "q = Quit" << endl;

        cout << "\nEnter Choice: ";
        cin >> choice;

        if (choice == 'a')
        {
            movePlayerLeft();
        }
        else if (choice == 'd')
        {
            movePlayerRight();
        }
        else if (choice == 'f')
        {
            fire();
        }
        else if (choice == 'm')
        {
            moveEnemy('E', "left");
        }
        else if (choice == 'n')
        {
            moveEnemy('E', "right");
        }
        else if (choice == 'q')
        {
            break;
        }
        moveFire(1);
    }

    return 0;
}
void initializeBoard()
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (i == 0 || i == ROWS - 1 || j == 0 || j == COLS - 1)
            {
                board[i][j] = '#';
            }
            else
            {
                board[i][j] = ' ';
            }
        }
    }

    board[playerY][playerX] = 'P';

    board[enemyY][enemyX] = 'E';
}
void printBoard()
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
}
void movePlayerLeft()
{
    if (board[playerY][playerX - 1] == ' ')
    {
        board[playerY][playerX] = ' ';
        playerX--;
        board[playerY][playerX] = 'P';
    }
}
void movePlayerRight()
{
    if (board[playerY][playerX + 1] == ' ')
    {
        board[playerY][playerX] = ' ';
        playerX++;
        board[playerY][playerX] = 'P';
    }
}
void fire()
{
    if (!bulletActive)
    {
        fireX = playerX;
        fireY = playerY - 1;

        board[fireY][fireX] = '^';

        bulletActive = true;
    }
}

void moveFire(int timeStep)
{
    if (bulletActive)
    {
        board[fireY][fireX] = ' ';

        fireY = fireY - timeStep;

        // Bullet hits top wall
        if (fireY <= 0)
        {
            bulletActive = false;
        }
        else
        {
            // Bullet hits enemy
            if (board[fireY][fireX] == 'E')
            {
                board[fireY][fireX] = 'X';
                bulletActive = false;
            }
            else
            {
                board[fireY][fireX] = '^';
            }
        }
    }
}

void moveEnemy(char object, string direction)
{
    if (object == 'E')
    {
        board[enemyY][enemyX] = ' ';

        if (direction == "left")
        {
            if (board[enemyY][enemyX - 1] == ' ')
            {
                enemyX--;
            }
        }
        else if (direction == "right")
        {
            if (board[enemyY][enemyX + 1] == ' ')
            {
                enemyX++;
            }
        }
        else if (direction == "up")
        {
            if (board[enemyY - 1][enemyX] == ' ')
            {
                enemyY--;
            }
        }
        else if (direction == "down")
        {
            if (board[enemyY + 1][enemyX] == ' ')
            {
                enemyY++;
            }
        }

        board[enemyY][enemyX] = 'E';
    }
}
