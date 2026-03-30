#include<iostream>
#include<conio.h>

using namespace std ;
main( ){

    //  TOTAL SIZE
    int totalstudents = 10;
    int index = 0;

    // --DATA STRUCTURE--
    string nameA[totalstudents];
    int ageA[totalstudents];
    float matricA[totalstudents];
    float interA[totalstudents];
    float ecatA[totalstudents];
    string pref1A[totalstudents];
    string pref2A[totalstudents];
    string pref3A[totalstudents];
    float aggriA[totalstudents];

    while (true){
    // Main header of UMS
    system("cls");
    cout<<"-----------------------------------------------------------\n";
    cout<<"--------------UNIVERSITY MANAGEMENT SYSTEM-----------------\n";
    cout<<"-----------------------------------------------------------\n";

    cout <<"UNIVERSITY MANAGEMENT SYSTEM MENU :\n\n";
    cout<<"1-admin Menu "<<endl;
    cout<<"2-Student Menu "<<endl;
    cout<<"3-Exit "<<endl;

    //taking choice from the user 
    cout<<"Enter your choice : ";
    int userchoice ;
    cin>>userchoice;
    cout<<"you chosed option "<<userchoice<<endl;

    if (userchoice == 1 ){
        int count = 0 ;
    for (int i = 1 ; i <= 3 ; i++ ){

         system("cls");
    
            //this is admin menu 
        cout<<"ADMIN MENU  "<<endl;
        string username ;
        string password ;
        cout<<"Enter username : ";
        cin>>username;
        cout<<"Enter password : ";
        cin>>password;
        if (username== "admin" && password =="1234" ){
            cout<<"Login successfully \n";
        while(true){
            system("cls");
            
            cout<<"1-Show all students"<<endl;
            cout<<"2-Search student  "<<endl;
            cout<<"3-Update student record "<<endl;
            cout<<"4-Generate merit list "<<endl;
            cout<<"5-logout "<<endl;
            cout<<"choose your option : ";
            int adminoption ;
            cin>>adminoption;
            if(adminoption == 1){
                //show student record
                cout<<"name\tage\tmatric\tFsc\tecat\tpref1\tpref2\tpref3\t"<<endl;
                for (int i = 0 ; i < index ; i++){
                    cout<<nameA[i]<<"\t"<<ageA[i]<<"\t"<<matricA[i]<<"\t"<<interA[i]<<"\t"<<ecatA[i]<<"\t"<<pref1A[i]<<"\t"<<pref2A[i]<<"\t"<<pref3A[i]<<endl;
                }
            }
            else if(adminoption == 2){
                    //search student record
                }
            else if(adminoption == 3){
                    //update student record
                }
            else if(adminoption == 4){
                    //generate merit list
                }
            else if(adminoption == 5){
                        cout<<"Logging out \n";
                        break;
                    }
            else{
                cout<<"You entered wrong option \n";
            }
            cout<<"press any key to continue ";
            getch();
            
        }
            

            getch();
            break;
        }
        else{
            cout<<"You entered wrong username or password ";
            count = count + 1 ;
        if (count == 3 ){
            cout<<"You have entered wrong username and password 3 times \n";
            cout<<"Exiting the system \n";
            break;
        }
        }
        cout<<"\n Press eny key to conntinue : ";
        getch();
    }
    }
    
    

    
    else if (userchoice == 2 ){
        system("cls");
        //taking student data
        cout<<" STUDENT MENU  "<<endl;
        cout<<"Enter your name : ";
        string name ;
        cin>>name;
        // getline ( cin , name );
        int age ;
        cout<<"Enter your age : ";
        cin>>age;
        float matric;
        cout<<"Enter your matric marks : ";
        cin>>matric;
        float inter;
        cout<<"Enter your fsc marks : ";
        cin>>inter;
        float ecat;
        cout<<"Enter your ecat  marks : ";
        cin>>ecat;
        cout<<"Enter Cs ,Ce ,EE as your preferences only \n";
        cout<< "Enter your first preference : ";
        string pref1;
        cin>>pref1;
        cout<< "Enter your second preference : ";
        string pref2;
        cin>>pref2;
        cout<< "Enter your third preference : ";
        string pref3; 
        cin >> pref3;
       //saving student data in arrays
        nameA[index] = name;
        ageA[index] = age ;
        matricA[index] = matric;
        interA[index] = inter;
        ecatA[index] = ecat;
        pref1A[index] = pref1;
        pref2A[index] = pref2;
        pref3A[index] = pref3;
        index = index + 1;

        cout<<"Your data has been saved ";
        cout<<"\n Press eny key to conntinue : ";
        getch();
    }
    else if(userchoice == 3 ){
        cout<<"Exiting the system \n";
        break;
    }
    else {
        cout<<"You entered the wrong choice \n";
    }
    }

    //end of the program
    cout<<"Thanks for using this software \n"; 
}
