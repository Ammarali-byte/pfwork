#include<iostream>
using namespace std;
main ( ){
    int num1 ,num2 ,hcf = 1;
    cout<<" Enter the first number :";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    for(int i = 1 ; i <= num1 && i <= num2; i+=1 ){
        if (num1 % i == 0 && num2 % i == 0 ){
            hcf = i ;
        }
    }
    int lcm = (num1 * num2)/hcf;
    cout<<"GCD of "<<num1<<" and "<<num2<<" is : "<<hcf<<endl;
    cout<<"LCM of "<<num1<<" and "<<num2<<" is : "<<lcm;
}