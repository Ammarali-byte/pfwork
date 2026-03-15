#include<iostream>
using namespace std;
main ( ){
    int value ;
    cout<<" Please enter a positive value : ";
    cin >> value;
    while ( value <= 0){
        cout<<"Error : "<<value <<" is not a positive value .";
        cout<<"Please enter a positive value : ";
        cin>>value;
    }
    cout<< "Prgrams ends "<<endl;
}