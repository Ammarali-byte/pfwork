#include<iostream>
using namespace std ;
main ( ){
    int choice ;
    while (true){
        cout<<"\n---RESTURANT MANAGEMENT SYSTEM---\n";
        cout<<"1. View Food Menu \n";
        cout<<"2. Place order \n";
        cout<<"3. View order status  \n";
        cout<<"4. Generate bill  \n";
        cout<<"5. Contact staff  \n";
        cout<<"6. Exit  \n";
        cout<<"Enter your choice(1-6):  ";
        cin>>choice;

        if ( choice == 1 ){
            cout<<"You selected the food menu ";
        }
        else if ( choice == 2 ){
            cout<<"You selected : Place order ";
        }
         else if ( choice == 3 ){
            cout<<"You selected : View order status ";
        }
         else if ( choice == 4 ){
            cout<<"You selected : Generate bill ";
        }
         else if ( choice == 5 ){
            cout<<"You selected : Contact staff ";
        }
         else if ( choice == 6 ){
            cout<<"Exiting Resturant management system . Thankyou ";
            break;
        }
    }
}