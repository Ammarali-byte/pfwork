#include <iostream>
#include <string>
using namespace std;

// ---------------- CONSTANTS ----------------
const int ROWS = 20;
const int COLS = 40;

// ---------------- BOARD ----------------
char board[ROWS][COLS];

// ---------------- PLAYER ----------------
int playerX = 20;
int playerY = 17;

int playerHealth = 100;
int playerLives = 3;
int score = 0;

// ---------------- PLAYER BULLET ----------------
int bulletX = -1;
int bulletY = -1;
bool bulletActive = false;

// ---------------- ENEMY 1 ----------------
int enemy1X = 5;
int enemy1Y = 3;
int enemy1Health = 30;

// ---------------- ENEMY 2 ----------------
int enemy2X = 20;
int enemy2Y = 5;
int enemy2Health = 40;

// ---------------- ENEMY 3 ----------------
int enemy3X = 33;
int enemy3Y = 3;
int enemy3Health = 50;

// ---------------- ENEMY BULLET ----------------
int enemyBulletX = -1;
int enemyBulletY = -1;
bool enemyBulletActive = false;

// ---------------- LEVEL ----------------
int level = 1;

// ------------------------------------------------
// INITIALIZE BOARD
// ------------------------------------------------
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

    // LEVEL WALLS
    if (level == 2)
    {
        for (int i = 5; i < 35; i++)
        {
            board[10][i] = '=';
        }
    }

    // PLAYER
    board[playerY][playerX] = 'P';

    // ENEMIES
    if (enemy1Health > 0)
        board[enemy1Y][enemy1X] = 'A';

    if (enemy2Health > 0)
        board[enemy2Y][enemy2X] = 'B';

    if (enemy3Health > 0)
        board[enemy3Y][enemy3X] = 'C';
}

// ------------------------------------------------
// DISPLAY BOARD
// ------------------------------------------------
void printBoard()
{
    system("cls");

    cout << "LEVEL: " << level << endl;
    cout << "SCORE: " << score << endl;
    cout << "HEALTH: " << playerHealth << endl;
    cout << "LIVES: " << playerLives << endl;

    cout << endl;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << board[i][j];
        }

        cout << endl;
    }
}

// ------------------------------------------------
// PLAYER MOVEMENT
// ------------------------------------------------
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

// ------------------------------------------------
// PLAYER FIRE
// ------------------------------------------------
void fire()
{
    if (!bulletActive)
    {
        bulletX = playerX;
        bulletY = playerY - 1;

        bulletActive = true;

        board[bulletY][bulletX] = '^';
    }
}

// ------------------------------------------------
// MOVE PLAYER BULLET
// ------------------------------------------------
void moveBullet()
{
    if (bulletActive)
    {
        board[bulletY][bulletX] = ' ';

        bulletY--;

        // HIT WALL
        if (bulletY <= 0)
        {
            bulletActive = false;
        }

        // HIT ENEMY 1
        else if (bulletY == enemy1Y && bulletX == enemy1X && enemy1Health > 0)
        {
            enemy1Health -= 10;
            bulletActive = false;

            if (enemy1Health <= 0)
            {
                board[enemy1Y][enemy1X] = ' ';
                score += 10;
            }
        }

        // HIT ENEMY 2
        else if (bulletY == enemy2Y && bulletX == enemy2X && enemy2Health > 0)
        {
            enemy2Health -= 10;
            bulletActive = false;

            if (enemy2Health <= 0)
            {
                board[enemy2Y][enemy2X] = ' ';
                score += 20;
            }
        }

        // HIT ENEMY 3
        else if (bulletY == enemy3Y && bulletX == enemy3X && enemy3Health > 0)
        {
            enemy3Health -= 10;
            bulletActive = false;

            if (enemy3Health <= 0)
            {
                board[enemy3Y][enemy3X] = ' ';
                score += 30;
            }
        }

        else
        {
            board[bulletY][bulletX] = '^';
        }
    }
}

// ------------------------------------------------
// ENEMY MOVEMENTS
// ------------------------------------------------

// Enemy 1 -> Left Right
void moveEnemy1()
{
    static bool right = true;

    board[enemy1Y][enemy1X] = ' ';

    if (right)
    {
        enemy1X++;

        if (enemy1X >= 10)
            right = false;
    }
    else
    {
        enemy1X--;

        if (enemy1X <= 2)
            right = true;
    }

    if (enemy1Health > 0)
        board[enemy1Y][enemy1X] = 'A';
}

// Enemy 2 -> Up Down
void moveEnemy2()
{
    static bool down = true;

    board[enemy2Y][enemy2X] = ' ';

    if (down)
    {
        enemy2Y++;

        if (enemy2Y >= 10)
            down = false;
    }
    else
    {
        enemy2Y--;

        if (enemy2Y <= 2)
            down = true;
    }

    if (enemy2Health > 0)
        board[enemy2Y][enemy2X] = 'B';
}

// Enemy 3 -> Diagonal
void moveEnemy3()
{
    static bool left = true;

    board[enemy3Y][enemy3X] = ' ';

    if (left)
    {
        enemy3X--;
        enemy3Y++;

        if (enemy3X <= 25)
            left = false;
    }
    else
    {
        enemy3X++;
        enemy3Y--;

        if (enemy3X >= 35)
            left = true;
    }

    if (enemy3Health > 0)
        board[enemy3Y][enemy3X] = 'C';
}

// ------------------------------------------------
// ENEMY FIRE
// ------------------------------------------------
void enemyFire()
{
    if (!enemyBulletActive && enemy2Health > 0)
    {
        enemyBulletX = enemy2X;
        enemyBulletY = enemy2Y + 1;

        enemyBulletActive = true;

        board[enemyBulletY][enemyBulletX] = '!';
    }
}

// ------------------------------------------------
// MOVE ENEMY BULLET
// ------------------------------------------------
void moveEnemyBullet()
{
    if (enemyBulletActive)
    {
        board[enemyBulletY][enemyBulletX] = ' ';

        enemyBulletY++;

        // HIT PLAYER
        if (enemyBulletY == playerY && enemyBulletX == playerX)
        {
            playerHealth -= 20;

            enemyBulletActive = false;

            if (playerHealth <= 0)
            {
                playerLives--;

                playerHealth = 100;

                if (playerLives <= 0)
                {
                    cout << "\nGAME OVER!" << endl;
                    exit(0);
                }
            }
        }

        // HIT WALL
        else if (enemyBulletY >= ROWS - 1)
        {
            enemyBulletActive = false;
        }

        else
        {
            board[enemyBulletY][enemyBulletX] = '!';
        }
    }
}

// ------------------------------------------------
// LEVEL SYSTEM
// ------------------------------------------------
void checkLevel()
{
    if (score >= 60)
    {
        level = 2;
    }
}

// ------------------------------------------------
// MAIN
// ------------------------------------------------
int main()
{
    initializeBoard();

    char choice;

    while (true)
    {
        printBoard();

        cout << endl;
        cout << "a = Left" << endl;
        cout << "d = Right" << endl;
        cout << "f = Fire" << endl;
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

        else if (choice == 'q')
        {
            break;
        }

        moveBullet();

        moveEnemy1();
        moveEnemy2();
        moveEnemy3();

        enemyFire();
        moveEnemyBullet();

        checkLevel();
    }

    return 0;
}