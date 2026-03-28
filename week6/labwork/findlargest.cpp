#include<iostream>
using namespace std;
main ( ){
    int n ;
    cout<<"Enter the numbers of elements : ";
    cin>>n ;
    cout<<"Enter 3 numbers , one per line : "<<endl;
    int number[n] ;
    for ( int i = 0 ; i < n ; i++ ){
        cin>>number[i];
    }
    int largest = number[0];
    for ( int i = 1 ; i < n ; i++ ){
        if( number[i] > number[0] ){
            largest = number[i];
        }
       
    }
     cout<<" the largest number is : "<< largest;
}