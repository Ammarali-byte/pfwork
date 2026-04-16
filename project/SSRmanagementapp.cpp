#include <iostream>
#include <conio.h>

using namespace std;
main()
{
    // DATA Structures
    int room;
    char guestnames[10][40];
    int days[10];
    int roomprice[10];
    int roomstatus[10];

    // intializing room availability
    for (int i = 0; i < 10; i++)
    {
        roomstatus[i] = 0;
    }

    // Room prices
    roomprice[0] = 7500;
    roomprice[1] = 7500;
    roomprice[2] = 7500;
    roomprice[3] = 7500;
    roomprice[4] = 10000;
    roomprice[5] = 10000;
    roomprice[6] = 10000;
    roomprice[7] = 10000;
    roomprice[7] = 15000;
    roomprice[8] = 15000;

    while (true)
    {

        // main header

        system("cls");
        cout << "     ###########        ####     ####    #######          \n";
        cout << "  ###   ####    ###   ##    ## ##    ##  ##     ##        \n";
        cout << " ###  ##    ##   ###  ##       ##        ##      ##       \n";
        cout << " ###  ##    ##   ###    ####     ####    ## #####         \n";
        cout << " ###   ##       ###         ##       ##  ##   ##          \n";
        cout << "  ###   ####          ##    ## ##    ##  ##     ##        \n";
        cout << "     ###########        ####     ####    ##      ##       \n";
        cout << "  ##   ###  ##  ###                                       \n";
        cout << " ###   ###   ##  ###                                      \n";
        cout << " ###   ###    ##  ###                                     \n";
        cout << " ###   ###     ##  ###                                    \n";
        cout << " ###   ###      #####                                     \n";

        cout << "Welcome to SERENITY SPRING RESORT \n";
        cout << "1-Management menu \n";
        cout << "2-Guest menu \n";
        cout << "3-Information about leepa valley \n";
        cout << "4- Exit \n";

        // taking choice from user
        string choice;
        cout << "Enter your choice ";
        cin >> choice;
        if (choice == "1")
        {
            system("cls");
            cout << "Mangement menu : \n";
        }
        else if (choice == "2")
        {
             system("cls");
            while (true)
            {

                system("cls");
                cout << "GUEST MENU \n";
                cout << "1- Room Booking \n";
                cout << "2- View Available Rooms \n";
                cout << "3- View my Booking \n";
                cout << "4- Exit \n";
                string guestchoice;
                cout << "Enter your choice ";
                cin >> guestchoice;
                if (guestchoice == "1")
                {
                    // Room Booking code
                    cout<<"Enter Room number ";
                    cin>>room;
                    if (roomstatus[room-1 ] == 0 ){
                        cout<<"Enter your name : ";
                        cin.ignore( );
                        cin.getline( guestnames[room-1] , 40);
                        cout<<"How many days you want to stay :";
                        cin>>days[room-1];
                        if (room< 4 ){
                            cout<<"--------Standard Room------- \n Price is "<<roomprice[room-1]<<endl;
                            cout<<"You succesfully booked Standard room  No "<<room;
                            roomstatus[room - 1] = 1;
                        }
                        else if (room > 3 && room < 8)
                        {
                            cout << "-------Deluxe  Room-------- \n Price is " << roomprice[room - 1]<<endl;
                            cout << "You succesfully booked Deluxe room  No " << room;
                            roomstatus[room - 1] = 1;
                        }
                        else if (room > 7 && room < 10 )
                        {
                            cout << "-------SWeet  Room-------- \n Price is " << roomprice[room - 1]<<endl;
                            cout << "You succesfully booked Sweet  room  No " << room;
                            roomstatus[room-1] = 1;
                        }
                        
                        else{
                            cout<<"No such room available";
                        }
                    }
                    else{
                        cout<<" Soory for Inconvience \n Room is already booked ";
                    }
                    getch();
                }
                else if (guestchoice == "2")
                {
                    system("cls");
                    // Available rooms showing 
                    for (int i = 0 ; i< 10 ; i++){
                        if ( roomstatus[i] == 0 ){
                            cout<<"Room No "<<i+1 <<" is available\n";
                        }
                        else{
                            cout<<"Room No "<<i+1<<" is taken\n";
                        }
                        
                    }
                    cout << "\nPress any key to continue \n";

                    getch();
                }
                else if (guestchoice == "3")
                {
                    // Viewing my booking 
                }
                else if (guestchoice == "4")
                {
                    cout << " Returning to main menu ";
                    break;
                }
                else
                {
                    cout << "You entered wrong choice ";
                }
            }
        }
           
        
        else if (choice == "3")
        {
            system("cls");
            cout << "Information about Leepa valley kashmir \n";
            cout << "Leepa valley is located in Azad Kashmir \n";
        }
        else if (choice == "4")
        {
            system("cls");
            cout << "Exiting the system\n";
            break;
        }
        else
        {
            system("cls");
            cout << "Wrong option chosed \n";
        }
        cout << "\n\n\nPress any key to continue \n";
        getch();
    }
    cout << "Thanks for using this software ";
}