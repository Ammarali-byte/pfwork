#include <iostream>
#include <fstream>
using namespace std;
main()
{
    string name;
    cout << "Enter your text ";
    cin.ignore();
    getline(cin, name);
    fstream namefile;
    namefile.open("Name.txt", ios::app);
    namefile << name << "\n";
    namefile.close();
}