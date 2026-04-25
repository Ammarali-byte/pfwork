#include <iostream>
using namespace std;
char reversename(char word[]);
main()
{
    char word[100];
    cout<<"Enter the word";
    cin>>word;
    reversename(word);
}
char reversename(char word[])
{
    int length = 0;
    while (word[length] != '\0')
    {
        length++;
    }
    for (int i = length; i >= 0; i--)
    {

        cout << word[i];
    }
}