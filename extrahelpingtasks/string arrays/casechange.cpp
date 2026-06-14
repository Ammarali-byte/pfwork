#include <iostream>
using namespace std;
string toUpperCase(char arr[]);
string toLowerCase(char arr[]);
main()
{
    char word[100];
    cout<<"Enter a string ";
    cin.getline(word,100);
    toUpperCase( word);
    cout<<"Upper Case Letters ";
    cout<<word;
    toLowerCase(word);
    cout << "\nLower Case Letters ";
    cout << word;
}
string toUpperCase(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 32;
            
        }
        i++;
    }
    
}
string toLowerCase(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] = arr[i] + 32;
            
        }
        i++;
    }
    
}