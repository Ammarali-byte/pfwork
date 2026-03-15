#include<iostream>
using namespace std;
main ( ){
    int num , dig;
    int frequency = 0;
    cout<< "Enter number ";
    cin>>num;
    cout<<" Enter digit whose frequency to be found ";
    cin>>dig;
     
    for ( int i = num ; i > 0 ; i= i/10){
      int remainder = num % 10;
      if ( remainder == dig ){
         frequency = frequency+1;
      }
      num/=10;
    }
    cout<< " Frequency is : "<<frequency;

}