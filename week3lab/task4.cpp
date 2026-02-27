#include<iostream>
using namespace std;
int main(){
    float charge,time,current;
    cout<<"Enter the charge (Q) in couloumbs :";
    cin>>charge;
    cout<<"Enter the time (t) in seconds : ";
    cin>>time;
    current=charge/time;
    cout<<"the current(I) is ="<<current<<"Amperes";

}