#include<iostream>
using namespace std;
main ( ){
    int n ; 
    cout<<"Enter number : ";
    cin>>n;
    int count = 0 ;
    for ( int i =n ; i > 0 ; i = i / 10 ){
        
        count = count + 1;
        
    }
    cout<<count;
}