#include <iostream>
using namespace std;
const int rows = 10;
const int cols = 10;

int playerX = 4;
int playerY = 4;

int enemy1X = 2;
int enemy1Y = 2;

int fireX = -1;
int fireY = -1;

bool bulletstatus = false;

char board[rows][cols];
void gamecharacter();
void displaygame();
void moveplayerright();
void moveplayerleft();
void moveplayerup();
void moveplayerdown();
void moveenemy(char object, string direction);
void fire();
void movefire(int times);
main()
{

    gamecharacter();
    char choice;
    while (true)
    {
        system("cls");
        displaygame();
        cout << "\na = Left" << endl;
        cout << "d = Right" << endl;
        cout << "f = Fire" << endl;
        cout << "s = move Fire" << endl;
        cout << "m = Move Enemy Left" << endl;
        cout << "n = Move Enemy Right" << endl;
        cout << "u = Move Enemy up" << endl;
        cout << "b = Move Enemy down" << endl;
        cout << "q = Quit" << endl;

        cout << "\nEnter Choice: ";
        cin >> choice;

        if (choice == 'a')
        {
            moveplayerleft();
        }
        else if (choice == 'd')
        {
            moveplayerright();
        }
        else if (choice == 'f')
        {
            fire();
        }
        else if (choice == 's')
        {
            int times;
            cout << "how many times you want to move ";
            cin >> times;
            movefire(times);
        }
        else if (choice == 'm')
        {
            moveenemy('e', "left");
        }
        else if (choice == 'n')
        {
            moveenemy('e', "right");
        }
        else if (choice == 'u')
        {
            moveenemy('e', "up");
        }
        else if (choice == 'b')
        {
            moveenemy('e', "down");
        }
        else if (choice == 'q')
        {
            break;
        }
    }

    return 0;
}

void gamecharacter()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
            {
                board[i][j] = '#';
            }
            else
            {
                board[i][j] = ' ';
            }
        }
    }

    board[playerX][playerY] = 'p';
    board[enemy1Y][enemy1X] = 'e';
}
void displaygame()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
void moveplayerright()
{
    if (board[playerX][playerY + 1] = ' ')
    {
        board[playerX][playerY] = ' ';
        playerY++;
        board[playerX][playerY] = 'p';
    }
}
void moveplayerleft()
{
    if (board[playerX][playerY - 1] = ' ')
    {
        board[playerX][playerY] = ' ';
        playerY--;
        board[playerX][playerY] = 'p';
    }
}

void moveenemy(char object, string direction)
{
    if (object == 'e')
    {
        if (direction == "right")
        {
            if (board[enemy1X][enemy1Y + 1] = ' ')
            {
                board[enemy1X][enemy1Y] = ' ';
                board[enemy1X][enemy1Y + 1] = 'e';
            }
        }
        else if (direction == "left")
        {
            if (board[enemy1X][enemy1Y - 1] = ' ')
            {
                board[enemy1X][enemy1Y] = ' ';
                board[enemy1X][enemy1Y - 1] = 'e';
            }
        }
        else if (direction == "up")
        {
            if (board[enemy1X - 1][enemy1Y] = ' ')
            {
                board[enemy1X][enemy1Y] = ' ';
                board[enemy1X - 1][enemy1Y] = 'e';
            }
        }
        else if (direction == "down")
        {
            if (board[enemy1X + 1][enemy1Y] = ' ')
            {
                board[enemy1X][enemy1Y] = ' ';
                board[enemy1X + 1][enemy1Y] = 'e';
            }
        }
    }
}
void fire()
{
    if (!bulletstatus)
    {
        fireX = playerX - 1;
        fireY = playerY;

        board[fireX][fireY] = '^';
        bulletstatus = true;
    }
}
void movefire(int times)
{
    if (bulletstatus)
    {
        board[fireX][fireY] = ' ';
        fireY = fireY - times;

        if (fireY <= 0)
        {
            bulletstatus = false;
        }
        else
        {
            if (board[fireX][fireY] == 'e')
            {
                board[fireX][fireY] == 'X';
                bulletstatus = false;
            }
            else
            {
                board[fireX][fireY] == '^';
            }
        }
    }
}
