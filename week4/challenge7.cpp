#include<iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Enter the first number : ";
    cin>> num1;
    char op ;
    cout<<"Enter the  operation : ";
    cin>>op;
    int num2;
    cout<<" Enter the second number : ";
    cin>>num2;
    if(op=='-') {
        cout<<"num1 + num2 = " <<num1 + num2 ;
    }
    if(op=='+') {
        cout <<"num1 - num2 = " <<num1 - num2 ;
    }
    if(op=='*'){

     cout << "num1 / num2 = " << num1 / num2 ;
    }
    if(op=='/') {
        cout << "num1 * num2 = " << num1 * num2 ;
    }
    return 0;


}