#include<iostream>
using namespace std;
main ( ){
    int m; 
    cout<<"Enter the numbers of resistors connected in series circuit ";
    cin >>m;
    float resistor[m];
    float sum = 0 ;
    cout<<"Enter the resistance value (in ohm ) of resistors ,one per line :"<<endl;
    for ( int i = 0 ; i < m ; i++ ){
        cin>>resistor[i];
        sum = sum + resistor[i];
    }
    cout<<"the total resistance of series circuit is : "<<sum<<"ohms";
   
    }

