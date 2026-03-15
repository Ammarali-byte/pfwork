#include<iostream>
using namespace std;
main ( ){
    string pin;
    int choice;
    int balance = 1000 ;
    int amountdeposited ,withdrawamount ;
        for ( int i = 1 ; i <= 3 ; i++){
            cout<<"Enter pin :";
            cin>>pin;
            if ( pin == "1234"){
                cout<<"Login succesfull \n";
                break;
            }
            else {
                cout<<"Wrong PIN \n";
            }
            if (i == 3 &&  !(pin == "1234" )){
                cout<<" Too many attempts . Card blocked ";
                return 0;
            }
        }
        for ( int i = 1 ; i <= 4 ; i++ ){
        cout<<"-------ATM MENU-------\n";
        cout<<"1. Check balance \n";
        cout<<"2. Deposit money  \n";
        cout<<"3. Withdraw money \n";
        cout<<"4. Exit \n";

        cout<<"Enter choice : ";cin>>choice;
        if (choice == 1 ){
            cout<<"Balance : "<<balance<<endl;
        }
        else if (choice == 2 ){
            cout<<"Enter the amount to deposit : ";
            cin>>amountdeposited;
            balance = balance + amountdeposited;
            cout<<"Amount deposited succesfully "<<endl;

        }
        else if ( choice == 3 ){
            cout<<" Enter the amount to withdraw :";
            cin>>withdrawamount;
            balance = balance - withdrawamount;
            cout<<" Please collect your cash "<<endl;
        }
        else if ( choice == 4 ){
            cout<<" Thanks for using ATM machine "<<endl;
            break;
        }
        else {
            cout<<"Invalid input";
        }
}
}