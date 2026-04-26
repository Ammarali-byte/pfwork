#include <iostream>
using namespace std;
char nextletter(char word[]);
main()
{
    char word[100];
    cout << "Enter the word ";
    cin >> word;
    char newword = nextletter(word);
}
char nextletter(char word[])
{
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            if (word[i] == 'z')
            {
                word[i] == 'a';
            }
            else
            {
                word[i] = word[i] + 1;
            }
        }
    }
    cout << word;
}
