#include <iostream>
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
        if (i % 2 == 0)
        {
            arr[i] = arr[i] + 1;
        }
        else
        {
            arr[i] = arr[i] + 2;
        }
    }
    return arr;
}