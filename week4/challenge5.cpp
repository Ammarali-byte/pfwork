#include<iostream>
using namespace std;
int main(){
    int bill , discount ;
    cout << "Enter your bill : ";
    cin >> bill;
    if ( bill <= 5000){
        discount = bill * 0.05;
    }
    else{
        discount = bill *0.10;
    }
    int billafterdiscount = bill-discount;
    cout<< "Your discounted bill is : "<< billafterdiscount;
}