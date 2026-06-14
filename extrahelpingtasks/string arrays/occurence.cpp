#include <iostream>
using namespace std;
int countOccurrences(char arr[], char ch);
main()
{
    char arr[100];
    cout << "ENter the string ";
    cin.getline(arr, 100);
    char ch;
    cout << "Enter the character ";
    cin >> ch;
    int count = countOccurrences(arr, ch);
    cout << count;
}
int countOccurrences(char arr[], char ch)
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == ch)
        {
            count++;
        }
    }
    return count;
}