#include <iostream>
using namespace std;
void inputstring(char arr[], int size);
void outputstring(char arr[]);
main()
{
    int size;
    cout << "Enter the size of character : ";
    cin >> size;
    char word[size];
    inputstring(word, size);
    outputstring(word);
}
void inputstring(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the character at position " << i + 1 << " : ";
        cin >> arr[i];
    }
}
void outputstring(char arr[])
{
    int i = 0 ;
    while(arr[i] != '\0')
    {
        cout<<arr[i];
        i++;
    }
    
}
