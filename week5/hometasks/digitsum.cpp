#include<iostream>
using namespace std;
main ( ){
    int num;
    cout<<" Enter a number : ";
    cin>>num;
    int sum = 0;
    for ( int i = num ; i > 0 ; i/=10){
        int rem = i % 10;
        sum = sum + rem;
        num = num/10;
    }
    cout<< "The sum of digits is : "<<sum;
}