#include<iostream>
using namespace std;
main ( ){
    for ( int i = 1 ; i <= 6 ; i++ ){
    cout<<"\n---SIMPLE CALCULATOR---\n";
    cout<<"1. additionn \n";
    cout<<"2. Subtraction  \n";
    cout<<"3. Multiplication  \n";
    cout<<"4. Division  \n";
    cout<<"5. Clear the screen  \n";
    cout<<"6. Exit  \n";
    cout<<"Enter your choice (1-6): ";
    int num1 , num2 ;
    char op;

    int choice;
    cin>>choice;

    if ( choice == 1 ){
        cout<<"Enter first number : ";cin>>num1;
        cout<<"Enter second number : ";cin>>num2;
        int addition = num1 + num2 ;
        cout<<"Result : "<<addition;
    }
    
    if ( choice == 2 ){
        cout<<"Enter first number : ";cin>>num1;
        cout<<"Enter second number : ";cin>>num2;
        int subtraction = num1 - num2 ;
        cout<<"Result : "<<subtraction;
    }
    
    if ( choice == 3 ){
        cout<<"Enter first number : ";cin>>num1;
        cout<<"Enter second number : ";cin>>num2;
        int multiplication = num1 * num2 ;
        cout<<"Result : "<<multiplication;
    }
    
    if ( choice == 4 ){
        cout<<"Enter first number : ";cin>>num1;
        cout<<"Enter second number : ";cin>>num2;
        int division = num1 / num2 ;
        cout<<"Result : "<<division;
    }
    if ( choice == 5 ){
        cout<<"Console cleared ";
    }
    
    if ( choice == 6 ){
        cout<<"Program ended ";
        break; 
    }
    }
}