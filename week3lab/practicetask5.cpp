#include<iostream>
using namespace std;
int main(){
    int age,moves,years;
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Enter moves :";
    cin>>moves;
    years=age/(moves+1);
    cout<<"Average years :"<<years;
}