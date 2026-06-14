#include<iostream>
using namespace std;
string encryption(char arr[]);
main()
{
    char ch[100];
    cout << "Enter the String ";
    cin.getline(ch, 100);
    cout << encryption(ch);
}
string encryption(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'A')
        {
            arr[i] = '1';
        }
        if (arr[i] == 'e' || arr[i] == 'E')
        {
            arr[i] = '2';
        }
        if (arr[i] == 'i' || arr[i] == 'I')
        {
            arr[i] = '3';
        }
        if (arr[i] == 'o' || arr[i] == 'O')
        {
            arr[i] = '4';
        }
        if (arr[i] == 'u' || arr[i] == 'U')
        {
            arr[i] = '5';
        }
    }
    return arr;
}