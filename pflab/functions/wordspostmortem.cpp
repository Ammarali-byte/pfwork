#include <iostream>

using namespace std;
main()
{
    char word[100];
    cout << "Enter the word you want to enter ";
    cin >> word;
    int i = 0;
    while (word[i] != '\0')
    {
        cout<<word[i]<<" is fond at position "<<i<<endl;
        i++;
    }
}