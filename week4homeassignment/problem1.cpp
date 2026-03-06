#include<iostream>
using namespace std;
int main(){
    string country ;
    float discount ,price ;
    cout<< "Country : ";
    cin>> country ;
    cout<< "Price : ";
    cin>> price;
    if ( country == "Ireland"){
        discount = price * 0.10 ;
    }
    else {
        discount = price * 0.05;
    }
    int discountedprice = price - discount ;
    cout << "Discounted price  : "<< discountedprice;
    
}