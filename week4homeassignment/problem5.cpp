#include<iostream>
using namespace std ;
int main () {
    int workingdays , timeforgames ,holidays ;
    
    cout<< " Enter the numberof holidays : ";
    cin>>holidays;
    workingdays = 365 - holidays ;
    timeforgames = ( holidays * 127 ) + ( workingdays * 63 ); 
    int normalnorms = 30000;
    int norms = timeforgames - normalnorms ;
    int hours = norms / 60 ;
    int minutes = norms % 60 ;
    
    

    if ( timeforgames <= normalnorms ){
        cout <<"tom sleeps well \n";
        cout <<hours<<" hours "<<minutes<< " minutes less for play ";
    }
    else{
        cout<<"Tom will run away \n";
        cout<<hours << " hours "<<minutes<< " minutes for play ";
    }
    
    
}
 