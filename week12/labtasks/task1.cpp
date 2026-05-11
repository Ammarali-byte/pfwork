#include<iostream>
using namespace std;
main ( ){
    int x = 10 ;
    int *ptr = &x;
    cout<<"Value of x is : "<<x<<endl;
    cout << "Value of x is : " << *ptr << endl;
    cout<<"Location of x is : "<<ptr;
}
