#include<iostream>
using namespace std;
int main(){
    int MB,bits;
    cout<<"Enter the size in mega bytes (MB) :";
    cin>>MB;
    bits=MB *1024*1024*8;
    cout<<MB<<" is  equivalent to "<<bits<<"bits";


}