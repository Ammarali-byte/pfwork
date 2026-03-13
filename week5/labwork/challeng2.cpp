#include<iostream>
using namespace std;
main ( ){
    int digit ,number ,frequency = 0;
    cout<<"Enter number : ";
    cin>>number;
    cout<<"Enter digit : ";
    cin>>digit;
    for (int i = number ; i > 0 ; i = i/10){
     if (i == digit){
        frequency = frequency + 1;
     }
    }
     cout<<"Frequency of "<<digit <<" in "<<number<<" is : "<<frequency;
    
}