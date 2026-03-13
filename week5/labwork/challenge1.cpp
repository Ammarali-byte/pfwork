#include<iostream>
using namespace std;
main(){
    int table ;
    cout<<"Which table you want to see : ";
    cin>>table;
    cout<<"Multiplication table for "<<table<<" is :"; 
    for (int num = 0; num <= 10 ; num++){
        cout<<table <<" * "<<num<<" = " <<table*num <<endl;
    }
}