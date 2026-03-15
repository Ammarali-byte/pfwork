#include<iostream>
using namespace std;
main ( ){
    int digit ,number , frequencychecker = 0;
    cout<<"Enter number : ";
    cin>>number;
    cout<<"Enter digit : ";
    cin>>digit; 
    int count = 0;
    while ( number != 0){
      int reminder = number % 10 ;
      if ( reminder == digit ){
        frequencychecker = frequencychecker + 1;
        count++ ;
      }
      number = number % 10;
    }
    cout<<"Frequency of "<<digit <<" in "<<number<<" is : "<<frequencychecker;
     
    
}