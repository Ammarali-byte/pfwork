#include <iostream>
#include <conio.h>

using namespace std;

// DATA Structures
string guestnames[3720];
string allguestnames[3720];
int daystay[3720];
int alldaystay[3720];
int roomprice[11];
int roomstatus[3720];
int allroomstatus[3720];

// functions prototype
bool login();
void displaymainmenu();
void guestmenu();
void adminmenu();
void booking();
void checkbookingbyname();

// Driver code
main()
{
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
        system("cls");
        displaymainmenu();
        string choice;
        cin >> choice;
        if (choice == "1")
        {
            system("cls");
            login();
            while (true)
            {
                adminmenu();
                while (true)
                {

                    string adminchoice;

                    cin >> adminchoice;

                    if (adminchoice == "1")
                    {

                        booking();
                    }
                    else if (adminchoice == "2")
                    {
                        checkbookingbyname();
                        break;
                    }
                    else if (adminchoice == "3")
                    {
                    }
                    else if (adminchoice == "4")
                    {
                    }
                    else if (adminchoice == "5")
                    {
                    }
                    else if (adminchoice == "6")
                    {
                    }
                    else if (adminchoice == "7")
                    {
                    }
                    else if (adminchoice == "8")
                    {
                        system("cls");
                        cout << " returning to main menu : ";
                        break;
                    }
                    else
                    {
                    }

                    //  cout << "Press enter to continue ";
                    // getch();
                }
            }
        }
        else if (choice == "2")
        {
            while (true)
            {

                system("cls");
                guestmenu();

                string guestchoice;

                cin >> guestchoice;

                if (guestchoice == "1")
                {
                    booking();
                }
                else if (guestchoice == "2")
                {
                    checkbookingbyname();
                    break;
                }
                else if (guestchoice == "3")
                {
                }
                else if (guestchoice == "4")
                {
                }
                else if (guestchoice == "5")
                {
                }
                else if (guestchoice == "6")
                {
                }
                else if (guestchoice == "7")
                {
                }
                else if (guestchoice == "8")
                {
                    system("cls");
                    cout << " returning to main menu : ";
                    break;
                }
                else
                {
                    cout << "You entered wrong choice ";
                }
                cout << "Press enter to continue ";
                getch();
            }
        }
        else if (choice == "3")
        {
            system("cls");
            cout << "Exiting the system   ";
            break;
        }
        else
        {
            system("cls");
            cout << "Invalid choice ";
        }
        cout << "Press enter to continue \n";
        getch();
    }

    cout << "thanks for using this software ";
}
// login functions
bool login()
{
    string username, pin;
    for (int i = 1; i <= 3; i++)
    {

        cout << "Enter your username ";
        cin >> username;
        cout << "Enter your password ";
        cin >> pin;

        if (username == "admin" && pin == "1234")
        {
            cout << "Login successfull\n";
            return true;
        }
        else
        {
            cout << "Wrong username or password \n";
        }
    }
    cout << "Too many attempts \n";
    return false;
}
// display main menu
void displaymainmenu()
{
    // system("cls");
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

    // main menu
    cout << "-------------------------------------------------------\n";
    cout << "-----------Welcome to SERENITY SPRING RESORT----------- \n";
    cout << "-------------------------------------------------------\n";
    cout << "1 - Management menu \n";
    cout << "2 - Guest menu \n";
    cout << "3 - Exit \n";
    cout << "Enter your choice";
}
// displaying main menu
void adminmenu()
{
    system("cls");
    cout << "-------------------------------------------------------\n";
    cout << "--------------------Management menu--------------------\n";
    cout << "-------------------------------------------------------\n";
    cout << "1 - Add booking     \n";
    cout << "2 - Search booking by date \n";
    cout << "3 - Search booking by name \n";
    cout << "4 - Check out      \n";
    cout << "5 - show available rooms \n";
    cout << "6 - Check  all time Reservation  \n";
    cout << "7 - Edit prices \n";
    cout << "8 - Return to main menu  \n";
    cout << "Enter your choice ";
}
// displaying guest menu
void guestmenu()
{
    system("cls");
    cout << "-------------------------------------------------------\n";
    cout << "----------------------GUEST MENU-----------------------\n";
    cout << "-------------------------------------------------------\n";
    cout << "1 - Room Booking          \n";
    cout << "2 - View Available Rooms  \n";
    cout << "3 - Tour Packages         \n";
    cout << "4 - Delete My Booking \n";
    cout << "5 - Information about leepa valley \n";
    cout << "6 - Return to main menu  \n";
    cout << "Enter your choice ";
}
void booking()
{
    system("cls");
    while (true)
    {
        int date, month;
        cout << "\nEnter Date(1-31) ";
        cin >> date;
        if (date < 1 || date > 31)
        {
            cout << "Invalid date. Please enter 1-31.\n";
            getch();
            continue;
        }
        cout << "\nEnter month (1-12) ";
        cin >> month;
        if (month < 1 || month > 12)
        {
            cout << "Invalid month. Please enter 1-12.\n";
            getch();
            continue;
        }

        cout << "Rooms No 1 to 4 are standard  (Price = RS" << roomprice[1] << " )";
        cout << "Rooms No 5 to 8 are Deluxe  (Price = RS" << roomprice[5] << " ) \n";
        cout << "Rooms No 9 and 10 are Suite ( Price = RS " << roomprice[9] << ")\n";
        cout << "\nEnter Room number (1-10) ";
        int room;
        cin >> room;
        if (room < 1 || room > 10)
        {
            cout << "Invalid room number. Please enter 1-10.\n";

            getch();
            continue;
        }
        int index = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);
        if (roomstatus[index] == 0)
        {
            cout << "Enter your name : ";
            cin.ignore();
            getline(cin, guestnames[index]);
            allguestnames[index] = guestnames[index];
            cout << "How many days you want to stay : ";
            cin >> daystay[index];
            alldaystay[index] = daystay[index];
            if (room <= 4)
            {
                cout << "--------Standard Room------- " << endl;
                cout << "You successfully booked Standard room  No " << room << endl;
                roomstatus[index] = 1;
                allroomstatus[index] = 1;
            }

            else if (room > 3 && room <= 8)
            {
                cout << "-------Deluxe  Room-------- " << endl;
                cout << "You successfully booked Deluxe room  No " << room << endl;
                roomstatus[index] = 1;
                allroomstatus[index] = 1;
            }
            else if (room > 8 && room <= 10)
            {
                cout << "-------SWeet  Room-------- " << endl;
                cout << "You successfully booked Suite  room  No " << room << endl;
                roomstatus[index] = 1;
                allroomstatus[index] = 1;
            }

            else
            {
                cout << "No such room available" << endl;
                continue;
            }
        }
        else
        {
            cout << " Soory for Inconvience \n Room is not available  \n";
        }
        cout << "Press any key to continue ";

        getch();
    }
}
void checkbookingbyname()
{
    int date, month, room;
    system("cls");
    cout << "\nEnter Date(1-31) ";
    cin >> date;
    if (date < 1 || date > 31)
    {
        cout << "Invalid date. Please enter 1-31.\n";
        getch();
    }
    cout << "\nEnter month (1-12) ";
    cin >> month;
    if (month < 1 || month > 12)
    {
        cout << "Invalid month. Please enter 1-12.\n";
        getch();
    }

    cout << "\nBookings for " << date << "/" << month << ":\n";

    bool found = false;
    for (int room = 1; room <= 10; room++)
    {
        int index = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);
        if (roomstatus[index] == 1)
        {
            cout << "Room " << room << " booked by " << guestnames[index] << " for " << daystay[index] << " days.\n";
            found = true;
        }
    }
    if (!found)
    {
        cout << "No bookings found for this date.\n";
    }
    cout << "Press any key to continue ";
    getch();
}