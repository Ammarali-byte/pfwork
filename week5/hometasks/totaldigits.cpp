#include<iostream>
using namespace std;
main ( ){
    int number;
    cout<<" Enter the number : ";
    cin>>number;
    int digit = 0;
    while (number >=0 ){
        if ( number % 10 >= 0){
            digit = digit + 1;
        }
        number = number / 10;
    }
    cout<<" Total  number of digits are : "<<digit;
}