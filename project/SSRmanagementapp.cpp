#include <iostream>
#include <conio.h>

using namespace std;
main()
{
    // DATA Structures

    int room, month, date;
    int index;
    string guestnames[3720];
    int daystay[3720];
    int roomprice[10];
    int roomstatus[3720];
    int pin[3];
    int correctpin = 1234;
    string username;
    string correctusername = "management";

    // intializing room availability
    for (int i = 1; i <= 10; i++)
    {
        roomstatus[i] = 0;
    }

    // Room prices
    roomprice[1] = 7500;
    roomprice[2] = 7500;
    roomprice[3] = 7500;
    roomprice[4] = 7500;
    roomprice[5] = 10000;
    roomprice[6] = 10000;
    roomprice[7] = 10000;
    roomprice[8] = 10000;
    roomprice[9] = 15000;
    roomprice[10] = 15000;

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
            bool login = false;
            for (int i = 0; i < 3; i++)
            {
                cout << "Enter username ";
                cin >> username;
                cout << "Enter pin";
                cin >> pin[i];
                if (username == correctusername && pin[i] == correctpin)
                {
                    cout << "Login Successfull \n";
                    login = true;
                    break;
                }
                else
                {
                    cout << "Wrong username or Password \n";
                }
            }
            if (login = true)
            {
                while (true)
                {
                    system("cls");
                    cout << "-------Mangement menu-------- \n";
                    cout << "1- Add booking \n";
                    cout << "2 - Show booking \n";
                    cout << "3 - Check out \n";
                    cout << "4- show available rooms \n";
                    cout << "5 - Exit \n";
                    string adminchoice;
                    cout << "Enter your choice : ";
                    cin >> adminchoice;
                    if (adminchoice == "1")
                    {
                        // Room Booking code
                        cout << "\nEnter Date(1-31) ";
                        cin >> date;
                        cout << "\nEnter month (1-12) ";
                        cin >> month;

                        cout << "\nEnter Room number (1-10) ";
                        cin >> room;
                        index = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);
                        if (roomstatus[room] == 0)
                        {
                            cout << "Enter your name : ";
                            cin.ignore();
                            getline(cin, guestnames[room]);
                            cout << "How many days you want to stay : ";
                            cin >> daystay[room];
                            if (room <= 4)
                            {
                                cout << "--------Standard Room------- \n Price is " << roomprice[room] << endl;
                                cout << "You succesfully booked Standard room  No " << room;
                                roomstatus[room] = 1;
                            }

                            else if (room > 3 && room <= 8)
                            {
                                cout << "-------Deluxe  Room-------- \n Price is " << roomprice[room] << endl;
                                cout << "You succesfully booked Deluxe room  No " << room;
                                roomstatus[room] = 1;
                            }
                            else if (room > 8 && room <= 10)
                            {
                                cout << "-------SWeet  Room-------- \n Price is " << roomprice[room] << endl;
                                cout << "You succesfully booked Sweet  room  No " << room;
                                roomstatus[room] = 1;
                            }

                            else
                            {
                                cout << "No such room available";
                            }
                        }
                        else
                        {
                            cout << " Soory for Inconvience \n Room is not available  ";
                        }
                        getch();
                    }
                    // search booking code
                    else if (adminchoice == "2")
                    {
                        cout << "Booking finding ";
                    }
                    else if (adminchoice == "3")
                    {
                        // CHECK OUT ROOM
                        cout << "\nEnter Date(1-31) ";
                        cin >> date;

                        cout << "Enter Month (1-12): ";
                        cin >> month;

                        cout << "Enter Room Number (1-10): ";
                        cin >> room;

                        index = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);

                        if (roomstatus[index] == 1)
                        {
                            roomstatus[index] = 0;

                            cout << "Room checked out successfully!\n";
                        }
                        else
                        {
                            cout << "Room already empty!\n";
                        }
                    }
                    else if (adminchoice == "4")
                    {
                        system("cls");
                        // Available rooms showing for date entered
                        cout << "\nEnter Date(1-31) ";
                        cin >> date;
                        cout << "\nEnter month (1-12)";
                        cin >> month;

                        cout << "\n Available rooms \n";

                        for (int room = 1; room <= 10; room++)
                        {
                            index = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);
                            if (roomstatus[index] == 0)
                            {
                                cout << "Room No " << room;
                                if (roomstatus[room] == 0)
                                {

                                    if (room <= 4)
                                    {
                                        cout << "  Standard Room is available \n Price = RS 7500 \n";
                                    }
                                    else if (room > 4 && room <= 8)
                                    {
                                        cout << "  Deluxe Room is available \n Price = RS 10000 \n";
                                    }
                                    else
                                    {
                                        cout << " Suite/Sweet Room is available \n Price = RS 15000 \n";
                                    }
                                }
                                else
                                {
                                    if (room <= 4)
                                    {
                                        cout << "  Standard Room is not available for this date \n";
                                    }
                                    else if (room > 4 && room <= 8)
                                    {
                                        cout << "  Deluxe Room is not available for this date \n";
                                    }
                                    else
                                    {
                                        cout << " Suite/Sweet Room is not available for this date \n";
                                    }
                                }
                            }
                        }
                    }
                    else if (adminchoice == "5")
                    {
                        cout << "Exiting the System : ";
                        break;
                    }
                    else
                    {
                        cout << "Wrong choice entered ";
                    }
                }
            }
            else
            {
                cout << "Too many login attempts \n";
            }
        
        }
        // Guest menu code
        else if (choice == "2")
        {
            system("cls");

            while (true)
            {

                system("cls");
                cout << "GUEST MENU \n";
                cout << "1- Room Booking \n";
                cout << "2- View Available Rooms \n";
                cout << "3- Check out room \n";
                cout << "4- Exit \n";
                string guestchoice;
                cout << "Enter your choice ";
                cin >> guestchoice;
                if (guestchoice == "1")
                {
                    // Room Booking code
                    cout << "\nEnter Date(1-31) ";
                    cin >> date;
                    cout << "\nEnter month (1-12) ";
                    cin >> month;

                    cout << "\nEnter Room number (1-10) ";
                    cin >> room;
                    index = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);
                    if (roomstatus[room] == 0)
                    {
                        cout << "Enter your name : ";
                        cin.ignore();
                        getline(cin, guestnames[room]);
                        cout << "How many days you want to stay : ";
                        cin >> daystay[room];
                        if (room <= 4)
                        {
                            cout << "--------Standard Room------- \n Price is " << roomprice[room] << endl;
                            cout << "You succesfully booked Standard room  No " << room;
                            roomstatus[room] = 1;
                        }

                        else if (room > 3 && room <= 8)
                        {
                            cout << "-------Deluxe  Room-------- \n Price is " << roomprice[room] << endl;
                            cout << "You succesfully booked Deluxe room  No " << room;
                            roomstatus[room] = 1;
                        }
                        else if (room > 8 && room <= 10)
                        {
                            cout << "-------SWeet  Room-------- \n Price is " << roomprice[room] << endl;
                            cout << "You succesfully booked Sweet  room  No " << room;
                            roomstatus[room] = 1;
                        }

                        else
                        {
                            cout << "No such room available";
                        }
                    }
                    else
                    {
                        cout << " Soory for Inconvience \n Room is not available  ";
                    }
                    getch();
                }
                else if (guestchoice == "2")
                {
                    system("cls");
                    // Available rooms showing for date entered
                    cout << "\nEnter Date(1-31) ";
                    cin >> date;
                    cout << "\nEnter month (1-12)";
                    cin >> month;

                    cout << "\n Available rooms \n";

                    for (int room = 1; room <= 10; room++)
                    {
                        index = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);
                        if (roomstatus[index] == 0)
                        {
                            cout << "Room No " << room;
                            if (roomstatus[room] == 0)
                            {

                                if (room <= 4)
                                {
                                    cout << "  Standard Room is available \n Price = RS 7500 \n";
                                }
                                else if (room > 4 && room <= 8)
                                {
                                    cout << "  Deluxe Room is available \n Price = RS 10000 \n";
                                }
                                else
                                {
                                    cout << " Suite/Sweet Room is available \n Price = RS 15000 \n";
                                }
                            }
                            else
                            {
                                if (room <= 4)
                                {
                                    cout << "  Standard Room is not available for this date \n";
                                }
                                else if (room > 4 && room <= 8)
                                {
                                    cout << "  Deluxe Room is not available for this date \n";
                                }
                                else
                                {
                                    cout << " Suite/Sweet Room is not available for this date \n";
                                }
                            }
                        }
                    }
                    cout << "\nPress any key to continue \n";

                    getch();
                }
                else if (guestchoice == "3")
                {
                    // CHECK OUT ROOM
                    cout << "\nEnter Date(1-31) ";
                    cin >> date;

                    cout << "Enter Month (1-12): ";
                    cin >> month;

                    cout << "Enter Room Number (1-10): ";
                    cin >> room;

                    index = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);

                    if (roomstatus[index] == 1)
                    {
                        roomstatus[index] = 0;

                        cout << "Room checked out successfully!\n";
                    }
                    else
                    {
                        cout << "Room already empty!\n";
                    }

                    getch();
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