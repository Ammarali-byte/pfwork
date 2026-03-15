#include<iostream>
using namespace std;
main ( ){
    int age , toysprice , machineprice ;
    cout<<" Enter lilly's age : ";cin>>age;
    cout<<"Enter the washing machine price : ";cin>>machineprice;
    cout<<"Enter the unit price of each toy : "; cin>>toysprice;
    int totalmoney = 0 , toyscount = 0 , money = 0  ;
    
    for ( int i = 1 ; i <= age ; i= i+2){
        toyscount = toyscount + 1;
    }
    for (int i = 2 ; i <= age ; i = i+2 ){
        money = money + (( 5 * i)-1);
    }
    totalmoney = (toyscount * toysprice ) + money;
    if ( machineprice <= totalmoney ){
        cout<<"Yes ! \n"<<totalmoney-machineprice;
    }
    else{
        cout<<" No ! \n"<<machineprice-totalmoney;
    }
    
}