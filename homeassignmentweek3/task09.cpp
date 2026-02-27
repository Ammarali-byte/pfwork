#include<iostream>
using namespace std;
int main(){
    int a,sum,b,c,d;
    cout<<"Enter a 4-digit number";
    cin>>a;
    b=a%10    ;
    c=b%10;
    d=c%10;
    sum=a+b+c+d;
    cout<<"The summ of individual digits is : "<<sum;
}