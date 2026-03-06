#include<iostream>
using namespace std;
int main (){
    int noofredroses ,noofwhiteroses , nooftulips ;
    cout<< "Enter no of Red Roses : ";
    cin>> noofredroses;
    cout<< " Enter the no of white Roses : ";
    cin>> noofwhiteroses ;
    cout<< " Enter the number of Tulips : ";
    cin>> nooftulips;
    float priceofred = 2 , priceofwhite = 4.10 , priceoftulip = 2.50 ;
    float price ,discount ;
    price =( noofredroses * priceofred ) + (noofwhiteroses * priceofwhite ) + (nooftulips * priceoftulip ) ;
    cout<< "Orignal price : "<< price <<endl;
    if ( price > 200 ){
        discount = price * 0.20 ;
    }
    else{
        discount = 0;
    }
    float discountedprice = price - discount ;
    cout<< "Price after Discount : "<<discountedprice;


}