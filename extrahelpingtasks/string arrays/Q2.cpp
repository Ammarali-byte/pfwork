#include <iostream>
using namespace std;
int lengthofstring(char arr[]);

main()
{
    
    char word[100];
    cout<<"Enter the string : ";
    cin>>word;
    int count = lengthofstring(word);
    cout << "The length of string is : " << count;
}

int lengthofstring(char arr[])
{
    int count = 0;
    int i = 0;
    while (arr[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}