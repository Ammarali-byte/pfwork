#include <iostream>
using namespace std;

int main()
{
    int elements;
    cout << "Enter the number of elements :";
    cin >> elements;
    int num[elements];
    cout << "Enter " << elements << " number 1 per line ." << endl;
    for (int i = 0; i < elements; i++)
    
    {
        cout << "Enter " << i + 1 << " number :";
        cin >> num[i];
        for (int j = 0; j < i; j++)
        {
            if (num[i] == num[j])
            {
                cout << "Duplicate Number Found ." << endl;
                break;
            }
        }
    }
    cout << "Unique Number in the Array are :";
    for (int i = 0; i < elements; i++)
    {
        bool duplicate = false;
        for (int j = 0; j < i; j++)
        {
            if (num[i] == num[j])
            {
                duplicate = true;
                break;
            }
        }
        if (duplicate == true)
        {
            cout << num[i] << " ";
        }
    }
}
