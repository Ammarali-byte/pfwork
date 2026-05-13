#include <iostream>
#include <fstream>
using namespace std;
main()
{
    string name = "MY name is Syed Ammar Ali Bukhari ";
    fstream namefile;
    namefile.open("Name.txt", ios:: out);
    namefile << name<<"\n";
    namefile.close();
}