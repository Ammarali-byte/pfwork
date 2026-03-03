#include<iostream>
using namespace std;
int main(){
    int digit;
    cout<<"Enter 4 digit positive number : ";
    cin>>digit;
    int num1,num2,num3,num4;
    int dig1,dig2,dig3,dig4;
    num1=digit%10;
    dig1=num1+7;
    digit=digit/10;
    num2=digit%10;
    dig2=num2+7;
    digit=digit/10;
    num3=digit%10;
    dig3=num3+7;
    digit=digit/10;
    num4=digit%10;
    dig4=num4+7;
    int finalcode;
    cout<<"finalcode = "<<dig4<<dig3<<dig2<<dig1;

}