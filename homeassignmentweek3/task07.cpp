#include<iostream>
using namespace std;
int main(){
    string name;
    int adultticketprice,childticketprice,noofadultticketsold,noofchildticketsold,percentage,totalamount,donation,remaining;
    cout<<"Enter the movie name :";
    cin>>name;
    cout<<"Enter the adult ticket price :";
    cin>>adultticketprice;
    cout<<"Enter the child ticket price : ";
    cin>>childticketprice;
    cout<<"Enter the number of the adult tickets sold : ";
    cin>>noofadultticketsold;
    cout<<"Enter the number of child tickets sold : ";
    cin>>noofchildticketsold;
    cout<<"Enter the percentge of amount to be doanted to charity : ";
    cin>>percentage;
    totalamount=(adultticketprice*noofadultticketsold)+(childticketprice*noofchildticketsold);
    donation= (percentage*totalamount)/100;
    remaining=totalamount-donation;
    cout<<"-------------------------------------------"<<endl;
    cout<<"Movie : "<<name<<endl;
    cout<<"Total amount generated from ticket sales : "<<totalamount<<endl;
    cout<<"Donation to charity :"<<donation<<endl;
    cout<<"Remaing amount after donation :"<<remaining;
}