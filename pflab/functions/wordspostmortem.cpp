#include <iostream>
using namespace std;
char wordspostmortem(char word[]);
    main()
{
    char word[100];
    cout << "Enter the word you want to enter ";
    cin >> word;
    wordspostmortem(word);
}
char wordspostmortem(char word[])
{
    for (int i = 0; word[i] != '\0'; i++)
    {
        cout << word[i] << " is founr at postion " << i
             << endl;
    }
}