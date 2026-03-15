#include<iostream>
using namespace std;
main ( ){
    string username , password;
    string studentname = "";
    int studentage = 0;
    string coursename = "";

    int choice;

    for ( int i = 1 ; i <= 3 ; i++){
        cout<<"Enter username : ";
        cin>>username;
        cout<< " Enter password : ";
        cin>>password;
        if ( username == "admin" && password == "1234"){
            cout<<"Login successfull "<<endl;
            break;
        }
        else{
            cout<<"Wrong login "<<endl;
        }
        if ( i == 3 && !( username == "admin" && password == "1234")){
            cout<<" To many attempts . program ends ."<<endl;
            return 0;
        }
    }
    for ( int i = 1 ; i <= 5 ; i++){
        cout<<"\n ------UNIVERSITY MANAGEMENT SYSTEM------\n";
        cout<<"1. Add student \n";
        cout<<"2. View student \n";
        cout<<"3. Add course \n ";
        cout<<"4. Exit\n";

        cout<<"Enter choice ";
        cin>>choice;

        if (choice == 1){
            cout<<"Enter student name : ";
            cin>>studentname;
            cout<<"Enter student age : ";
            cin>>studentage;
            cout<<"Student  added successfully \n";
        }
        else if ( choice == 2){
            if (studentname != ""){
                cout<<"Student name :"<<studentname<<endl;
                cout<<"Student age : "<<studentage<<endl;
            }
            else{
                cout<<"No Student record found \n";
            }
        }
        else if ( choice == 3){
            cout<<"Enter course name :"<<endl;
            cin>>coursename;

            cout<<"Course name added "<<coursename;
        }
        else if ( choice == 4 ){
            cout<<"program exit \n";
            break;
        }
        else{
            cout<<"Invalid choice "<<endl;
        }
    }
}