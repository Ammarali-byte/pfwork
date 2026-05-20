#include <iostream>
using namespace std;
int calculatevowels(char arr[]);
int calculateconstants(char arr[]);

main()
{
    char word[100];
    cout<<"Enter the string ";
    cin>>word;
    int vowels = calculatevowels(word);
    int constants = calculateconstants(word);

    cout<<"The Vowels in the strings are : "<<vowels;
    cout << "The constants in the strings are : " << constants;
}

int calculatevowels(char arr[])
{
    int i = 0 ;
    int vowelcount = 0 ;
    while( arr[i] != '\0')
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U' )
        {
            vowelcount++;
            i++;
        }
    }
    return vowelcount;
}
int calculateconstants(char arr[])
{
    int i = 0;
    int constants = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] != 'a' && arr[i] != 'e' && arr[i] != 'i' && arr[i] != 'o' && arr[i] != 'u' && arr[i] != 'A' && arr[i] != 'E' && arr[i] != 'I' && arr[i] != 'O' && arr[i] != 'U')
        {
            constants++;
            i++;
        }
    }
    return constants;
}