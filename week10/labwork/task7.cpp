#include <iostream>
using namespace std;

string checkalph(char ch);
main()
{
    char ch;
    cout << "Enter the alphabet ";
    cin >> ch;
    cout << checkalph(ch);
}
string checkalph(char ch)
{
    if ((char)ch >= 65 && (char)ch <= 90)
    {
        return "letter is capital ";
    }
    else if ((char)ch >= 97 && (char)ch <= 122)
    {
        return "letter is small case";
    }
}