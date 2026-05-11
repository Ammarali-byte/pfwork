#include <iostream>
using namespace std;
void modifywithpointer(int *p);
void modifywithreference(int &p);
main()
{
    int a ;
    cout<<"Enter the vaalue of a ";
    cin>>a;
    modifywithpointer(&a);
    cout << "The modified value with pointer is : " << a<<endl;
    modifywithreference(a);
    cout<<"The modified value with reference  is : "<<a<<endl;
}
void modifywithpointer(int *p)
{
    *p = 30;
}
void modifywithreference(int &p)
{
    p = 20;
}