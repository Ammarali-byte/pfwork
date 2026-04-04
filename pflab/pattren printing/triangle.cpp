#include<iostream>
using namespace std;
main( ){
    int n ; 
    cout<<"Enter the number of lines of trianle : ";
    cin>>n;
    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= i ; j++ ){
            cout<<"* ";
        }
        cout<<endl;
    }
}