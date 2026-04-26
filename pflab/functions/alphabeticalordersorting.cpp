#include <iostream>
using namespace std;
void alphabeticalorder(string name[], int n);
main()
{
    cout << "How many names you want to enter ";
    int n;
    cin >> n;
    string name[n];
    for (int i = 0; i < n; i++)
    {
        cin >> name[i];
    }
    alphabeticalorder(name, n);
}

void alphabeticalorder(string name[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (name[j] > name[j + 1])
            {
                string temp = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp;
            }
        }
    }
    cout << "----Alphabetical order------\n";
    for (int i = 0; i < n; i++)
    {
        cout << name[i] << endl;
    }
}
