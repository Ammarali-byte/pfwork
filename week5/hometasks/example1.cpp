#include<iostream>
using namespace std;
main ( ){
    while(true){
        int choice;
        cout<<"\n=====MENU=====\n";
        cout<<"1.Say Hello \n";
        cout<<"2.Say Goodbye \n";
        cout<<"3. Exit  \n";
        cout<<"Enter youir choice :";
        cin>>choice;

        if (choice == 1 ){
            cout<<"Hello ! Welcome to the program .\n";
        }
        else if ( choice == 2 ){
            cout<<"Goodbye ! Have a nice day .\n";
        }
        else if ( choice == 3 ){
            cout<<" Program ended .\n";
            break;
        }
        else{
            cout <<"Invalid choice . ";
        }
    }
    return 0;
}