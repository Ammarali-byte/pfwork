#include <iostream>
using namespace std;

const int size = 3;

char board[size][size] =
    {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}};

bool checkrows(char symbol);
bool checkcols(char symbol);
bool checkprimarydigonal(char symbol);
bool checksecdigonal(char symbol);
bool iswinner(char symbol);
bool draw(char symbol, char symbol1);
void inputfromplayer1(char symbol);
void inputfromplayer2(char symbol);
void displayboard();

int main()
{
    char symbol1;
    cout << "Enter the symbol for player 1 ";
    cin >> symbol1;

    char symbol2;
    cout << "Enter the symbol for player 2 ";
    cin >> symbol2;

    // Display empty board first
    displayboard();

    for (int i = 1; i <= 5; i++)
    {
        inputfromplayer1(symbol1);

        // Display board after player 1 move
        displayboard();

        if (iswinner(symbol1))
        {
            cout << "Player 1 won ";
            return 0;
        }

        if (i == 5)
        {
            break;
        }

        inputfromplayer2(symbol2);

        // Display board after player 2 move
        displayboard();

        if (iswinner(symbol2))
        {
            cout << "Player 2 won ";
            return 0;
        }
    }

    if (draw(symbol1, symbol2))
    {
        cout << "Match draw none of the both won ";
    }

    return 0;
}

void displayboard()
{
    cout << endl;

    cout << "   1   2   3" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << char('A' + i) << " ";

        for (int j = 0; j < size; j++)
        {
            cout << " " << board[i][j] << " ";

            if (j < size - 1)
            {
                cout << "|";
            }
        }

        cout << endl;

        if (i < size - 1)
        {
            cout << "  ---|---|---" << endl;
        }
    }

    cout << endl;
}

bool checkrows(char symbol)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;

        for (int j = 0; j < size; j++)
        {
            if (board[i][j] == symbol)
            {
                count++;
            }
        }

        if (count == size)
        {
            return true;
        }
    }

    return false;
}

bool checkcols(char symbol)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;

        for (int j = 0; j < size; j++)
        {
            if (board[j][i] == symbol)
            {
                count++;
            }
        }

        if (count == size)
        {
            return true;
        }
    }

    return false;
}

bool checkprimarydigonal(char symbol)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (board[i][i] == symbol)
        {
            count++;
        }
    }

    if (count == size)
    {
        return true;
    }

    return false;
}

bool checksecdigonal(char symbol)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (board[i][size - 1 - i] == symbol)
        {
            count++;
        }
    }

    if (count == size)
    {
        return true;
    }

    return false;
}

bool iswinner(char symbol)
{
    if (checkrows(symbol) || checkcols(symbol) || checkprimarydigonal(symbol) || checksecdigonal(symbol))
    {
        return true;
    }

    return false;
}

bool draw(char symbol, char symbol1)
{
    if (!iswinner(symbol) && !iswinner(symbol1))
    {
        return true;
    }

    return false;
}

void inputfromplayer1(char symbol)
{
    string coordinate;
    while (true)
    {
        cout << " Enter The coordinate for your move like A1,B2 (FIRST PLAYER) ";
        cin >> coordinate;

        int row = coordinate[0] - 'A';
        int cols = coordinate[1] - '1';

        if (board[row][cols] == ' ')
        {
            board[row][cols] = symbol;
            break;
        }
        else
        {
            cout << "Already entered here please add somewhere  other : \n\n\n";
        }
    }
}

void inputfromplayer2(char symbol)
{
    string coordinate;

    while (true)
    {
        cout << " Enter The coordinate for your move like A1,B2 (SECOND PLAYER)";
        cin >> coordinate;

        int row = coordinate[0] - 'A';
        int cols = coordinate[1] - '1';

        if (board[row][cols] == ' ')
        {
            board[row][cols] = symbol;
            break;
        }
        else
        {
            cout << "Already entered here please add somewhere  other : \n\n\n";
        }
    }
}