#include<iostream>
using namespace std ;
main ( )
{
    cout<<"enter the lsize of triangle  : ";
    int n ; cin >> n;
      for ( int i = 1 ; i <= n ; i++){
        for ( int j = 1 ; j <=i ; j++ ){
            cout << " ";
        }
        cout<<endl;
        
    }
    for ( int i = 1 ; i <= n ; i++){
        for ( int j = i ; j >=1 ; j++ ){
            cout << "*";
        }
        cout<<endl;
    }
}