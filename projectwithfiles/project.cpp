#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

// fuctions prototypes
int displaymainmenu();
bool login();
int adminmenu();
int guestmenu();
void booking();
void checkbookingbydate();
void checkbookingbyname();
void checkout();
void showavailablerooms();
void checkalltimereservation();
void editprices();
void tourpackages();
void deletebooking();
void leepavalley();
void pause();

// files functions prototypes
void savebookings(int idx);
void savehistory(int idx);
void saveprices();
void loadbookings();
void loadoverallhistory();
void rewritebookingsfile();

// Global DATA Structures
string guestnames[3720];
string allguestnames[3720];
int roomprice[11] = {7500, 7500, 7500, 7500, 7500, 10000, 10000, 10000, 10000, 15000, 15000};
int roomstatus[3720];
int allroomstatus[3720];

// Global variables
int date, month, room, index;

//-----------Driver code------------
main()
{
    while (true) // start of main while loop
    {
        system("cls");
        int choice = displaymainmenu();

        if (choice == 1)
        {
            system("cls");
            login();
            while (true)
            {
                int adminchoice = adminmenu();

                if (adminchoice == 1)
                {
                    booking();
                }
                else if (adminchoice == 2)
                {
                    checkbookingbydate();
                }
                else if (adminchoice == 3)
                {
                    checkbookingbyname();
                }
                else if (adminchoice == 4)
                {
                    checkout();
                }
                else if (adminchoice == 5)
                {
                    showavailablerooms();
                }
                else if (adminchoice == 6)
                {
                    checkalltimereservation();
                }
                else if (adminchoice == 7)
                {
                    editprices();
                }
                else if (adminchoice == 8)
                {
                    system("cls");
                    cout << " returning to main menu  \n";
                    break;
                }
                else
                {
                    cout << "YOU CHOOESED WRONG CHOICE \n";
                    continue;
                }
            }
        }
        else if (choice == 2)
        {
            while (true)
            {

                system("cls");
                int guestchoice = guestmenu();

                if (guestchoice == 1)
                {
                    booking();
                }
                else if (guestchoice == 2)
                {
                    showavailablerooms();
                }
                else if (guestchoice == 3)
                {
                    tourpackages();
                }
                else if (guestchoice == 4)
                {
                    deletebooking();
                }
                else if (guestchoice == 5)
                {
                    leepavalley();
                }
                else if (guestchoice == 6)
                {
                    cout << "Returning to main menu\n";
                    break;
                }

                else
                {
                    cout << "You entered wrong choice \n";
                    continue;
                }
            }
        }
        else if (choice == 3)
        {
            system("cls");
            cout << "Exiting the system  \n ";
            cout << "thanks for using this software \n";
            pause();
            break;
        }
        else
        {
            system("cls");
            cout << "Invalid choice ";
        }
        pause();
    } // end of main while loop

} // --------------end of driver code-------------

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
int displaymainmenu()
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
    cout << "Enter your choice : ";
    int choice;
    cin >> choice;
    return choice;
}

// displaying main menu
int adminmenu()
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
    cout << "Enter your choice : ";
    int adminchoice;
    cin >> adminchoice;
    return adminchoice;
}

// displaying guest menu
int guestmenu()
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
    cout << "Enter your choice : ";
    int guestchoice;
    cin >> guestchoice;

    return guestchoice;
}

// pausing function
void pause()
{
    cout << "Press any key to continue ";
    getch();
}

// booking function
void booking()
{
    loadbookings();
    system("cls");
    while (true)
    {

        cout << "\nEnter Date (1-31): ";
        cin >> date;
        if (date < 1 || date > 31)
        {
            cout << "Invalid date.\n";
            getch();
            continue;
        }

        cout << "Enter Month (1-12): ";
        cin >> month;
        if (month < 1 || month > 12)
        {
            cout << "Invalid month.\n";
            getch();
            continue;
        }

        cout << "Rooms  1-4  : Standard  (RS " << roomprice[1] << "/night)\n";
        cout << "Rooms  5-8  : Deluxe    (RS " << roomprice[5] << "/night)\n";
        cout << "Rooms  9-10 : Suite     (RS " << roomprice[9] << "/night)\n";
        cout << "Enter Room number (1-10): ";

        cin >> room;
        if (room < 1 || room > 10)
        {
            cout << "Invalid room number.\n";
            getch();
            continue;
        }

        int idx = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);

        if (roomstatus[idx] == 0)
        {
            cout << "Enter your name: ";
            cin.ignore();
            getline(cin, guestnames[idx]);
            allguestnames[idx] = guestnames[idx];

            roomstatus[idx] = 1;
            allroomstatus[idx] = 1;

            // save the booking to files
            savebookings(idx);
            savehistory(idx);

            if (room <= 4)
                cout << "Standard Room " << room << " booked successfully!\n";
            else if (room <= 8)
                cout << "Deluxe Room " << room << " booked successfully!\n";
            else
                cout << "Suite Room " << room << " booked successfully!\n";
        }
        else
        {
            cout << "Sorry, that room is not available on that date.\n";
        }
        cout << "Press any key to continue ";
        getch();
        break;
    }
}

// saving booking to files
void savebookings(int idx)
{
    fstream file;
    file.open("bookings.txt", ios::app);
    if (!file)
    {
        cout << "Error: Could not save bookings!\n";
        return;
    }

    file << idx << "|" << guestnames[idx] << "|" << date << "/" << month << "|" << room << "|" << "\n";

    file.close();
}

// Save all-time reservation history to another file
void savehistory(int idx)
{
    fstream history;
    history.open("history.txt", ios::app);
    if (!history)
    {
        cout << "Error: Could not save history!\n";
        return;
    }

    history << idx << "|" << guestnames[idx] << "|" << date << "/" << month << "|" << room << "|" << "\n";

    history.close();
}
// loading overall history int data structures
void loadoverallhistory()
{
    fstream history;
    history.open("history.txt", ios::in);

    string record;

    while (getline(history, record))
    {
        string index = "";
        string name = "";
        string date = "";
        string roomStr = "";

        int slashcount = 0;

        for (int i = 0; i < record.length(); i++)
        {
            if (record[i] == '|')
            {
                slashcount++;
            }
            else
            {
                if (slashcount == 0)
                {
                    index = index + record[i];
                }
                else if (slashcount == 1)
                {
                    name = name + record[i];
                }
                else if (slashcount == 2)
                {
                    date = date + record[i];
                }
                else if (slashcount == 3)
                {
                    roomStr = roomStr + record[i];
                }
            }
        }

        int idx = stoi(index);

        allguestnames[idx] = name;

        allroomstatus[idx] = 1;
    }

    history.close();
}

// Save room prices file
void saveprices()
{
    fstream prices;
    prices.open("prices.txt", ios::out);
    if (!prices)
    {
        cout << "Error: Could not save prices!\n";
        return;
    }
    for (int i = 1; i <= 10; i++)
    {
        prices << i << "|" << roomprice[i] << "\n";
    }
    prices.close();
}

// load booking into arrays
void loadbookings()
{
    fstream file;
    file.open("bookings.txt", ios::in);

    string record;

    while (getline(file, record))
    {
        string index = "";
        string name = "";
        string date = "";
        string roomStr = "";

        int slashcount = 0;

        for (int i = 0; i < record.length(); i++)
        {
            if (record[i] == '|')
            {
                slashcount++;
            }
            else
            {
                if (slashcount == 0)
                {
                    index = index + record[i];
                }
                else if (slashcount == 1)
                {
                    name = name + record[i];
                }
                else if (slashcount == 2)
                {
                    date = date + record[i];
                }
                else if (slashcount == 3)
                {
                    roomStr = roomStr + record[i];
                }
            }
        }

        int idx = stoi(index);

        guestnames[idx] = name;

        roomstatus[idx] = 1;
    }

    file.close();
}

// checkout function
void checkout()
{
    loadbookings();
    system("cls");
    int date, month, room;
    cout << "Enter Date (1-31): ";
    cin >> date;
    cout << "Enter Month (1-12): ";
    cin >> month;
    cout << "Enter Room Number (1-10): ";
    cin >> room;

    int idx = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);

    if (roomstatus[idx] == 1)
    {
        int bill = roomprice[room];
        cout << "Guest: " << guestnames[idx] << "\n";
        cout << "Days stayed: " << "\n";
        cout << "Total bill: RS " << bill << "\n";

        roomstatus[idx] = 0;
        guestnames[idx] = "";

        rewritebookingsfile();

        cout << "Room checked out successfully!\n";
    }
    else
    {
        cout << "Room is already empty!\n";
    }
    pause();
}

// check bookinng by name function
void checkbookingbyname()
{
    loadbookings();
    system("cls");
    string name;
    cout << "\nEnter guest name to search: ";
    cin.ignore();
    getline(cin, name);

    bool found = false;
    for (int i = 0; i < 3720; i++)
    {
        if (roomstatus[i] == 1 && guestnames[i] == name)
        {
            int m = (i / (31 * 10)) + 1;
            int tmp = i % (31 * 10);
            int d = (tmp / 10) + 1;
            int r = (tmp % 10) + 1;
            cout << "Booking found: " << name << " | Room " << r << " | Date " << d << "/" << m << " | " << " days\n";
            found = true;
        }
    }
    if (!found)
        cout << "No booking found for this guest name.\n";
    pause();
}

// check booking by date 
void checkbookingbydate()
{
    loadbookings();
    while (true)
    {
        system("cls");
        cout << "Enter Date (1-31): ";
        cin >> date;
        if (date < 1 || date > 31)
        {
            cout << "Invalid date.\n";
            getch();
            continue;
        }

        cout << "Enter Month (1-12): ";
        cin >> month;
        if (month < 1 || month > 12)
        {
            cout << "Invalid month.\n";
            getch();
            continue;
        }

        cout << "\nBookings for " << date << "/" << month << ":\n";
        bool found = false;
        for (int r = 1; r <= 10; r++)
        {
            int idx = (month - 1) * 31 * 10 + (date - 1) * 10 + (r - 1);
            if (roomstatus[idx] == 1)
            {
                cout << "Room " << r << " | Guest: " << guestnames[idx] << "\n";
                found = true;
            }
        }
        if (!found)
            cout << "No bookings found for this date.\n";
        cout << "Press any key to continue ";
        getch();
        break;
    }
}

// showing available rooms 
void showavailablerooms()
{
    loadbookings();
    system("cls");
    cout << "Enter Date (1-31): ";
    cin >> date;
    cout << "Enter Month (1-12): ";
    cin >> month;

    cout << "\nAvailable rooms on " << date << "/" << month << ":\n";
    for (int r = 1; r <= 10; r++)
    {
        int idx = (month - 1) * 31 * 10 + (date - 1) * 10 + (r - 1);
        if (roomstatus[idx] == 0)
        {
            cout << "Room " << r;
            if (r <= 4)
                cout << " | Standard | RS " << roomprice[1];
            else if (r <= 8)
                cout << " | Deluxe   | RS " << roomprice[5];
            else
                cout << " | Suite    | RS " << roomprice[9];
            cout << "/night\n";
        }
    }
    cout << "Press any key to continue ";
    getch();
}

void checkalltimereservation()
{
    loadoverallhistory();
    
    int found = 0;
    for (int i = 0; i < 3720; i++)
    {
        if (allroomstatus[i] == 1)
        {
            found = 1;
            int m = (i / (31 * 10)) + 1;
            int tmp = i % (31 * 10);
            int d = (tmp / 10) + 1;
            int r = (tmp % 10) + 1;
            cout << "Date: " << d << "  Month: " << m << "  Room: " << r << "  Guest: " << allguestnames[i] << "\n";
        }
    }
    if (found == 0)
    {
        cout << "No reservations found.\n";
    }
    pause();
}

// function to edit prices
void editprices()
{
    system("cls");
    string category;
    cout << "Enter room category (Standard / Deluxe / Suite): ";
    cin >> category;

    int newprice;
    cout << "Enter new price: ";
    cin >> newprice;

    if (category == "Standard")
    {
        for (int i = 1; i <= 4; i++)
            roomprice[i] = newprice;
        cout << "Standard room price updated to RS " << newprice << "\n";
    }
    else if (category == "Deluxe")
    {
        for (int i = 5; i <= 8; i++)
            roomprice[i] = newprice;
        cout << "Deluxe room price updated to RS " << newprice << "\n";
    }
    else if (category == "Suite")
    {
        roomprice[9] = newprice;
        roomprice[10] = newprice;
        cout << "Suite room price updated to RS " << newprice << "\n";
    }
    else
    {
        cout << "Invalid category. Use Standard, Deluxe, or Suite.\n";
    }
    saveprices();
    pause();
}

void deletebooking()
{
    loadbookings();
    system("cls");
    cout << "Enter Date (1-31): ";
    cin >> date;
    cout << "Enter Month (1-12): ";
    cin >> month;
    cout << "Enter Room Number (1-10): ";
    cin >> room;

    int idx = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);

    if (roomstatus[idx] == 1)
    {
        roomstatus[idx] = 0;
        guestnames[idx] = "";

        // deleting the booking via function call
       rewritebookingsfile();

        cout << "Booking deleted successfully\n";
    }
    else
    {
        cout << "No active booking found for that room and date.\n";
    }
    pause();
}

void tourpackages()
{
    loadbookings();
    while (true)
    {
        system("cls");
        cout << "1 - 3-day Leepa Valley package (2 nights) RS 30,000/person\n";
        cout << "2 - 5-day Leepa Valley package (4 nights) RS 50,000/person\n";
        cout << "3 - 7-day Leepa Valley package (6 nights) RS 60,000/person\n";
        cout << "More info on our website.\n";

        char bookPackage;
        cout << "\nBook a tour package? (y/n): ";
        cin >> bookPackage;

        if (bookPackage == 'y' || bookPackage == 'Y')
        {
            int packageChoice;
            cout << "Enter package number (1-3): ";
            cin >> packageChoice;

            if (packageChoice < 1 || packageChoice > 3)
            {
                cout << "Invalid package choice.\n";
                getch();
                continue;
            }

            int days = 0, nights = 0, price = 0;
            if (packageChoice == 1)
            {
                days = 3;
                nights = 2;
                price = 30000;
            }
            else if (packageChoice == 2)
            {
                days = 5;
                nights = 4;
                price = 50000;
            }
            else if (packageChoice == 3)
            {
                days = 7;
                nights = 6;
                price = 60000;
            }

            int numPeople;
            cout << "Enter number of people: ";
            cin >> numPeople;
            if (numPeople < 1)
            {
                cout << "Invalid number.\n";
                getch();
                continue;
            }

            int startdate, startmonth;
            cout << "Enter start date (1-31): ";
            cin >> startdate;
            if (startdate < 1 || startdate > 31)
            {
                cout << "Invalid date.\n";
                getch();
                continue;
            }
            cout << "Enter start month (1-12): ";
            cin >> startmonth;
            if (startmonth < 1 || startmonth > 12)
            {
                cout << "Invalid month.\n";
                getch();
                continue;
            }

            int availableRooms[10];
            int availCount = 0;
            for (int r = 1; r <= 10; r++)
            {
                int idx = (startmonth - 1) * 31 * 10 + (startdate - 1) * 10 + (r - 1);
                if (roomstatus[idx] == 0)
                    availableRooms[availCount++] = r;
            }

            if (availCount >= numPeople)
            {
                string guestName;
                cout << "Enter guest name: ";
                cin.ignore();
                getline(cin, guestName);

                for (int i = 0; i < numPeople; i++)
                {
                    int r = availableRooms[i];
                    int idx = (startmonth - 1) * 31 * 10 + (startdate - 1) * 10 + (r - 1);
                    roomstatus[idx] = 1;
                    allroomstatus[idx] = 1;
                    guestnames[idx] = guestName;
                    allguestnames[idx] = guestName;
                    cout << "Room " << r << " booked for package.\n";
                    savehistory(idx);
                    savebookings(idx);
                }

                cout << "Package booked for " << numPeople << " people.\n";
                cout << "Total cost: RS " << price * numPeople << "\n";
            }
            else
            {
                cout << "Not enough rooms available for " << numPeople << " people.\n";
            }
        }

        pause();
        break;
    }
}

// information about leepa valley function
void leepavalley()
{

    system("cls");
    cout << "Information about Leepa valley Kashmir \n";
    cout << "Leepa valley is located in Azad Kashmir.\n The distance of Leepa valley from Capital of Azad Kashmir is only 100 km \n";
    cout << "From Muzaffarabad you have to move towards Srinagar along the Famous River Jehlum on Muzzafarabad chakothi Road  . After travelling 40 km on the same road you get to Hatian Bala . ";
    cout << "After Crossing Hatian bala Main Bazar you get to Niali . From there move to left side of road and continuouusly move alon hatian to leepa road after  travelling 55 km you will reach Leepa Valley \n";

    cout << "|----------------------------------------------Leepa Valley Road Map and view points----------------------------------------------|\n";
    cout << "|                 *                                                                                                               |\n";
    cout << "|                *                                                                                                                |\n";
    cout << "|               *                                                                                                                 |\n";
    cout << "|             Rassian *                                                                                                           |\n";
    cout << "|               *      *                                                                                                          |\n";
    cout << "|              *          *                                                                       12 Hazari top                   |\n";
    cout << "|            *               *                Panjal Gali                                        *          *                     |\n";
    cout << "|         *                     *                                                              *              *        kojean     |\n";
    cout << "|           *                       *                                                        *                  *                 |\n";
    cout << "|             *                        *                                                   *                     *                |\n";
    cout << "|               *                          *                                             *                        *               |\n";
    cout << "|             *                                *                                         *                         *              |\n";
    cout << "|          Dao Khan View point                    *                                      *                          *             |\n";
    cout << "|              *                                       *   *  *    *                     *                           *            |\n";
    cout << "|                *                                    *    *    *                       *                            *            |\n";
    cout << "|                  *                                 *                                  *                             *           |\n";
    cout << "|                    *                                 *                               *                               *          |\n";
    cout << "|               *  *                                     *    *      *     *    *     *                                 *         |\n";
    cout << "|            *                                                     bathwar gali      *                                  *         |\n";
    cout << "|          *                                                                        *                                   *         |\n";
    cout << "|         *   *  *                                                                 *                                    *         |\n";
    cout << "|                  *                                                              *                                     *         |\n";
    cout << "|                     *                                                          *                                       *        |\n";
    cout << "|                       * Sher Gali Top( also called minni babusar )            *                                         *       |\n";
    cout << "|                             *                                                *                                          *       |\n";
    cout << "|                                 *                                           *                                           *       |\n";
    cout << "|                                     *                                      *                                            *       |\n";
    cout << "|                                         *                                 *                                             *       |\n";
    cout << "|                                              *     *                     *                                           *  *       |\n";
    cout << "|                                                          *              *                                         *      *      |\n";
    cout << "|                                                       *                *                                        *        *      |\n";
    cout << "|                                                   *                   *                                        *         *      |\n";
    cout << "|                                               *                      *                                      * mandakuli  *      |\n";
    cout << "|                                        *                            *                                      *             *     /|\n";
    cout << "|                                  *                                 *                                     *               *    / |\n";
    cout << "|                              *                                                                          *                    /  |\n";
    cout << "|                          *                                           *                               *                      /   |\n";
    cout << "|'                     *    Moji(utli basti)                              *                          *Nokot Gali             /    |\n";
    cout << "|.                                                                                                 *                        /     |\n";
    cout << "| .                      *                                                   *                   *                        /       |\n";
    cout << "| .                         *                                                   *               *                       /         |\n";
    cout << "| .                           *                                                                *                      /           |\n";
    cout << "| .                             *                                               * leepa main bazar                   /            |\n";
    cout << "| .                               *  Moji Bazar                               *                                      /            |\n";
    cout << "| .LOC                            *                                          *                                       /            |\n";
    cout << "| .                               *                                        *                                         /LOC         |\n";
    cout << "| .                                 *                                    * *                                        /             |\n";
    cout << "| .                              *   *                                  *     *                                     /             |\n";
    cout << "| .                            *      *                               *          *                                  /             |\n";
    cout << "| .     chackmuqam           *          *                           *               *                               /             |\n";
    cout << "| .                        *            *                         *                    *                            /             |\n";
    cout << "| .                       *                  *       Banamula   *                                                   /             |\n";
    cout << "| .                     *                       *             *                            *  Bijaldhar             /             |\n";
    cout << "| .                    *                         *    *    *                                                        /             |\n";
    cout << "| .                   *                                                                                            /              |\n";
    cout << "| .                  *                                                                                           /                |\n";
    cout << "| .                *                                                                                            /                 |\n";
    cout << "| .      lubgran *                                                                                             /                  |\n";
    cout << "| .              *                                                                                           /                    |\n";
    cout << "| .              *                                                                                          /                     |\n";
    cout << "|  .             *                       . . . .                                                          /                       |\n";
    cout << "|  .             *                    .         .                                                       /                         |\n";
    cout << "|  .              *                 .            .                                                    /                           |\n";
    cout << "|  .              *               .               .                                                   /                           |\n";
    cout << "|  .     tareda   *             .                   .                                                 /                           |\n";
    cout << "|  .               *          .                       .                                                /                          |\n";
    cout << "|  . loc point tareda        .                          .                                               /                         |\n";
    cout << "|   .                       .                             .                                            /                          |\n";
    cout << "|      .   .  .  .  .  .. ..                                .     .       .      .      .   .   . /                               |\n";
    cout << "|                                                             .                                                                   |\n";
    cout << "|                                                              .                                                                  |\n";
    cout << "|                                                               .                                                                 |\n";
    cout << "|                                                                .                                                                |\n";
    cout << "|                                                                .LOC                                                             |\n";
    cout << "|                                                                .                                                                |\n";
    cout << "|                                                                                                                                 |\n";
    cout << "|                                                                .                      NEELUM VALLEY                             |\n";
    cout << "|                                                                .                                                                |\n";
    cout << "|                                                                .                                                                |\n";
    cout << "|                                                                .                                                                |\n";
    cout << "|        jammu                                                   .                                                                |\n";
    cout << "|          kashmir                                               .                                                                |\n";
    cout << "|                                                                .                                                                |\n";
    cout << "|                                                                .                                                                |\n";
    cout << "|                                                                .                                                                |\n";
    cout << "|                                                                .                                                                |\n";
    cout << "|---------------------------------------------------------------------------------------------------------------------------------|\n";
    pause();
}
void rewritebookingsfile()
{
    fstream file;
    file.open("bookings.txt", ios::out);

    if (!file)
    {
        cout << "Error updating bookings file\n";
        return;
    }

    for (int i = 0; i < 3720; i++)
    {
        if (roomstatus[i] == 1)
        {
            int m = (i / (31 * 10)) + 1;
            int temp = i % (31 * 10);
            int d = (temp / 10) + 1;
            int r = (temp % 10) + 1;

            file << i << "|"
                 << guestnames[i] << "|"
                 << d << "/" << m << "|"
                 << r << "|\n";
        }
    }

    file.close();
}