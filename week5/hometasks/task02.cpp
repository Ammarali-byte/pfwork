#include<iostream>
using namespace std ;
main ( ){
    int number = 0 , sum = 0 ;
    while ( number >= 0){
        sum = sum + number;
        cout<< "Enter a Number : ";
        cin >> number;
        
    }
    cout<<"The sum is "<<sum;
}