#include <iostream>
using namespace std;
string shiftNext(string text, char target);
main()
{

    string text;
    cout << "enter the string ";
    cin >> text;
    char target;
    cout << "Enter the target character ";
    cin >> target;
    string modified = shiftNext(text, target);
    cout << modified;
}
string shiftNext(string text, char target)
{
    for (int i = 0; i < text.length() - 1; i++)
    {
        if (text[i] == target)
            if (text[i] == 'z')

            {
                text[i] = 'a';
            }

            else 
            {
                text[i] = text[i] + 1;
            }
    }
    return text;
}