#include <iostream>
using namespace std;
void searchcharacter(string word, char target);
main()
{
    string word;
    cout << "Enter the String :";
    cin >> word;
    char target;
    cout << "Enter the alphabet for searching ";
    cin >> target;
    searchcharacter(word, target);
}
void searchcharacter(string word, char target)
{
    bool found = false;
    int i = 0;
    while (word[i] != '\0')
    {
        if (word[i] == target)
        {
            cout << target << " is found at index " << i;

            found = true;
        }
        i++;
    }

    if (!found)
    {
        cout << "Alphabet not found ";
    }
}