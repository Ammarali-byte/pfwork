#include<iostream>
using namespace std ;
int main(){
    int temperature1 , temperature2 ,difference ;
    cout<< "Enter temperature of City 1 : ";
    cin>> temperature1;
    cout<< "Enter temperature of City 2 : ";
    cin>> temperature2 ;
    difference = temperature1 - temperature2 ;
    if ( difference > 10 ){
        cout << " Difference is too big " <<endl;
    } 
    cout<< "Program Ends ";
}
