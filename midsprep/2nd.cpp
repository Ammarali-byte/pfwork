#include<iostream>
using namespace std;
main ( ){
   int digit , frequency = 0 ,n; 
   cout<<"Enter the digit : ";
   cin>>digit;
   cout<<"enter the digit whose frequency you want to  calculate : ";
   cin>>n;
   for(int i = digit ; i > 0 ; i= i / 10){
    int rem = i % 10;
    if (rem == n ){
        frequency = frequency + 1 ;
    }
    digit = digit / 10 ;
   }
   cout<<"Frequency is "<<frequency;

}