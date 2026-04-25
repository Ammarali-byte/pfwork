#include <iostream>
using namespace std;
int namesum(string names[], char c, int n);

main()
{
    int n;
    cout << "Enter number of customers  : ";
    cin >> n;
    string name[n];
    cout << "Enter " << n << " names of customers : ";

    for (int i = 0; i < n; i++)
    {
        cin >> name[i];
    }
    char c;
    cout << "Enter character : ";
    cin >> c;
    int count = namesum(name , c , n);
    cout<<"count  of names starting with "<<c <<" is : "<<count;
}
int namesum(string name[], char c, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (name[i][0] == c)
        {
            count++;
        }
    }
    return count;
}