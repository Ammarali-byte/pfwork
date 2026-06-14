#include<iostream>
using namespace std;
void removespaces(char arr[]);
main ( )
{
    char word[100];
    cout<<"Enter the string ";
    cin.getline(word,100);
    removespaces(word);
    cout<<word;
}
void removespaces(char arr[])
{
    int i = 0 ;
    int j = 0 ;
    while(arr[i] != '\0')
    {
        if (arr[i] != ' ')
        {
            arr[j] = arr[i];
            j++;
        }
        i++;
    }
    arr[j]= '\0';
}