#include<iostream>
using namespace std;
main ( ){
    int money   ;
    int  year ;

    cout<<"Enter money : ";cin>>money;
    cout<<"Enter year : ";cin>>year;
    int age = 18;

    double expanses = 0;
    for ( int i = 1800 ; i <= year ; i++ ){
    
    if (i % 2 == 0 ){
        expanses+= 12000 ;
    }
    else
        expanses+= 12000 + 50 * age ;
        age++;
    

    }
    
    if ( expanses > money ) {
        int needed = expanses - money ;
        cout<<" He will need "<<needed<<" dollars to survive ";
    }
    else{
        int rem = money - expanses;
        cout<<"Yes ! He will live a carefree life and will have " << rem <<" dollars left ";
    } 
}