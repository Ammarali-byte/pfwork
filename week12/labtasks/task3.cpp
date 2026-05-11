#include<iostream>
using namespace std;
main ( )
{
    int y = 10;
    int &ptr = y;
    cout<<"The value of y is : "<<y<<endl;
    ptr = 30;
    cout<<"The modified value  of y is : "<<y;
}