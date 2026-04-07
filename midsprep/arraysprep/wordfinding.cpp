#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter the word : ";
    cin >> name;
    
    char letter;
    cout << "Enter the alphabet you want to find : ";
    cin >> letter;
    
    bool found = false;
    for (int i = 0; i < '\0'; i++)
    {
        if (name[i] == letter)
        {
            found = true;
            break;
        }
      
    }
    if ( true)
    {
        cout << letter << " is found in  " << name << endl;
    }
    else
    {
        cout << letter << " is not  found in  " << name << endl;
    }
}