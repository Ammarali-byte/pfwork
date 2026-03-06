#include<iostream>
using namespace std ;
int main(){
    int salary, months ,laptopprice,monthsrequired;
    salary=10000/2;
    laptopprice=50000;
    cout<<"Enter the months ";
    cin>>months;
    monthsrequired = laptopprice / salary ;
    if(laptopprice != months * salary){
        cout<<"You cannot buy the laptop  "<<endl;
        cout<<"Months requiredto buy the laptop : "<<monthsrequired;
    }
    else{
        cout<< "You can buy the laptop ";
    }
}