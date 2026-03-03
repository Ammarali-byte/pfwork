#include<iostream>
using namespace std;
int main(){
    int  number1,number2;
    cout<<"Enter 1st number :";
    cin>>number1;
    cout<<"Enter 2nd number : ";
    cin>>number2;
    if (number1 < number2 ){
        cout<<"Number "<<number2<<"  is greater than "<<number1;
    }
    else{
        cout<<"Number  "<<number1<<"  is greater than"<<number2;
    }
}