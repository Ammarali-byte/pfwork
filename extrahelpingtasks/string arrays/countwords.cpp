#include <iostream>
using namespace std;
int countWords(char arr[]);
main()
{
    char arr[100];
    cout<<"ENter the string ";
    cin.getline(arr,100);
    int count = countWords(arr);
    cout<<count;
}
int countWords(char arr[])
{
    int count = 1 ;
    int i = 0 ;
    while (arr[i] != '\0' )
    {
        if (arr[i] == ' ' && arr[i + 1] != ' ')
        {
            count++;
        }
        i++;
    }
    return count;
}